#include <stdio.h>
#include <stdlib.h>

void createFile()
{
    char filename[100];
    char content[1000];
    printf("Enter the file name create: ");
    scanf("%s",filename);
4
    FILE *file =fopen(filename,"w");
    if(file == NULL)
    {
        printf("error creating file\n");
    }

    printf("enter content to write: ");
    getchar();  //getchar() is called to consume any leftover newline characters from the previous input (from scanf()), so that fgets() will correctly read the user's input.
    
    fgets(content,1000,stdin);  // reads a line of text from the standard input (up to 999 characters + 1 for the null terminator) and stores it in the content array.

    fprintf(file,"%s",content);  //The fprintf() function is used to write the content of the content array to the file pointed to by file. It behaves like printf(), but instead of printing to the console, it writes to the file.

    fclose(file);
    printf("File created and content written successfully.\n");
}

void readFile()
{
    char filename[100];
    char ch;
    printf("Enter the file name to read: ");
    scanf("%s",filename);

    FILE *file =fopen(filename,"r");
    if(file == NULL)
    {
        printf("error creating file\n");
    }

    while((ch = fgetc(file)) !=EOF)
    {
        putchar(ch);
    }

    fclose(file);
    printf("\nFile read successfully!!");
}


void writeFile()
{
    char filename[100];
    char content[1000];

    printf("enter file name: ");
    scanf("%s",filename);

    FILE *file =fopen(filename,"a");

    if(file ==NULL){
        printf("error in opening file");
    }

    printf("enter the content: ");
    getchar();

    fgets(content,1000,stdin);

    fprintf(file,"%s",content);

    fclose(file);

    printf("\n conntent written sucessfully!!");
}
void renameFile()
{
    char oldname[100],newname[100];
    
    printf("enter the old name of the file: ");
    scanf("%s",oldname);
    printf("enter the new name of the file: ");
    scanf("%s",newname);

    if(rename(oldname,newname)==0)
        printf("renamed sucessfully!");
    else
        printf("renamed failed");
}


void deleteFile()
{
    char filename[100];

    printf("enter the file name to delete: ");
    scanf("%s",filename);

    if(remove(filename) == 0)
        printf("file deleted sucessfully!");
    else
        printf("error in file deleting!");
}
int main()
{
    int choice;
    while(1){
        printf("\nFile Management System\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Write to File\n");
        printf("4. Rename File\n");
        printf("5. Delete File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                createFile();
                break;
            case 2:
                readFile();
                break;
             case 3:
                writeFile();
                break;
            case 4:
                renameFile();
                break;
            case 5:
                deleteFile();
                break;
            case 6:
                exit(0);
                break;
        }
    }
}