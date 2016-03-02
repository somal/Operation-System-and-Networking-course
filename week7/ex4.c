#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
	int size=10*1024*1024;
	int j=0;

	
	struct rusage usage;
	
	int out;
	for (j=0;j<10;++j){
		void *ptr= malloc(size);
		memset(ptr,0,size);

		out=getrusage(RUSAGE_SELF,&usage);

		printf("Max res. set size %li\n",usage.ru_maxrss);
		sleep(1);
	}
	

	return 0;
}
