#include <stdio.h>
int main(int argc, char **argv)
{
//  printf(".--.  /\\   \n");
//  printf("'--' /__\\        (^._.^)~ <(o.o )> \n");
//   printf("  \n"); 
//  printf("  |\\_/| \n");
//  printf(" / @ @ \\ \n");
//  printf("( > O < ) \n");
//  printf(" `>>x<<' \n");
//  printf("  / O \\ \n"); 

   printf( "                 Enter choice:\n");
   printf( "1. Start\n");
   printf( "2. Stop\n");
   printf( "3. Exit\n");
   printf(" ----------------------------------------------------------------------\n");
   printf(" | Type  | Byte(s)  |                        |                       |\n");
   printf(" |       | of memory|                     Min|                    Max|\n");
   printf(" ----------------------------------------------------------------------\n");
   printf( "| int8_t |         1|                    -128|                    127|\n");
   printf( "| uint8_t|         1|                       0|                    255|\n");
   printf( "| int16_t|         2|                  -32768|                  32767|\n");
   printf( "|uint16_t|         2|                       0|                  65535|\n");
   printf( "| int32_t|         4|             -2147483648|             2147483647|\n");
   printf( "|uint32_t|         4|                                      4294967295|\n");
   printf( "| int64_t|         8|    -9223372036854775808|    9223372036854775807|\n");
   printf( "|uint64_t|         8|                       0|   18446744073709551615|\n");
   printf( "| float  |         4|          -3,4028235E+38|          3,4028235E+38|\n");
   printf( "| double |         8|-1,7976931348623157E+308|1,7976931348623157E+308|\n");
  
   return 0;
}

