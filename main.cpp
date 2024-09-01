#include "DxLib.h"
#include "typedef.h"

#


INIT_RESULT InitProgram() {

    ChangeWindowMode(TRUE); // ウィンドウモードに設定

    if (DxLib_Init() == -1) {
        throw INIT_RESULT_ERROR;   // DXライブラリ初期化処理
    }



    return INIT_RESULT_SUCCESS;
}


OPENING_WINDOW Opening() {



}


int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
   
    
    try {
        InitProgram();



    }
    catch (INIT_RESULT exception) {


        return 0;
    };
        

    while (true) {
       
    }

   



    DxLib_End();    // DXライブラリ終了処理
    return 0;
}

