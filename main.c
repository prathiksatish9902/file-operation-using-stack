#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char s[10000];
    char stack[100][10000];
    int top = -1;

    file = fopen("MYSELF.txt", "a");
    if(file == NULL)
    {
        puts("cannot open file");
    }
    else
    {

        while(strlen(gets(s)) > 0)
        {
            fputs(s, file);
            fputs("\n", file);
        }
        fclose(file);
    }

    printf("MYSELF.txt is being read now...\n",s);
    file = fopen("MYSELF.txt","r");
    if(file==NULL)
    {
        puts("cannot open file");
    }
    else
    {
        while(fgets(s,sizeof(s),file)!=NULL)
            printf("%s",s);
    }
    fclose(file);

    file = fopen("MYSELF.txt", "r");

    while(fgets(s, sizeof(s), file) != NULL)
    {

        if (top < 99)
        {
            top++;
            strcpy(stack[top], s);
        }
    }
    fclose(file);


    printf("Reversed content of the file:\n");
    while(top >= 0)
    {
        printf("%s", stack[top]);
        top--;
    }


    return 0;
}
