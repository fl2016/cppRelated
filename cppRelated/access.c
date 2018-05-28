#include "apue.h"
#include "err_sys.h"
#include <fcntl.h>
int 
main(int argc,char *argv[])
{
	if(argc!=2)
		err_quit("usage :a.out <pathname>");
	if(access(argv[1],R_OK)<0)
		err_ret("access error for %s",argv[1]);
	else printf("open for reading \n");
	exit(0);
}