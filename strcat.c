#include<stdio.h>

char *my_strcat(char *dest, const char *src){
	char *p = dest;
	const char *l = src;
	while(*p != '\0'){
		p++;
	}
	while(*l !='\0'){
		*p=*l;
		p++;
		l++;
	}
	*p='\0';
	return dest;
}

int main(void){
	char dest[] = "Bonjour ";
	const char src[] = "tout le monde";
	char *n;
	n=my_strcat(dest,src);
	printf("Texte concatené : %s",n);
}


