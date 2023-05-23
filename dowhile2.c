#include<stdio.h>
main(){
	int n1, n2, sum = 0;
	printf ("Nhap vao 2 so n1, n2: ");
	scanf ("%d %d",&n1, &n2);
	do {
		sum = n1 + n2;
		printf ("Sum = %d\n", sum);
		printf ("Nhap vao 2 so (Hoac 0 de thoat)\n");
		scanf ("%d %d",&n1, &n2);
	}while (n1 != 0 && n2 != 0);
	return 0;
}
