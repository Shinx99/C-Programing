#include <stdio.h>
#include <string.h>

int nhapChuoi(char *str){
	int count=0;
	for (int i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			count ++;
		}
	}
	return count;
}
int countWords(char *str){
	int count=0;
	int inword=0;
	for (int i=0; str[i] != '\0'; i++){
		if (str[i] != ' ' && !inword){
			count ++;
			inword =1;
		}else if (str[i] == ' '){
			inword=0;
		}
	}
	return count;
}

int main (){
	char chuoi[50];
	printf ("\n Nhap chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")] = '\0';
	
	int count = nhapChuoi(chuoi);
	printf ("\n So ky tu '' co trong chuoi la: %d",count);
	
	int words = countWords(chuoi);
	printf ("\n So ky tu co trong chuoi la: %d",words);

	size_t len = strlen(chuoi);
	printf ("\n Chieu dai chuoi là: %zu",len);

return 0;
}

