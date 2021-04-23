#include<stdio.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int r;
	printf("-----¿À´Ã ¹ä ");
	r = rand() % 20; // 0~19 Á¤¼ö
	switch (r)
	{
	case 0:
		printf("Âò´ß");
		break;
	case 1:
		printf("´ßÇÑ¸¶¸®");
		break;
	case 2:
		printf("´ß°¥ºñ");
		break;
	case 3:
		printf("ÇÇÀÚ");
		break;
	case 4:
		printf("»êµ·");
		break;
	case 5:
		printf("¸¶¶óÅÁ");
		break;
	case 6:
		printf("½Ò±¹¼ö");
		break;
	case 7:
		printf("´ßÄ®");
		break;
	case 8:
		printf("Ä«·¹");
		break;
	case 9:
		printf("±èÄ¡Âî°³");
		break;
	case 10:
		printf("º¸½ÓÁ¤½Ä");
		break;
	case 11:
		printf("Â«»Í");
		break;
	case 12:
		printf("ÆÄ½ºÅ¸");
		break;
	case 13:
		printf("µ·±ú½º");
		break;
	case 14:
		printf("¾ËÃÌ");
		break;
	case 15:
		printf("ÇÑ¼Ü");
		break;
	case 16:
		printf("ÇÜ¹ö°Å");
		break;
	case 17:
		printf("Ä¡Å²");
		break;
	case 18:
		printf("»þºê»þºê");
		break;
	case 19:
		printf("±¾ÀÚ");
		break;
	}
	printf("-----\n");
}