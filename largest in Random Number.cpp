#include<stdio.h>
#include<stdlib.h>
int largest(int arr[],int n){
	int larg=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>larg){
			larg=arr[i];
		}
	}
	return larg;
}
int main()
{
	int arr[10];
	for(int i=0 ; i<10; i++){
	arr[i] =rand()%50;
	printf("%d  ",arr[i]);
	}
	int lar=largest(arr,10);
	printf("\nLargest in a random Number = %d",lar);
}