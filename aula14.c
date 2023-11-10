#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str_1[10] = {"Teste "};
	char str_2[10] = {"dois"};
	strcat(str_1, str_2);
	printf("%s", str_1);
}
