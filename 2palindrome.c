#include <stdio.h>

int main(){
	int num, mod[20], i=0, j=0, k;
	scanf("%d", &num);
	while(num != 0){
		mod[i] = num%10;
		num = num/10;
		i++;
	}
	for(k = 0; k<i/2; k++){
		if(mod[j] != mod[i-1]){
			printf("False");
			return 0;
		}
		j++;
		i--;
		}
	printf("True"); 
}
