#pragma once

#include <utility>

extern void init_detours();
extern void end_detours();

void* __create_hook(const char pName[], const char pModuleName[], size_t offset, size_t baseAddress, void* pHookFunction);
void* __create_dll_hook(const char pModuleName[], const char* pProcedureName, void* pHookFunction);

template<size_t offset, typename Ta, typename Tb>
void create_hook(const char pModuleName[], size_t baseAddress, const char pName[], Ta hook, Tb& rOriginal)
{
	rOriginal = (Tb)(reinterpret_cast<char*>(GetModuleHandleA(pModuleName)) + (offset - baseAddress));

	PVOID* ppPointer = reinterpret_cast<void**>(&rOriginal);
	PVOID pDetour = reinterpret_cast<void*>(hook);
	LONG detourAttachResult = DetourAttach(ppPointer, pDetour);

	if (detourAttachResult)
	{
		const char* detourAttachResultStr = GetDetourResultStr(detourAttachResult);
		WriteLineVerbose("Failed to hook %s. Reason: %s", pName, detourAttachResultStr);
	}
	else
	{
		WriteLineVerbose("Successfully hooked %s", pName);
	}
}

template<typename Ta, typename Tb>
void create_dll_hook(const char pModuleName[], const char* pProcedureName, Ta hook, Tb& rOriginal)
{
	// Find the function address
	HMODULE hModule = GetModuleHandleA(pModuleName);
	assert(hModule);
	FARPROC RegisterClassExAProc = GetProcAddress(hModule, pProcedureName);
	assert(RegisterClassExAProc);

	rOriginal = (Tb)RegisterClassExAProc;

	if (hook)
	{
		PVOID* ppPointer = reinterpret_cast<void**>(&rOriginal);
		PVOID pDetour = reinterpret_cast<void*>(hook);
		LONG detourAttachResult = DetourAttach(ppPointer, pDetour);

		if (detourAttachResult)
		{
			const char* detourAttachResultStr = GetDetourResultStr(detourAttachResult);
			WriteLineVerbose("Failed to hook %s %s. Reason: %s", pModuleName, pProcedureName, detourAttachResultStr);
		}
		else
		{
			WriteLineVerbose("Successfully hooked %s %s", pModuleName, pProcedureName);
		}
	}
}

template<size_t offset, typename T>
void populate_function_ptr(const char pModuleName[], size_t baseAddress, T& dest)
{
	// Find the function address
	const char* const pBaseAddress = reinterpret_cast<char*>(GetModuleHandleA(pModuleName));
	const char* const pFunctionAddress = pBaseAddress + (offset - baseAddress);

	dest = reinterpret_cast<T>(pFunctionAddress);
}

extern void nullsub();
