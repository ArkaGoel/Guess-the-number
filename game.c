#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int nguesses;
    int guess;
    srand(time(0));
    int num = rand()%100 + 1;
    int y = (num -= 10);
    int x = (num += 10);
     if(num%2 == 0){
      printf("The number is a multiple of 2\n");
    }  else if(num%3 == 0){
      printf("The number is a multiple of 3\n");
    }  else if(num%4 == 0){
      printf("The number is a multiple of 4\n");
    }  else if(num%5 == 0){
      printf("The number is a multiple of 5\n");
    }  else if(num%6 == 0){
      printf("The number is a multiple of 6\n");
    }  else if(num%7 == 0){
      printf("The number is a multiple of 7\n");
    }  else if(num%8 == 0){
      printf("The number is a multiple of 8\n");
    } else if(num%9 == 0){
      printf("The number is a multiple of 9\n");
    } else if(num%10 == 0){
      printf("The number is a multiple of 10\n");
    }

    if(num%2 != 0){
      printf("The number is not a multiple of 2\n");
    } else if(num%3 != 0){
        printf("The number is not a multiple of 3\n");
    }else if(num%4 != 0){
        printf("The number is not a multiple of 4\n");
    }else if(num%5 != 0){
        printf("The number is not a multiple of 5\n");
    }else if(num%6 != 0){
        printf("The number is not a multiple of 6\n");
    }else if(num%7 != 0){
        printf("The number is not a multiple of 7\n");
    }else if(num%8 != 0){
        printf("The number is not a multiple of 8\n");
    }else if(num%9 != 0){
        printf("The number is not a multiple of 9\n");
    }else if(num%10 != 0){
        printf("The number is not a multiple of 10\n");
    }

    printf("\nGuess the number between 1 to 100: ");
    scanf("%d", &guess);
   
    for(nguesses = 0; nguesses <= 10; nguesses++){
        if(num < guess){
            printf("The guess is more than the number\n");
            printf("Try Again: ");
            scanf("%d", &guess);
        } else if(num > guess){
            printf("The guess is less than the number\n");
            printf("Try Again: ");
            scanf("%d", &guess);
        } else if(num == guess){
           printf("You win the game!!");
           break;
        }
        if(nguesses == 8){
          printf("Try to connect the dots!!= %d ", y);
        }
        else if(nguesses == 9){
          printf("One last hint- %d, + , -", x);
        }
          else if(nguesses == 10){
            printf("You lost the game!!, The number was %d", num);
            break;
        }
   }
       return 0;
}