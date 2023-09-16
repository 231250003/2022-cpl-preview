//
// Created by crz on 2023/9/6.
//
#include<stdio.h>
int main()
{
    int high=100;
    int ans=30,input;
    int step=7;
    srand((unsigned int)time(NULL));
    ans=rand()%100;
    int t;
    for(int i=1;i<=7;i++)
    {
        printf("you have %d tries",step);
        scanf("%d",&input);
        if(input>ans)
        {
            if(input>=t) printf("idiot\n");
            printf("lesser\n");
            step--;
            t=input;
        }
        if(input<ans)
        {
            if(input<=t) printf("idiot\n");
            printf("greater\n");
            step--;
            t=input;
        }
        if(input==ans)
        {
            printf("right\n");
            printf("you use %d tries",i);
            break;
        }
        if(step==0) printf("nice tries");
    }

    return 0;
}