#include<stdio.h>
int main()
{
    int id = 1,pass = 2;
    printf("Enter ID :");
    scanf("%d",&id);
    printf("Enter Password : ");
    scanf("%d",&pass);

    switch(id)
    {   int Pass;
        case 1 : printf("Enter Password : ");
        scanf("%d",&Pass);
        
        switch(Pass)
        {
            case 2 : printf("welcome");
                break;

            default : printf("Wrong Password");
                break;
        }
        break;
        default : printf("Invalid ID");
    }
    return 0;
}
