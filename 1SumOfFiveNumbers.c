
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    
    printf("\n Enter the marks: ");
    
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    
    int sum = m1 + m2 + m3 + m4 + m5;
    float per = sum / 5.0;
    
    printf("\n Total marks: %d", sum);
    
    printf("\n Percentage = %2f", per); 

    return 0;
}
