#include <stdio.h>

void display_grade (int mark);
float calc_average(int mark[],int count);

int main(void)
{
    int count,marks[count],i;


    printf("Enter your marks amount :");
    scanf("%d",&count);

    for(i=1;i<=count;i++)
        scanf("%d",&marks[i]);

    printf("%s\t%s\n%s\t%6s\n\n","Mark","Grade","----","-----");
    for(i=1;i<=count;i++)
    {
        printf("%d\t",marks[i]);
        display_grade(marks[i]);
    }
    printf("The average is %.2f",calc_average(marks,count));
    return 0;
}


void display_grade (int mark) 
{
    if( mark >= 0 && mark <=100 )
    {
        if(mark < 45)
        printf("F");
            else if(mark < 55)
        printf("C");
            else if(mark < 65)
        printf("B");
            else if(mark < 85)
        printf("A");
            else if(mark <= 100)
        printf("A+");
    }
    else
        printf("Invalid Mark");
    printf("\n");
}

float calc_average(int mark[],int count)
{
    float total;
    int i;
    for(i=1;i<=count;i++)
    {
        total = total + mark[i];
    }
    return total/count;
}
