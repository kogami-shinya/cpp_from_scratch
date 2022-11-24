#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*Количесто бутылок
    int x; 
    scanf("%i",&x);
    printf("Bottle woter %i", x*12);
    return 0;
    */
    //mario

    /*
    int block;
    printf("height: ");
    scanf("%i",&block);
    while(block<0 || block>23){
        printf("Error: ");
        scanf("%i",&block);
    }
    for(int x=1;x<=block;x++)
    {
        for(int y=block;y>x;y--)
        {
            printf(" ");
        }
        printf("##");
        for(int z=1;z<x;z++)
        {
            printf("#");
        }
        printf("\n");
    }
    //Сдача
    int m1=0,m2=0,m3=0;
    float change,monet,m4;
    printf("height: ");
    scanf("%f",&change);
    while(change<=0){
        printf("Error: ");
        scanf("%f",&change);
    }
    change = change-(int)change;
    change*=100;
    if(change >= 25)
    {
        m1=m1+(change/25);
        change=change - (m1 * 25);
    }
    if(change >= 10)
    {
        m2=m2+(change/10);
        change=change - (m2 * 10);
    }
    if(change >= 5)
    {
        m3=m3+(change/5);
        change=change - (m3 * 5);
    }
    m4 = change;
    monet = m1 + m2 + m4 + m3;
    printf("\n%.0f",monet);*/
}