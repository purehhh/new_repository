#include <process_copy.h>

int main(int argc,char** argv)
{
	int pronum;
	if(argv[3] == 0)
	{
		pronum = 5;
	}
	else
	{
		pronum = atoi(argv[3]);
	}
	int res = check_pram(argc,argv[1],pronum);
	if(res == 0)
	{
		printf("check_pram error\n");
		return 1;
	}
	int size = blocksize_cur(argv[1],pronum);
	if(size == 0)
	{
		printf("blocksize_cur error\n");
		return 1;
	}
	res = process_create(argv[1],argv[2],pronum,size);
	if(res == 0)
	{
		printf("process_create error\n");
		return 1;
	}
	return 0;
}
