/*
 * the following code snippet is modified from this website
 * https://www.cplusplus.com/reference/cstdlib/rand/
 **/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    //renew the seed of rand function
    srand(time(NULL));

    //get the answer between 0 to 99
    int answer = rand() % 100;

    //initialize
    int guess = -1;
    int counter = 0;

    //prompt message
    printf("0到99，猜一個數字。");

    //get input
    //continue if the input is integer
    while (scanf("%d", &guess)) {
        if (guess == answer) { //if you have got the answer
            printf("你猜的是︰%d，恭喜猜中了。一共猜了%d次。\n", guess, counter);
            return 0;
        } else { //go on if not correct
            counter++;
            printf("你猜的是︰%d，", guess);
            if (guess > answer) {
                printf("低一點。");
            } else {
                printf("高一點。");
            }
        }
    }
    printf("你輸入的不是數字。");
}
