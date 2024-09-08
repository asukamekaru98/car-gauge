#include "../DxLib/DxLib.h"
#include "../header/typedef.h"
#include "../header/main.h"



INIT_RESULT InitProgram() {

    ChangeWindowMode(TRUE); // ウィンドウモードに設定

    if (DxLib_Init() == -1
        
        || ChangeWindowMode(true) != DX_CHANGESCREEN_OK     // ウインドウモード・フルスクリーンモードの変更
        || SetMainWindowText(WINDOW_SCREEN_NAME) == ERROR   // ウィンドウのタイトル
        //|| SetWindowIconID() == ERROR;
        || SetWindowSizeChangeEnableFlag(false) == ERROR
        || SetWindowSizeExtendRate(800,600) == ERROR        // ウインドウモードの時のウインドウの大きさと描画画面の大きさの比率を設定

        ){
        throw INIT_RESULT_ERROR;   // DXライブラリ初期化処理
    }

  
    SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8); // 文字コード
   

    return INIT_RESULT_SUCCESS;
}


OPENING_WINDOW Opening() {


    DrawPixel(320, 240, GetColor(255, 255, 255));	// 点を打つ

    return OP_SUCCESS;
}


int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
   
    
    try {
        InitProgram();



    }
    catch (INIT_RESULT exception) {


        return 0;
    };
        

    while (true) {
        if (OP_FAILURE == Opening()) {
            break;
        }
    }

   



    DxLib_End();    // DXライブラリ終了処理
    return 0;
}
