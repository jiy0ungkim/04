#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int time;
    int min, sec;
    
    printf("input seconds : ");
    scanf("%i", &time);
    
    min = time/60;
    sec = time%60;
    
    printf("The time is %i:%i\n", min, sec);
    
    
    system("PAUSE");	
    return 0;
}
