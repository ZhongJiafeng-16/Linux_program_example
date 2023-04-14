#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;
    printf("This is %d my PARENT=%d\n",getpid(),getppid());
    pid = fork();
    if (pid){
        printf("This is process %d child pid=%d\n",getpid(),pid);
    }
    else{
        printf("this is process %d parent=%d\n",getpid(), getppid());
    }
    
}