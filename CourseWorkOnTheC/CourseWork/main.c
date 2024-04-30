#include <stdio.h> 
#include <conio.h> 
#define N 6
int main(int argc, char **argv)
{
    FILE *fp;
    char fileName[] = "temperature_small.csv";
    fp = fopen(fileName, "r");
    if(fp == NULL)
        return 1;
    int Y, M, D, H, Min, T;
    int r;
    while((r = fscanf(fp,"%d;%d;%d;%d;%d;%d",&Y, &M, &D, &H, &Min, &Y))>0)
    {
        if(r<N)
        {
            char s[20];
            r = fscanf(fp, "%[^\n]", s);
            printf("ERROR %d=%s\n",r,s);
        }
        else
            printf("%d;%d;%d;%d;%d;%d\n", Y, M, D, H, Min, T); 
    }
    return 0;
}