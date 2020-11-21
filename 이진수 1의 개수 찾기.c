#include <stdio.h>
int main(){
	int num1, num2, i, cnt=0, j;
	scanf("%d %d", &num1, &num2);
	
	for(i=num1; i<=num2; i++){
		j = i;
		while(j >= 1){
			if(j%2 != 0){
				cnt++;
			}
			j = j/2;
		}
	}
	printf("%d", cnt);
}
