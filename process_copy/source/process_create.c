#include <process_copy.h>

int process_create(const char* src,const char* dest,int pronum,int size)
{
	if(src == NULL || dest == NULL)return 0;
	//按照进程数创建子进程
	pid_t pid;
	int i;
	for( i = 0; i < pronum; i++)
	{
		pid = fork();
		
	//子进程重载拷贝 完成拷贝
		if(pid > 0)
		{
			process_wait();
		}
		else if(pid == 0)
		{
			char pos_Buf[100] = "";
			char sizeBuf[100] = "";
			//memset(pos_Buf,0,sizeof(pos_Buf));
			//memset(sizeBuf,0,sizeof(sizeBuf));
			sprintf(pos_Buf,"%d",i*size);
			sprintf(sizeBuf,"%d",size);
			execl("/home/colin/linux/PROCESS/process_copy/Mod/copy","copy",src,dest,pos_Buf,sizeBuf,NULL);
		}
		else
		{
			perror("fork error");
			return 0;
		}
	}
	
		return 1;
	
	
}
		
	
	
	
