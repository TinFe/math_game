#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int iNumOfQuestions;
    int iCount = 0;
    srand(time(NULL));
    
    printf("\nhello. get ready to answer some questions.\n");
    printf("\nHow many questions do you want to answer?\n");
    scanf("%d",&iNumOfQuestions);

    while (iCount < iNumOfQuestions) {
        printf("\nquestion %d\n", (iCount + 1));
        int iNum1 = (rand() % 100);
        int iNum2 = (rand() % 100);
        int iUserAnswer;
        int iCorrectAnswer = iNum1 + iNum2;
        printf("\n what is %d + %d?\n", iNum1, iNum2);
        scanf("%d", &iUserAnswer);

        if (iUserAnswer != iCorrectAnswer){
            printf("\nwrong\n");
        }
        else{
            printf("\ncorrect\n");
        }

        iCount += 1;
    }


}