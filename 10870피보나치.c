#include <stdio.h>

int fibonacci(int n){
	if(n == 0){
		return 0;
	} else if(n == 1){
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	
	printf("%d번째 피보나치 수는 %d", n, fibonacci(n));
}
