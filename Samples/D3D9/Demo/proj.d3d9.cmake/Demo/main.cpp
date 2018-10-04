/*
 * Copyright(c) Live2D Inc. All rights reserved.
 *
 * Use of this source code is governed by the Live2D Open Software license
 * that can be found at http://live2d.com/eula/live2d-open-software-license-agreement_en.html.
 */

#include <windows.h>

#include "LAppDelegate.hpp"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int)
{
    // アプリケーション初期化 
    if (!LAppDelegate::GetInstance()->Initialize())
    {// 初期化失敗 
        LAppDelegate::GetInstance()->Release();
        LAppDelegate::ReleaseInstance();
        return 1;
    }

    LAppDelegate::GetInstance()->Run();

    return 0;
}
