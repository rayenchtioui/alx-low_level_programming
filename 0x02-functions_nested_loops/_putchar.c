#include <unistd.h>
/*
 * _putchar follwed by a newline
 */
int _putchar(char c){
	return (write(1,&c,1));
}
