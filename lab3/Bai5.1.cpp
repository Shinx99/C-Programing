#include <stdio.h>

int main (){
	
	int a;
	printf ("a = ");
	scanf ("%d",&a);
	
	if (a % 2 == 0){
		a -= 2;
		printf ("so chan lon nhat be hon a la %d",a);
	}else {
		a -= 1;
		printf ("so chan lon nhat be hon a la %d",a);
	}
	

return 0;
}

