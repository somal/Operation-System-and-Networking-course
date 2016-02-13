#include <stdio.h>
int num = 0;
int main(int argc, char*argv[]){
 int pid;
 pid = fork();
 printf("%d\n", num);
 if(pid == 0){ /*child*/
 num = 1;
 }else if(pid > 0){ /*parent*/
 num = 2;
 }
 printf("%d\n", num);
}
