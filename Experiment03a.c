#include <stdio.h>

void display_grade (int mark);

int main(void)
{
    int marks;

    printf("Enter your mark :");
    scanf("%d",&marks);
    display_grade(marks);
    return 0;
}


void display_grade (int mark) 
{
    if( mark >= 0 && mark <=100 )
    {
        if(mark < 45)
        printf("Grade: F");
            else if(mark < 55)
        printf("Grade: C");
            else if(mark < 65)
        printf("Grade: B");
            else if(mark < 85)
        printf("Grade: A");
            else if(mark <= 100)
        printf("Grade: A+");
    }
    else
        printf("Invalid Mark");
    printf("\n");
}
