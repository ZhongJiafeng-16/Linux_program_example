#include <stdio.h>
#include <unistd.h>


int main()
{
    int pid, status;
    pid = fork();
    if (pid){
        printf("parent %d wait for child %d to die\n", getpid(), pid);
        pid = wait(&status);
        printf("dead child = %d status=0x%04x\n",pid,status);
    }
    else{
        printf("child %d die by exit(value)\n",getpid());
        exit(101);
    }
    
}