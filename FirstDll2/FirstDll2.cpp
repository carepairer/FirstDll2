// FirstDll2.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "FirstDll2.h"


// 这是导出变量的一个示例,再试着修改一下注释
FIRSTDLL2_API int nFirstDll2=0;

// 这是导出函数的一个示例。
FIRSTDLL2_API int fnFirstDll2(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CFirstDll2::CFirstDll2()
{
    return;
}
