#include <iostream> //c언어의 <stdio.h>격
#include <cstring>

using namespace std; //표준 네임스페이스를 사용하겠다는 의미

int main(){
	int num;
	cout << "숫자 입력: "; //cout은 C의 printf와 동일하다.
	cin >> num; //cin은 C의 scanf와 동일하다.
	cout << num << endl; //endl은 C의 개행문자 출력과 동일하다.
	
	char arr[10];
	cout << "문자 입력: ";
	cin >> arr;
	cout << "내용: " << arr << endl;
	
	cout << strlen(arr) << endl;
	cout << arr[0] <<endl;
	
	int *p = new int(0); //동적 메모리 할당, 초기값은 0으로 줌
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
