#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int x = scanf("%d%d", &a, &b);
	if (x == 2) {//�A�h���X��n��
		//���ׂĐ���ɓ��͂��ꂽ�ꍇ
		printf("%d �� %d �����͂���܂����B\n", a, b);//�f�[�^��n��
	}
	else {
		//�ǂꂩ�͐���ɓ��͂���Ȃ������ꍇ
		printf("����ɓ��͂���܂���ł����B\n");
	}
}
