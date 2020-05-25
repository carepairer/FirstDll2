// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

//声明导出函数，把ccc()这个函数导出出去
extern "C" __declspec(dllexport) void ccc();

//用作导出函数： 接口
void ccc()
{
	MessageBox(NULL, "导出函数被调用成功！！", "信息:", MB_YESNO);
}

//要干的事情
void start()
{
	MessageBox(NULL, "远程dll注入测试加载成功！！", "信息:", MB_YESNO);
}

//卸载后的事
void end()
{
	MessageBox(NULL, "远程dll注入测试卸载成功！！", "信息:", MB_YESNO);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		//加载时候做的事
		start();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
		//卸载时候做的事
		end();
        break;
    }
    return TRUE;
}

