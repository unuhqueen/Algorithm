#include <stdio.h>
int findMax(int arr[], int n, int max){
	if(n == 0) return;
	else{
		if()
	}
	findMax(arr, n - 1);
}

int main(){
	int i, n, arr[20], max = 0;
	printf("n은 몇개\n");
	scanf("%d", &n);
	
	printf("정수 n개를 입력하시오\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[n]);
	}
	
	printf("%d", findMax(arr, n, max)); 
	
	return 0;	
}
