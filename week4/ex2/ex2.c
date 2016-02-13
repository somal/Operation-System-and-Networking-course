#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[]){
	int fds[2];
	char* str="Hello World";	
	pipe(fds);
	int pid=fork();
	if (pid==0){//chld
		close(fds[1]);
		char buf[1024]; 
		read(fds[0], buf, 100);
		printf("buf content after: %s\n", buf); 
		close(fds[0]);
		
	} else if (pid>0) {//parent
		close(fds[0]);
		write(fds[1], str, strlen(str)); 
		close(fds[1]);
	}


}
