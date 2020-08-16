#include <stdio.h>

int main(){
	int h, m;
	scanf("%d", &h);
	scanf("%d", &m);
	
	if(m < 45){
		if(h == 0){
			h = 23;
		}
		else{
			h -= 1;
		}
		m = m + 60 - 45;
	}
	else{
		m -= 45;
	}
	
	printf("%d %d", h, m); 
}
