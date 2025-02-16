#include <stdio.h>

int main (){
    int num;
    

    printf("Enter number for pattern : \n");
    scanf("%d", &num);
    int row = (2 * num) - 1;

    for (int i = 1; i <= row ; i++){
        for (int j = row; j>=1; j--){
            printf("%d", num);
        }
        printf("\n");
        

    }
    return 0;
}