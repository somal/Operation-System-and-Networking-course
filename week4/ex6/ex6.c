#include<stdio.h>
#include<signal.h>
#include <stdlib.h>
#include <wait.h>
#include <unistd.h>


int main(void){
	int pid=fork();
	if (pid==0){//child
		printf("Start working of child process\n");
		sleep(10);
		exit(0);

	} else if (pid>0) {//parent 
		printf("Start working of parent process\n");
		waitpid(pid,0,0);
		
	}


	return 0;
}

