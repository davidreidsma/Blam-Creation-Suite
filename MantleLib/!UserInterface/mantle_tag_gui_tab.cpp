#include "mantlelib-private-pch.h"

int c_mantle_tag_gui_tab::g_current_recursion_depth = 0;
float c_mantle_tag_gui_tab::g_current_recursion_padding = 0.0f;
thread_local c_mantle_tag_gui_tab* c_mantle_tag_gui_tab::g_current_mantle_tag_tab = nullptr;

#include <GUI/render_primitive_gui.inl>
#include <GUI/render_stringid_gui.inl>
#include <GUI/render_struct_gui.inl>
#include <GUI/render_tagref_gui.inl>
#include <GUI/render_dataref_gui.inl>
#include <GUI/render_tagblock_gui.inl>
// #TODO: include GeneratedGUI.cpp here and force inline all of the render functions

c_mantle_tag_gui_tab::c_mantle_tag_gui_tab(c_cache_file& cache_file, c_tag_interface& tag_interface, c_mantle_gui_tab* parent_tag) : 
	c_mantle_gui_tab(tag_interface.get_name_with_group_id_cstr(), tag_interface.get_path_with_group_name_cstr()),
	tag_interface(tag_interface),
	cache_file(cache_file),
	parent_tab(parent_tag),
	is_selected(false)
{

}

c_mantle_tag_gui_tab::~c_mantle_tag_gui_tab()
{
	for (ImGUIDynamicData* pDynamicData : m_imGuiDynamicData)
	{
		delete pDynamicData;
	}
}

void c_mantle_tag_gui_tab::increment_recursion()
{
	g_current_recursion_depth++;
	g_current_recursion_padding = recursion_padding_amount * static_cast<float>(g_current_recursion_depth);
}

void c_mantle_tag_gui_tab::decrement_recursion()
{
	g_current_recursion_depth--;
	g_current_recursion_padding = recursion_padding_amount * static_cast<float>(g_current_recursion_depth);
}

void c_mantle_tag_gui_tab::copy_data_recursively(const s_reflection_type& reflection_type, char* source, char* destination)
{
	// #TODO: Package up all of the tag data into a single packet
	// #TODO: Patch the tag address table to make room for extra data

	memcpy(destination, source, reflection_type.size_of_data);

	for (size_t i = 0; i < reflection_type.members_count; i++)
	{
		const c_reflection_field& reflection_field = reflection_type.fields[i];
		const s_reflection_type_info& type_info = reflection_field.type_info;

		if (!reflection_field.array_size)
		{
			if (type_info.reflection_type_category == e_reflection_type_category::TagBlock)
			{
				s_tag_block_definition<>* tag_block = reinterpret_cast<s_tag_block_definition<>*>(source + reflection_field.offset);
				const s_reflection_tag_block_info& rs_reflection_tag_block_info = reflection_field.tag_block_info;
				const s_reflection_type* tag_block_reflection_type = rs_reflection_tag_block_info.reflection_type;


				if (tag_block->count && tag_block->address)
				{
					char* pTagBlockDataSource = cache_file.GetTagBlockData<char>(*tag_block); // #TODO: Remove GetTagBlockData and replace with virtual tag interface/virtual tab block data access
					char* pTagBlockDataDest = c_mantle_gui::get_tag_selection_address(tag_block->address);

					for (uint32_t i = 0; i < tag_block->count; i++)
					{
						//memcpy(pTagBlockDest, pTagBlockDataSource, tag_block_reflection_type->m_size);
						uint32_t offset = tag_block_reflection_type->size_of_data * i;
						copy_data_recursively(*tag_block_reflection_type, pTagBlockDataSource + offset, pTagBlockDataDest + offset);
					}
				}
			}
		}
	}
}

void c_mantle_tag_gui_tab::poke()
{
	char* pDest = static_cast<char*>(c_mantle_gui::get_tag_pointer(get_tag_interface().get_index()));
	if (pDest)
	{

		char* pSource = cache_file.get_tag_interface(get_tag_interface().get_index())->get_data();

		const s_reflection_type* ps_reflection_type = tag_interface.get_reflection_data();
		copy_data_recursively(*ps_reflection_type, pSource, pDest);

		write_line_verbose("Successfully poked tag '%s'", get_tag_interface().get_name_with_group_id_cstr());
	}
	else
	{
		write_line_verbose("Failed to poke tag '%s' as pDest was null", get_tag_interface().get_name_with_group_id_cstr());
	}

}

void c_mantle_tag_gui_tab::render_tab_contents_gui(bool set_selected)
{
	ImGui::PushID(this);
	ImGuiTabItemFlags tabFlags = 0;
	if (set_selected) tabFlags |= ImGuiTabItemFlags_SetSelected;


	is_selected = false;
	if (ImGui::BeginTabItem(get_title(), &is_open, tabFlags))
	{
		is_selected = true;
		ImGui::BeginChild("##scroll_view", ImVec2(0, 0), false);

		const s_reflection_type* ps_reflection_type = tag_interface.get_reflection_data();
		if (ps_reflection_type)
		{
			g_current_mantle_tag_tab = this;
			ps_reflection_type->render_type_gui(tag_interface.get_data());
		}
		else
		{
			ImGui::Text("No reflection information found for '%s'", tag_interface.get_group_short_name());
		}

		ImGui::EndChild();
		ImGui::EndTabItem();
	}
	ImGui::PopID();
}

void c_mantle_tag_gui_tab::RenderButtons()
{
	if (c_mantle_gui::is_game())
	{
		if (!is_selected) return;

		if (ImGui::Button("Poke"))
		{
			poke();
		}
	}
}
