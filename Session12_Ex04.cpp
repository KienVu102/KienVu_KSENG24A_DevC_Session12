#include <stdio.h>

void findMaxvalue(int arr[]){
	int Maxvalue=arr[0];
	for(int i=0; i<5; i++){
		if(arr[i]>Maxvalue){
			Maxvalue=arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", Maxvalue);
}

int main(){
	int arr[5]={1,5,8,4,9};
	findMaxvalue(arr);
	
	return 0;
}
