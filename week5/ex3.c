#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);

	printf("read");
	int *a;
	a= (int *) malloc (sizeof(int)*n);

	int i;
	for (i=0;i<n;i++)
		a[i]=i;

	for (i=0;i<n;i++)
		printf("%d\n",a[i]);

	free(a);	

	return 0;
}
