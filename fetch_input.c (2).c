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
    printf("0��99�A�q�@�ӼƦr�C");

    //get input
    //continue if the input is integer
    while (scanf("%d", &guess)) {
        if (guess == answer) { //if you have got the answer
            printf("�A�q���O�J%d�A���߲q���F�C�@�@�q�F%d���C\n", guess, counter);
            return 0;
        } else { //go on if not correct
            counter++;
            printf("�A�q���O�J%d�A", guess);
            if (guess > answer) {
                printf("�C�@�I�C");
            } else {
                printf("���@�I�C");
            }
        }
    }
    printf("�A��J�����O�Ʀr�C");
}
