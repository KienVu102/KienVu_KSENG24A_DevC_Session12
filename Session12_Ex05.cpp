#include <stdio.h>

int prime1(int a){
	int prime=0;
	for(int i=1; i<=a; i++){
		if(a % i==0){
			prime++;
	}
}
    if(prime == 2){
		printf("%d la SNT", a);
	}
	else{
		printf("%d ko phai la SNT", a);
	}
}

int prime2(int b){
	int prime=0;
	for(int i=1; i<=b; i++){
		if(b % i==0){
			prime++;
	}
}
    if(prime == 2){
		printf("%d la SNT", b);
	}
	else{
		printf("\n%d ko phai la SNT", b);
	}
}


int main(){
	int a, b;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &b);
	prime1(a);
	prime2(b);
    return 0;
}
