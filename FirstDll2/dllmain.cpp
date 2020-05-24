﻿// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

extern "C" __declspec(dllexport) void ccc();

void ccc()
{
	MessageBox(NULL, "导出函数被调用成功！！", "信息：", MB_YESNO);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

