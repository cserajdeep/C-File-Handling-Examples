#include <stdio.h>

struct student
{
   char name[50];
   float height;
};
int main(){  
    FILE *fptr;
    int i,n;

    printf("Enter the number of records: ");
    scanf("%d",&n);
    getchar();

    struct student stud1[n], stud2[n];
    /*###### Write Structures from File ######*/
    fptr = fopen("file4.txt","w");
    for(i = 0; i < n; ++i)
    {   
        printf("Enter name: ");
        scanf("%[^\n]",stud1[i].name);
     
        printf("\nEnter height: "); 
        scanf("%f", &stud1[i].height);
        getchar();
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);
    
    /*###### Read Structures from File #######*/
    fptr = fopen("file4.txt", "r");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < n; ++i)
    {
        printf("\nName: %s \t Height: %f", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}