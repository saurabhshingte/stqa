#include <stdio.h>

struct student
{
    float marks[5];
} s[20][5];

int main()
{
    int i, j, n, sum=0;
    float avg;
    
    int s[20][5] = {
                        {98,92,96,91,86},
                        {23,41,32,12,24},
                        {78,74,86,81,76},
                        {84,89,82,74,78},
                        {38,29,22,16,25},
                        {81,92,91,98,72},
                        {99,98,97,95,100},
                        {82,85,73,68,94},
                        {24,32,26,18,17},
                        {98,92,96,91,86},
                        {58,69,76,61,56},
                        {88,62,86,73,75},
                        {19,24,12,32,47},
                        {88,62,96,81,76},
                        {79,97,76,84,81},
                        {100,92,99,91,86},
                        {87,91,94,76,71},
                        {11,14,13,17,24},
                        {71,92,91,88,72},
                        {41,47,46,44,51},
                    };
                    
                    
    for(i=0; i<20; ++i)
    {
        printf("Student %d marks: ",i+1);
        
        for(j=0; j<5; ++j)
        {
            printf("%d ",s[i][j]);
            sum = sum+s[i][j];
        }
        
        avg = (float)sum/5;
        printf("\nAverage : %f",avg);
        
        if(avg>40)
            printf("\nStatus : PASS");
            
        else
            printf("\nStatus : FAIL");   
        
        printf("\n\n");
        sum=0;        
    }
      
    return 0;
}
