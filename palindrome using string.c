#include<stdio.h>
int main()
{
    int day=5;
    //("enter the day %d \n");
//    scanf(%d,&day);//
    switch(day)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tue");
        break;
        case 3:
        printf("wed");
        break;
        case 4:
        printf("thu");
        break;
        case 5:
        printf("fri");
        break;
        case 6:
        printf("sat");
        break;
        case 7:
        printf("sun");
        break;
        default:
        printf("hogo bosdk");
        break;
    }
return 0;
}