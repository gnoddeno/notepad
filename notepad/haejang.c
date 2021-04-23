#include<stdio.h>
#include<time.h>
int main() {
	int a;
	srand(time(NULL));
	printf("오늘의 해장 메뉴는 ");
	a = rand() % 8;
	switch (a)
	{
	case 0:
		printf("국밥\n");
		break;
	case 1:
		printf("뼈 해장국\n");
		break;
	case 2:
		printf("학식\n");
		break;
	case 3:
		printf("닭칼\n");
		break;
	case 4:
		printf("해장 라면\n");
		break;
	case 5:
		printf("cu 라면\n");
		break;
	case 6:
		printf("김치만\n");
		break;
	case 7:
		printf("토레타\n");
		break;
	}
}