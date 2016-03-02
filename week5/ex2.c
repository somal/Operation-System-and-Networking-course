#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	char c;
	double d;
	int* p;
	long *l;

	printf("%lu\n%lu\n%lu\n%lu\n%lu\n",sizeof(a),
				sizeof(c),
				sizeof(d),
				sizeof(p),
				sizeof(l));

}


