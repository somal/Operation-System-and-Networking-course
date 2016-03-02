#include <stdio.h>
#include <stdlib.h>

void* realloc2(void* ptr,int size){
	if (ptr==NULL)
		return malloc(size);
	if (size==0)
		return free(ptr);
		
	
	

}

int main(){
	int* a= (int*) malloc (sizeof(int)*4);
	int i;
	for (i=0;i<4;++i)
		a[i]=10;

	a=realloc(a,sizeof(int)*2);

	for (i=0;i<2;++i)
		printf("%d\n",a[i]);

	return 0;
}


