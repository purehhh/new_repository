#include <process_copy.h>

int check_pram(int argc,const char* src,int pronum)
{
	//参数不能小于3
	if(argc < 3)return 0;
	//进程数大于0 小于20
	if(pronum <= 0 || pronum >20)return 0;
	//src存在
	if(access(src,F_OK) != 0)
	{
		perror("access failed");
		return 0;
	}
	return 1;
}
