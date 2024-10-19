#include <stdio.h>

int main (void) {

	int grade;
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	unsigned int cCount = 0;
	unsigned int dCount = 0;
	unsigned int fCount = 0;
	puts ( "Введите оценку ученика \n Нажми ctrl+d для выходна" );

	while ( (grade = getchar() ) != EOF) {

		switch (grade){
		case 'A':
		case 'a':
		++aCount;
		break;

		case 'B':
		case 'b':
		++bCount;
		break;

		case 'C':
		case 'c':
		++cCount;
		break;

		case 'D':
		case 'd':
		++dCount;
		break;

		case 'F':
		case 'f':
		++fCount;
		break;

		case '\n':
		case '\t':
		case ' ':
		break;

		default:
		printf("%s", "Некорретная оценку\n");
		puts ("Введите новую оценку:");
		break;
		}
	}
	puts ("Оценки:");
	printf ("A: %d\n", aCount);
	printf ("B: %d\n", bCount);
	printf ("C: %d\n", cCount);
	printf ("D: %d\n", dCount);
	printf ("F: %d\n", fCount);
	return 0;
	}
