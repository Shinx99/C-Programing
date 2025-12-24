#include <stdio.h>
#include <string.h>



int main (){

	char s[5][20];
	printf ("\n Nhap 5 chuoi: \n");
	for (int i=0; i<5; i++){
		printf (" Chuoi %d : ",i+1);
		fgets(s[i],sizeof(s[i]),stdin);
		
		size_t len = strlen(s[i]);
		if (len > 0 && s[i][len-1] == '\n'){
			s[i][len-1] = '\0';
		}
	}
	printf ("\n Chuoi da nhap vao: \n");
	for (int i=0; i<5; i++){
		printf (" Chuoi %d: %s",i+1,s[i]);
	}
	char temp[20];
	for (int i=0; i<5-1; i++){
		for (int j=i+1; j<5; j++){
			if (strcmp(s[i], s[j]) > 0){
				strcpy(temp, s[i]); 
				strcpy(s[i], s[j]);	
				strcpy(s[j], temp);
			}
		}
	}
	printf ("\n Chuoi sau khi sap xep: \n");
	for (int i=0; i<5; i++){
		printf (" Chuoi %d: %s\n",i+1,s[i]);
	}

return 0;
}

