#include <stdio.h>
int findMax(int arr[], int n){
	int max;
	if(n == 0) return arr[0];
	if(arr[n - 1] > findMax(arr, n - 1)) return arr[n-1];
	
}

int main(){
	int i, n, arr[20];
	printf("n�� �\n");
	scanf("%d", &n);
	
	printf("���� n���� �Է��Ͻÿ�\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d", findMax(arr, n)); 
	
	return 0;	
}
