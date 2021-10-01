#include <stdio.h>

int main() {
   char ch; 
   FILE *f = fopen("file1.txt", "w");
   do{
   ch = getchar();
   if((ch!='q') && (ch!='Q'))
    fputc(ch, f);
   else
    break;
    
   }while(1);
   
   fclose(f);
   return 0;
}