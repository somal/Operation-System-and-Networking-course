#include <stdio.h>
#include <unistd.h>


int main(int argc, char*argv[]){
	 int pid;
	 pid = fork();
	 if(pid == 0){ /*child*/
		execv("/bin/ls",NULL);
	 }else if(pid > 0){ /*parent*/
		printf("Hello world");
	 }

}
