#include<stdio.h>
int len(char str[]){
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	return length;
}
int main()
{
	char str[20];
	printf("Enter The String:");
	gets(str);
	int length=len(str);
	printf("Length Of String:%d",length);
}