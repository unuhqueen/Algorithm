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
	printf("n�� �\n");
	scanf("%d", &n);
	
	printf("���� n���� �Է��Ͻÿ�\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[n]);
	}
	
	printf("%d", findMax(arr, n, max)); 
	
	return 0;	
}
