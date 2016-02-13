 #include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]){


	char * echo_args[] = { "gedit", "dummy.txt", NULL };
        if (!fork ()) {
                execv ("/usr/bin/gedit", echo_args);
                fprintf (stderr, "an error occured\n");
                return 1;
        }

        return 0;
}
