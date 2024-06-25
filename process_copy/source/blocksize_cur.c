#include <process_copy.h>

int blocksize_cur(const char* src,int pronum)
{
	if(src == NULL)return 0;
	//打开src文件
	int fd = open(src,O_RDWR);
	if(fd < 0)
	{
		perror("open error");
		return 0;
	}
	//求src文件大小
	int size = lseek(fd,0,SEEK_END);
	if((size % pronum) == 0)
	{
		size /= pronum;
	}
	else
	{
		//无法整除就每个加1
		size = size / pronum + 1;
	}
	close(fd);
	return size;
}
