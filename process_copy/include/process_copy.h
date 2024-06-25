#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>

int blocksize_cur(const char* src,int pronum);
int check_pram(int argc,const char* src,int pronum);
int process_create(const char* src,const char* dest,int pronum,int blocksize);
void process_wait();
