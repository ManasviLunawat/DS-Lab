/* Write a program for Tracking daily temperatures of 3 cities for a week . The program calculates the average temperature for each day and for the week. */

#include <stdio.h>
int main() {
    float temp[3][7];
    int i, j;
    float cityAverage[3], dayAverage[7];
    
    printf("\nTemperature data for 3 cities over 7 days:\n");
    for (i = 0; i<3; i++) {
        printf("\nEnter temperatures for City %d for 7 days:\n", i + 1);
        for (j = 0; j<7; j++) {
            printf(" Day %d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    for (i = 0; i<3; i++) {
        float sum = 0;
        for (j = 0; j<7; j++) {
            sum += temp[i][j];
        }
        cityAverage[i] = sum / 7.0;
    }

    for (j = 0; j<7; j++) {
        float sum = 0;
        for (i = 0; i<3; i++) {
            sum += temp[i][j];
        }
        dayAverage[j] = sum / 3.0;
    }
    
    printf("\nTemperature Tracker (in Celsius)");
    printf("\n----------------------------------------------------------------------------");
    printf("\nSr.No\t Day1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\tCity Average\n");
    printf("----------------------------------------------------------------------------\n");
    for (i = 0; i<3; i++) {
        printf("%d\t", i + 1);
        for (j = 0; j<7; j++) {
            printf("%.2f\t", temp[i][j]);
        }
        printf("%.2f\n", cityAverage[i]);
    }

    printf("----------------------------------------------------------------------------\n");
    printf("Day Avg\t");
    for (j = 0; j<7; j++) {
        printf("%.2f\t", dayAverage[j]);
    }
    printf("\n");

    return 0;
}


