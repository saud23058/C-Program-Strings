#include<stdio.h>
int main(){
//	char str[]="Hello World";
//	printf("%s\n",str);
//	puts(str);// puts are use a printf
//	      input
  char str[40];
//  scanf("%s",str);// if you use scanf it will only display like if i enter saud khan it will show only saud
  gets(str);// it will input the Entire Sentence
  printf("Your input was : %s",str);  
}