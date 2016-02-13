#include<stdio.h>
#include<signal.h>

void sig_handler(int signo){
	if (signo==SIGINT) {
		printf("received SIGINT\n");
	}
}

int main(void){
	int i=0;
	if (signal(SIGINT, sig_handler)==SIG_ERR){
		printf("\ncan't catch SIGINT\n");
	}
	while (i<10){
		sleep(1);
		i=i+1;
	}
	return 0;
}

