#include<stdio.h>

int main(){
	int i;
	float f;
	char c;
	char s[100];
	printf("Enter an interger, float, character and a string: ");
	scanf("%d %f %c %s", &i, &f, &c, s);
	printf("The integer is %d\nThe floating point number is %f\nThe character is %c\nThe string is %s",i,f,c,s);
	return 0;
	
}
