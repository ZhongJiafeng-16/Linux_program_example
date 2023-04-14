#include <unistd.h>
#include <stdio.h>

#define MAX_LEN 100
char* get_command_lind_input();
int process_loop();

int main(int argc, char *argv[], char *env[])
{
    printf("************** Wlecome to shSimu **************\n");
    printf("This is a program practice to do a sh simulator.\n");
    printf("Show path:");
    char **envp = env;   // env is a pointer lsit. every pointer contain a subpath
    while(*envp){
        printf("%s;",*envp++);
    }
    printf("\n***************** process loop *****************\n");
    
    int exit_flag = 1;
    while(exit_flag){
        exit_flag = process_loop();
    }

    printf("sh simulator is going to exit, thanks for using.");
    return 0;
}

int process_loop()
{
    char* input = get_command_lind_input(); 
    if(input==NULL)
    {
        printf("There is nothing be inputed.please input again.");
        return 1;
    }   
    else
    {
        if(input[0]=='q') return 0;
        else
        {
            printf("read command line, and run.\n");
            return 1;
        }
    }
}

char* get_command_lind_input()
{
    // return command line input
    printf("\033[0:31m jiafeng@machine:");
    char *p = (char*)malloc(sizeof(char)*MAX_LEN);
    gets(p);
    return p;
    
}