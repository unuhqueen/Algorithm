#include <stdio.h>
int main(void){
	int i, j, k, min, index, temp;
	int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i = 0; i < 10; i++){
		min = arr[i];
		for(j = i + 1; j < 10; j++){
			if(min > arr[j]){
				min = arr[j];
				index = j;
			}
		}
		if(min != arr[i]){
			temp = arr[i];
			arr[i] = min;
			arr[index] = temp;
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
