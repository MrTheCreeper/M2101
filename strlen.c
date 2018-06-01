#include<stdio.h>

int my_strlen(const char *str){
	int y=0;
	for(const char *p = str ; *p != '\0'; p++){
		y++;
	} 
	return y;
}

void main(){
	char str[]="Bonjour Bleh";
	int i;
	i= my_strlen(str);
	printf("La taille de la chaine est : %d",i);
}
