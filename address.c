#include<stdio.h>

void display1(int *,int);
void display2(int [],int);

int main()
{
    int num[]={0,1,2,3,4,5},i;
    for(i=0;i<6;i++)
    {
        printf("Memory Address of num[%d] : %d \n",i,&num[i]);
        
    }
    printf("\n\n\n\n");
    display1(&num[0],6);
    display2(&num[0],6);
}
void display1(int *j,int n)
{   
    printf("In display1() \n\n\n\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("Memory Address of  j[%d] : %d\n",i,j);
        j++;
    }
}
void display2(int j[],int n)
{   
    printf("\n\n\n\nIn display1()\n\n\n\n\n");
    int i;
    for(i=0;i<n;i++)
    {   
        printf("Memory Address of  j[%d] : %d\n",i,&j[i]);
               
    }
}