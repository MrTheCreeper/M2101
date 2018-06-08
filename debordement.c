#include<stdio.h>

int boucle(int n){
	int ret;
	if(n <= 0){
		return 0;
	}
	if(n >= 1){
		return (1+boucle(n-1));
	}
}

int main(void){
	int n=1000;
	int boucle(int n);
	printf("pour 1000 : %d",boucle(n));
	n=1000000;
	printf("pour 1000 : %d",boucle(n));
}
