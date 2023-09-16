//
// Created by crz on 2023/9/6.
//
#include<stdio.h>
int main()
{
    int n,sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
}