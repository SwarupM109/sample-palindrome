// Online C compiler to run C program online
#include <stdio.h>
int conv1(float km)
{
    return km*1.609;
}
int conv2(float ft )
{

    return ft*12;
}
int conv3(float pnd)
{
    return 2.25*pnd;
}
int main()
{
    int a;
    float num;
    printf("slelect the options given below\n");
    printf("1,2,3\n");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%f",&num);
    switch (a)
    {
    case 1:
        printf("the converted value is %f \n",conv1(num));
        break;
    case 2:
        printf("the converted value is %f \n",conv2(num));
        break;
    case 3:
        printf("the converted value is %f \n",conv3(num));
        break;
    
    default:
        printf("invalid input\n");
        break;
    }
return 0;

}