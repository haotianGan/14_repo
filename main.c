#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *args[5];

char ** parse_args( char * line ){
    int i = 0;
     while( (args[i] = strsep(&line," ")) != NULL )
        i++; 
    return args;
}


int main(){
    char string[] = "ls -a -l";
    char ** args = parse_args(string);
    execvp(args[0],args);

    return 0;
}