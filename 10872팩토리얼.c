#include <stdio.h>

int fact(int n){
	if(n == 1){
		return 1;
	}
	else {
		n = n * fact(n-1);
		return n;
	}
} 

int main(){
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, fact(n));
}
