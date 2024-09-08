#include "../DxLib/DxLib.h"
#include "../header/typedef.h"
#include "../header/main.h"



INIT_RESULT InitProgram() {

    ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�

    if (DxLib_Init() == -1
        
        || ChangeWindowMode(true) != DX_CHANGESCREEN_OK     // �E�C���h�E���[�h�E�t���X�N���[�����[�h�̕ύX
        || SetMainWindowText(WINDOW_SCREEN_NAME) == ERROR   // �E�B���h�E�̃^�C�g��
        //|| SetWindowIconID() == ERROR;
        || SetWindowSizeChangeEnableFlag(false) == ERROR
        || SetWindowSizeExtendRate(800,600) == ERROR        // �E�C���h�E���[�h�̎��̃E�C���h�E�̑傫���ƕ`���ʂ̑傫���̔䗦��ݒ�

        ){
        throw INIT_RESULT_ERROR;   // DX���C�u��������������
    }

  
    SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8); // �����R�[�h
   

    return INIT_RESULT_SUCCESS;
}


OPENING_WINDOW Opening() {


    DrawPixel(320, 240, GetColor(255, 255, 255));	// �_��ł�

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

   



    DxLib_End();    // DX���C�u�����I������
    return 0;
}
