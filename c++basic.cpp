#include <iostream> //c����� <stdio.h>��
#include <cstring>

using namespace std; //ǥ�� ���ӽ����̽��� ����ϰڴٴ� �ǹ�

int main(){
	int num;
	cout << "���� �Է�: "; //cout�� C�� printf�� �����ϴ�.
	cin >> num; //cin�� C�� scanf�� �����ϴ�.
	cout << num << endl; //endl�� C�� ���๮�� ��°� �����ϴ�.
	
	char arr[10];
	cout << "���� �Է�: ";
	cin >> arr;
	cout << "����: " << arr << endl;
	
	cout << strlen(arr) << endl;
	cout << arr[0] <<endl;
	
	int *p = new int(0); //���� �޸� �Ҵ�, �ʱⰪ�� 0���� ��
	if(p == NULL) {
		cout << "failed" << endl;
		exit(1);
	} 
	*p = 100;
	cout << *p;
	
	delete p;
	p = NULL;
	return 0; 
} 
