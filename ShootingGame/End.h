#pragma once
#include "AbstractScene.h"

class End : public AbstractScene
{
private:
    int g_WaitTime;   //�I���܂ł̎���
    int g_PosY; //�G���h���[���p
    int EndImage;  //�摜�p
    
public:
    //�R���X�g���N�^
    End();
    //�f�X�g���N�^
    ~End();
    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;
    //�`��Ɋւ��邱�Ƃ�����
    void Draw()const;
};
