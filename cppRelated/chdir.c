#include "apue.h"
#include "err_sys.h"
int
main()

{
	const char* filepath = "/home/guanyx2017/桌面";
	if(chdir(filepath)<0)
		err_sys("chdir failed");
	printf("chdir to succeed\n");
	exit(0);
}

