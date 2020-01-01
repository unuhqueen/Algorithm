#include <stdio.h>
int nSum(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n + nSum(n-1);	
	}
}

int main(){
	printf("%d", nSum(10));
	
	return 0;
}
