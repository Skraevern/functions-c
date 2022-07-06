#include <stdio.h>
#include <time.h>

void delay(int milliseconds);

int main()
{
    puts("Loop with 250 millisecond delay:");
    for( int i = 0; i < 10; i++)
    {
        printf("%d\n", i + 1);
        delay(250);
    }
    putchar('\n');

    return(0);
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds * (CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now - then) < pause )
        now = clock();
}