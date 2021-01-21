#include <stdio.h>

int main(){

    int einDimArray[10];

    for (int i = 0; i < 10; i++){
        einDimArray[i] = i + 1;
    }

    for (int i = 0; i < 10; i++){
        printf("%i\n", einDimArray[i]);
    }




    int zweiDimArray[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            zweiDimArray[i][j] = (i + 1) * (j + 1);
        }
    }


    printf("\n\nUnsere Matrix:\n");
    for (int i = 0; i < 10; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            printf("%i\t", zweiDimArray[i][j]);
        }
    }



    return 0;
}
