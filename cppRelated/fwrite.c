#include "apue.h"
#include "err_sys.h"

int
main()
{
	float data[10];
	if(fwrite(&data[2],sizeof(float),4,fp)!=4)
		err_sys("fwrite error");
	exit(0);
}
