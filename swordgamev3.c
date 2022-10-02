#include<stdio.h>
int main()
{
    int check_list[10000] = {[0 ... 1000 - 1] = 1};
    int total,killed,del=1,i=0,diff;

    printf("Enter Number of Persons: ");
    scanf("%d",&total);
    printf("The Sword Given to: ");
    scanf("%d",&diff);
    killed=total-1;
    while(killed && diff>2)
    {
        while(check_list[i%total]!=0)
        {
            if(del!=1 && del<diff)
            {   check_list[i%total]=0;
                killed--;
            }
            del+=1;
            if(del==diff)
                del=1;
            i++;
        }
        i++;
    }
    if(diff>2)
    {   for(i=0; i<total; i++)
        {
            if(check_list[i]!=0)
                printf("Survived Person Number(position): %d\n",i+1);
        }
    }
    else
        printf("Enter Numbers Greater than 2");
    return 0;
}