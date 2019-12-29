#include <stdio.h>
int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if(start >= end){ // ù��° ���� ������ ������ ���� �������� ũ�ų� �����Ƿ� ���Ұ� 1���� ��� 
		return;
	}
	
	int key = start; // Ű�� ù��° ����
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j){ // ������ ������ �ݺ� 
		while(data[i] >= data[key] && i <= end){ //Ű ������ ū ���� ���������� �ݺ� 
			i++;
		}
		while(data[j] <= data[key] && j > start){ //Ű ������ ���� ���� ���������� �ݺ� 
			j--;
		}
		if(i > j){ //���� ������ ���¸� Ű���� ��ü 
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
