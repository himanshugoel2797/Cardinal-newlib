#include <sys/reent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/fcntl.h>
#include <sys/times.h>
#include <sys/errno.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdint.h>

char **environ; /* pointer to array of char * strings that define the current environment variables */

static uint64_t set_errno_r(struct _reent *reent, uint64_t val) {
	if((int64_t)val < 0) {
		reent->_errno = (int)val;
		return 0;
	}
	return val;
}

static uint64_t set_errno(uint64_t val) {
	if((int64_t)val < 0) {
		_errno = (int)val;
		return 0;
	}
	return val;
}

int _open_r(struct _reent *reent, const char *name, int flags, int mode) {

}

int _close_r(struct _reent *reent, int file) {
	
}

int _lseek_r(struct _reent *reent, int file, int ptr, int dir) {

}

int _read_r(struct _reent *reent, int file, char *ptr, int len) {

}

int _write_r(struct _reent *reent, int file, char *ptr, int len) {

}

int _fork_r(struct _reent *reent) {

}

int _wait_r(struct _reent *reent, int *status) {

}

int _stat_r(struct _reent *reent, const char *file, struct stat *st) {

}

int _link_r(struct _reent *reent, char *old, char *new) {

}

int _unlink_r(struct _reent *reent, char *name) {

}

caddr_t _sbrk_r(struct _reent *reent, int incr) {

}

int _rename_r(struct _reent *reent, const char *oldPath, const char *newPath) {

}

void _exit() {

}


int execve(char *name, char **argv, char **env) {

}

int fstat(int file, struct stat *st) {

}

int getpid() {

}

int isatty(int file) {

}

int kill(int pid, int sig) {

}

clock_t times(struct tms *buf) {

}

int gettimeofday(struct timeval *p, struct timezone *z) {

}
