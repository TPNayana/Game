#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int  number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; //generates a random number b/w 1 to 100
    //printf("the number is %d\n",number); //prints the random number, isliye comment out kiya gaya hai

    //keep running the loop until the number is guessed
    do
    {
        printf("guess the number b/w 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("lower number please\n");
        }
        else if(guess<number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    printf("This is just trial.....");
    
    return 0;
}