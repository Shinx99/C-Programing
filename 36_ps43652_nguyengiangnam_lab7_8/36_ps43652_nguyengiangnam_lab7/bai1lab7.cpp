#include <stdio.h>
#include <ctype.h>



int main (){
	
	char s[100];
	printf ("\n Xin moi nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
	
	int i=0, n=0, p=0;
	while (s[i] != '\0' && s[i] != '\n'){
		char k = tolower(s[i]);
		if ( k == 'a' || k == 'o' || k == 'u' || k == 'i' || k == 'e'){
			n++;
		}else if (isalpha(k)) {
			p++;
		}
		i++;
	}
	printf ("\n Chuoi co chua %d nguyen am, %d phu am ",n,p);

return 0;
}

