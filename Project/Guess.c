//Including neccesseary libraries for generaring random number.
/* Taking a input from the user 
    User get 3 tries
    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Making function to generate a random number from 1-10
int  generate()
{
    srand(time(0));
    int max = 10;
    int min = 1;
    int rd_num = rand() % (max - min + 1) + min ;
    return rd_num;
}
void main()
{
    //To store the generated random rumber
    int correct_ans = generate();
    int guess;
    int count = 0;
    printf("Welcome user to the guessing game!! \n");
    printf("You will have to guess the numerber between 1-10 \n");
    printf("You will have 3 chances to guess the number \n");
    while(guess != correct_ans && count < 3)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess == correct_ans){
            printf("You have guessed the number!! \n");
        }
        else if(guess > correct_ans)
        {
            printf("Your guess if higher than the correct answer \n");
        }
        else if(guess < correct_ans)
        {
            printf("Your guess is lower than the correct answer \n");
        }
        count++ ;
        if(count < 3 && guess != correct_ans) 
        {
            printf("you have %d chances ramaining!! \n", 3 - count);
            if (count == 2 )
            {
                printf("This is your last chance. \n");
            }
        }
    }
    if (guess == correct_ans)
    {
        printf("You have won the game!! \n");
    }
    else
    { 
        printf("You have run out of chances. \n You have lost the game. \n");
        printf("The number was %d", correct_ans);
    }
}
