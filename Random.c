// A programm to store and return random numbers
#include<stdio.h>
#include<stdlib.h>                                   //Defining the standard library for random functions inclusive


int main()
{
    int task[8];                                    //Container to hold our value
    
    //We desire to make it absolutely random
    //if not, the sequence remains unchanged, hence
    srand(time(0));                       
    for (int i = 0; i <= 5; i++ )
    {
        task[i] = rand() % (49 + 1 - 1) + 1;        //Ranging the container in a random fashion
        //printf("%d\n", task[i]);
        
        printf("%d\n", task[i]);
        
      //printf("Call your numbers:,\n");
        //scanf("%d", &task[i]);
    }
    //for(int i = 0; i <= 6; i++){
    //    printf("%d", task[i]);
    //}
    //printf("\n", task);


    return 0;
}


*/

