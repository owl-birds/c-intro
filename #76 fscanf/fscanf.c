#include <stdio.h>

int main()
{
    char name[20];
    int age;
    FILE *fp = NULL;

    fp = fopen("data.txt", "r");
    if (fp == NULL)
      {
          perror("error openning file");
          return -1;
      }

    rewind(fp);
    fscanf(fp, "%[^\n]s", name);
    fscanf(fp, "%d", &age);

    printf("name :: %s\n", name);
    printf("age  :: %d\n", age);

    fclose(fp);
    fp = NULL;

    return 0;
}
