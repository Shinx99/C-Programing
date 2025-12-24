#include <stdio.h>
#include <string.h>

int countWords(char *str){
	int count = 0;
	for (int i=0; str[i] != '\0'; i++){
		if (str[i] = ' ') && (i == 0 || str[i] == ' ')){
			count ++;
		}
	}
	return count;
}



int main (){
	
	char name[50];
	
	printf ("\n Nhap ten: ");
	fgets (name,sizeof(name),stdin);
	name[strcspn(name,"\n")] = '\0';
	
	int words = countWords(name);
	printf("\n So tu: %d",words);
	
return 0;
}
