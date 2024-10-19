/* fork */
#include <stdio.h>
#include <unistd.h>

int main(){
    int x;
    FILE *fd;

    x = fork();
    while(1){
        fd = fopen("test.txt", "a");
        fprintf(fd, "%d\n", x);
        fclose(fd);
        sleep(2);
    }
    
    return 0;
}