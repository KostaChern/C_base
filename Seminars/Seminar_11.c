// #include <stdio.h>
// #include <unistd.h>
// int main(int argc, char *argv[]){
//     int rez=0;
// //opterr=0;Можно отключить вывод сообщений об ошибках, для этого надо где-то 
// // в программе перед вызовом функции вставить opterr=0

//     while ( (rez = getopt(argc,argv,"ab:C::d")) != -1)
//     {
//         switch (rez)
//         {
//             case 'a': 
//                 printf("found argument \"a\".\n"); 
//                 break;
//             case 'b': 
//                 printf("found argument \"b = %s\".\n",optarg); 
//                 break;
//             case 'C': 
//                 printf("found argument \"C = %s\".\n",optarg); 
//                 break;
//             case 'd': 
//                 printf("found argument \"d\"\n"); 
//                 break;
//             case '?': 
//                 printf("Error found !\n");
//                 break;
//             };
//         };
//     };

// Разбор файла с ошибками
// Файлы текстовые
#include <stdio.h> 
#include <conio.h> 
#define N 3
int main(int argc, char **argv)
{
    FILE *open;
    char name[] = "temperature_small1.csv";
    open = fopen(name, "r");
    if(open==NULL)
        return 1;
    int Y,M,D;
    int r;
    while((r = fscanf(open, "%d;%d;%d",&Y,&M,&D))>0)
    {
        if(r<N)
        {
            char s[20];
            r = fscanf(open, "%[^\n]", s);
            printf("ERROR %d=%s\n",r,s);
        }
        else
            printf("%d = %d;%d;%d\n", r,Y,M,D); 
    }
    return 0;
}