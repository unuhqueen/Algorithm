#include <stdio.h>
int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if(start >= end){ // 첫번째 원소 순서가 마지막 원소 순서보다 크거나 같으므로 원소가 1개인 경우 
		return;
	}
	
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j){ // 엇갈릴 때까지 반복 
		while(data[i] >= data[key] && i <= end){ //키 값보다 큰 값을 만날때까지 반복 
			i++;
		}
		while(data[j] <= data[key] && j > start){ //키 값보다 작은 값을 만날때까지 반복 
			j--;
		}
		if(i > j){ //현재 엇갈린 상태면 키값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
		
		quickSort(data, start, j - 1);
		quickSort(data, j + 1, end);		
	}
}

int main(){
 	quickSort(data, 0, number - 1);
 	int i;
	for(i = 0; i < number; i++){
		printf("%d", data[i]);
	}
	 
}
