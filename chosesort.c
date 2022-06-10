#include<stdio.h>

int main()
{
	int a[10] = {11,8,62,45,78,96,75,74,2,15};
	for(int i = 0 ; i < 9 ; i++){
		int min = 100;
		int mark = 0;
		for(int j = 10 ; j - i > 0 ; j--) {
			if(a[10 - j + i] < min) {
				mark = 10 - j + i;
				min = a[10 - j + i];
			}
		}
		int temp = a[mark];
		a[mark] = a[i];
		a[i] = temp;
	}
	return 0;
}
