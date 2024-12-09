#include <stdio.h>

int factorial(int n){
	int result=1;
	for(int i=n; i>0; i--){
		result*=i;
	}
	printf("Giai thua cua %d la: %d", n, result);
	return result;
}

int main(){
	int n;
	printf("Hay nhap 1 so: ");
	scanf("%d", &n);
	return factorial(n);
}
