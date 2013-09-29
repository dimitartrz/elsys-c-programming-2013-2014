#include<stdio.h>
int main () {
	char charsim=0;
	int broqch=0;
	while (broqch<255) {
		printf("%c-%d \n",charsim,broqch);
		broqch++;
		charsim++;
	}
return 0;
}
