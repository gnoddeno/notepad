#include<stdio.h>
#include<time.h>
int main() {
	int a;
	srand(time(NULL));
	printf("������ ���� �޴��� ");
	a = rand() % 8;
	switch (a)
	{
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("�� ���屹\n");
		break;
	case 2:
		printf("�н�\n");
		break;
	case 3:
		printf("��Į\n");
		break;
	case 4:
		printf("���� ���\n");
		break;
	case 5:
		printf("cu ���\n");
		break;
	case 6:
		printf("��ġ��\n");
		break;
	case 7:
		printf("�䷹Ÿ\n");
		break;
	}
}