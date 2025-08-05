/* Write a program to track rainfall data for 3 citiesover 4 months.Using 2D array,we can store the data, calculate the average rainfall for each 
city, and display the rainfall data in a tabular format */

#include <stdio.h>
int main() 
{
    int c, m;
    float rainfall[3][4];
    float total, avg;

    printf("Name: Manasvi Lunawat  PRN:B24CE1136");
    printf("\n\nRainfall data for 3 cities over 4 months\n");
    for (c = 0; c<3; c++) {
        printf("\nEnter rainfall data for City %d (in mm):\n", c + 1);
        for (m = 0; m<4; m++) {
            printf("Month %d : ", m + 1);
            scanf("%f", &rainfall[c][m]);
        }
    }

    printf("\nRainfall Tracker\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("Sr.No\tCity\t Month 1(mm)\tMonth 2(mm)\tMonth 3(mm)\tMonth 4(mm)\tAverage(mm)\n");
    printf("---------------------------------------------------------------------------------------------\n");

    for (c = 0; c<3; c++) {
        total = 0;
        printf("%d\tCity %d \t", c + 1,c + 1);
        for (m = 0; m<4; m++) {
            printf(" %.2f\t\t", rainfall[c][m]);
            total+=rainfall[c][m];
        }
        avg = total / 4;
        printf("%.2f\n", avg);
    }

    printf("---------------------------------------------------------------------------------------------\n");
    return 0;
}



