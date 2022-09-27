#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input the sencond : " );
	scanf("%i",&x);
	
	printf("the time for %i second is %i : %i : %i", x,x/3600,(x%3600)/60,((x%3600)%60)%60);

	return 0;
	
}
