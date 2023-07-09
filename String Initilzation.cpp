#include<stdio.h>
int main()
{
	char str[]={'h','e','l','l','o','\0'};
//	we can also use line for initilization line No. 4 and 5
//	char str[]="Hi my name is Saud";
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
}