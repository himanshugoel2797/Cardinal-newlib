#include <fcntl.h>
 
extern void exit(int code);
extern int main ();
 
void _start() {

	__libc_init_array();
    exit(main());
}
