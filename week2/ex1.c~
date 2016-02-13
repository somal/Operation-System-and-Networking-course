#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	char command[256]="ls -la";
	FILE *pipe;

	pipe=popen(command,"w");
	

	char buffer[2000];
	fgets(buffer,sizeof(buffer),pipe);
	printf("%s/n",buffer);


	return 0;
}
