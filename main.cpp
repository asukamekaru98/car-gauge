#include "DxLib.h"
#include "typedef.h"

#


INIT_RESULT InitProgram() {

    ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�

    if (DxLib_Init() == -1) {
        throw INIT_RESULT_ERROR;   // DX���C�u��������������
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

   



    DxLib_End();    // DX���C�u�����I������
    return 0;
}

