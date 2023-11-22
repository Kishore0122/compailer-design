#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	char stat[100];
	printf("enter a statment:\n");
	scanf("%s",stat);
	int n;
	if((stat[0] =='/')&&(stat[1] == '/')){
		printf("single line comment,");
	}
	else {
		printf("not a single line comment,");
	}
	if(((stat[0]=='/')&&(stat[1]=='*'))&&((stat[0+n]=='/')&&(stat[1+n]=='*'))){
		printf("it is a multiple line comment,");
	}
	else{
		printf("not a multiple line comment,");
	}
	
		return 0;
}
