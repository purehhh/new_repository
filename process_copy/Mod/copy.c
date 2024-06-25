#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc,char** argv)
{
	if(argc != 5)return 1;
	if(access(argv[1],F_OK) != 0)
	{
		perror("access error");
		return 1;
	}
	int fd_src = open(argv[1],O_RDWR);
	if(fd_src < 0)
	{
		perror("open error");
		return 1;
	}
	umask(0000);
	int fd_dest = open(argv[2],O_RDWR | O_CREAT, 0664);
	if(fd_dest < 0)
	{
		perror("open error");
		return 1;
	}
	int pos = atoi(argv[3]);
	int len = atoi(argv[4]);
	lseek(fd_src,pos,SEEK_SET);
	lseek(fd_dest,pos,SEEK_SET);
	char buf[len];
	memset(buf,0,sizeof(buf));
	int size = read(fd_src,buf,sizeof(buf));
	if(size <= 0)
	{
		perror("read error");
		return 1;
	}
	write(fd_dest,buf,size);
	close(fd_src);
	close(fd_dest);
	return 0;
}
