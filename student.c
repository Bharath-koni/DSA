#include <stdio.h>

int main()
{
    int n, i;
    char name[50][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    printf("Students record are stored sucessfully");

    int j;

    printf("Enter no of students detail desplayed (less than %d) ",n);
    scanf("%d",&j);

    printf("\nStudent Details:\n");

    for(i = j; i <= n; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    return 0;
}
