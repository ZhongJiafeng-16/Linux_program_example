#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    if (pid){
        printf("parent %d child=%d\n",getpid(),pid);
        // sleep(1);
        printf("parent %d exit\n", getpid());
    }
    else{
        printf("child %d start my parent=%d\n",getpid(),getppid());
        printf("child %d exit my parent=%d\n", getpid(), getppid());
    }
    
}