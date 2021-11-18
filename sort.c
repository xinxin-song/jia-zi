#include<stdio.h>

int main()
{
	int a[10] = {11,8,62,45,78,96,75,74,2,15};
	for(int i=0;i<9;i++){
		int *b = a;
		for(int j = 10;j-i>0;j--){
			if(*b>*(b+1)){
			int temp = *b;
			*(b+1) = *b;
			*b = temp;
			}
			b++;
		}
	}
	for(int i = 0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}