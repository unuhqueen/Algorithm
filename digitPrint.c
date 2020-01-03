#include <stdio.h>
void digitPrint(int n){
	if(n == 0) return;
	digitPrint(n/10);
	printf("%d\n", n % 10);
}

int main(){
	int n;
	scanf("%d", &n);
	digitPrint(n);
}
