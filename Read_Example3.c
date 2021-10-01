#include <stdio.h>
#include <stdlib.h>
int main()
{
   char name[50];
   int marks, i, num;

   printf("Enter number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("file3.txt", "r"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   
   for(i = 1; i <= num; ++i)
   {
      if(!feof(fptr)){   
      fscanf(fptr,"\nName: %s \nMarks=%d \n", name, &marks);
      
      printf("Student%d: Name: ", i);
      printf("%s", name);

      printf("\tMarks: ");
      printf("%d", marks);
      }
    else{
      printf("\nOOPS!! There are only %d students in the file.",i-1);
      break;
    }
      printf("\n");      
   }

   fclose(fptr);
   return 0;
}