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
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, fact(n));
}
