/*Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
Programming Projects 51
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34*/

#include <stdio.h>
#include <math.h>

int main(void){

    int number_1, number_2, number_3, number_4, number_5, number_6, number_7, number_8, number_9, number_10, number_11, number_12, number_13, number_14, number_15, number_16;

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &number_1, &number_2, &number_3, &number_4, &number_5, &number_6, &number_7, &number_8, &number_9, &number_10, &number_11, &number_12, &number_13, &number_14, &number_15, &number_16);
    
    int myarray[] = {number_1, number_2, number_3, number_4, number_5, number_6, number_7, number_8, number_9, number_10, number_11, number_12, number_13, number_14, number_15, number_16};

    int index = 0;

    for(int newline = 0 ; newline < 4 ; newline++){
        for(int x = 0 ; x < 4; x++){
            printf( "%2d " , myarray[index]);
            index++;
        }
        printf("\n");
    }

    int sum_column1 = 0;
    int sum_column2 = 0;
    int sum_column3 = 0;
    int sum_column4 = 0;

//Sum columns
    for (int x = 0 ; x < sizeof(myarray)/__SIZEOF_INT__; x++){
        
        if(x % 4 == 0){
            sum_column1 += myarray[x];
        }
        else if(x % 4 == 1){
            sum_column2 += myarray[x];
        }
        else if(x % 4 == 2){
            sum_column3 += myarray[x];
        }
        else{
            sum_column4 += myarray[x];
        }
    }

    int sum_row1 = 0;
    int sum_row2 = 0;
    int sum_row3 = 0;
    int sum_row4 = 0;

    for(int x = 0; x < sizeof(myarray)/__SIZEOF_INT__ ; x++ ){
        if (x/4 == 0){
            sum_row1 += myarray[x];
        }
        if (x/4 == 1){
            sum_row2 += myarray[x];
        }
        if (x/4 == 2){
            sum_row3 += myarray[x];
        }
        if (x/4 == 3){
            sum_row4 += myarray[x];
        }

    }

    int topL_bottomR_diagonal = 0;
    int bottomL_topR_diagonal = 0;

    for(int x = 0; x < sizeof(myarray)/__SIZEOF_INT__ ; x++ ){
        if(x % 5 == 0){
            topL_bottomR_diagonal += myarray[x];
        }
        else if(x % 3 == 0){
            bottomL_topR_diagonal += myarray[x];
        }
    }

    printf("Row sums: %d %d %d %d\n", sum_row1, sum_row2, sum_row3, sum_row4);
    printf("Column sums: %d %d %d %d\n", sum_column1, sum_column2, sum_column3, sum_column4);
    printf("Diagonal sums: %d %d\n", topL_bottomR_diagonal, bottomL_topR_diagonal);
    

}