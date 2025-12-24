#include <stdio.h>

int main (){
	char userSys[] = "admin";
	int passSys = 12345;
	
	char user[100];
	int pass;
	printf ("\n Nhap username va password");
	printf ("\n Username: "); 
	fgets(user,sizeof(user),stdin);
	printf (" Password: ");
	scanf ("%d",&pass);
	
	if (user == userSys && pass == passSys){
		printf ("\n Dang nhap thanh cong!");
	}else{
		printf ("\n Dang nhap that bai!\n Xin moi nhap lai!");
	}
	
	

return 0;
}

