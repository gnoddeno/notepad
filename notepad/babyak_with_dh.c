#include<stdio.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int r;
	printf("-----���� �� ");
	r = rand() % 20; // 0~19 ����
	switch (r)
	{
	case 0:
		printf("���");
		break;
	case 1:
		printf("���Ѹ���");
		break;
	case 2:
		printf("�߰���");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("�굷");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("�ұ���");
		break;
	case 7:
		printf("��Į");
		break;
	case 8:
		printf("ī��");
		break;
	case 9:
		printf("��ġ�");
		break;
	case 10:
		printf("��������");
		break;
	case 11:
		printf("«��");
		break;
	case 12:
		printf("�Ľ�Ÿ");
		break;
	case 13:
		printf("������");
		break;
	case 14:
		printf("����");
		break;
	case 15:
		printf("�Ѽ�");
		break;
	case 16:
		printf("�ܹ���");
		break;
	case 17:
		printf("ġŲ");
		break;
	case 18:
		printf("�������");
		break;
	case 19:
		printf("����");
		break;
	}
	printf("-----\n");
}