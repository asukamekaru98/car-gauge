#include "DxLib.h"
#include "typedef.h"
#include "main.h"



INIT_RESULT InitProgram() {

    ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�

    if (DxLib_Init() == -1
        
        || ChangeWindowMode(true) == DX_CHANGESCREEN_OK     // �E�C���h�E���[�h�E�t���X�N���[�����[�h�̕ύX
        || SetMainWindowText(WINDOW_SCREEN_NAME)            // �E�B���h�E�̃^�C�g��
        //|| SetWindowIconID() == ERROR;
        || SetWindowSizeChangeEnableFlag(false) == ERROR
        || SetWindowSizeExtendRate(800,600) == ERROR           // �E�C���h�E���[�h�̎��̃E�C���h�E�̑傫���ƕ`���ʂ̑傫���̔䗦��ݒ�

        ){
        throw INIT_RESULT_ERROR;   // DX���C�u��������������
    }

  
    SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8); // �����R�[�h
    

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
        Opening();
    }

   



    DxLib_End();    // DX���C�u�����I������
    return 0;
}
