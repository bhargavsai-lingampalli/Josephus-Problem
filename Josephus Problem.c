#include<stdio.h>
#define limit 32000
int main()
{
    int check_list[limit] = {[0 ... limit - 1] = 1};
    long  int total,killing,del=1,i=0,diff;

    printf("Enter Number of Persons: ");
    i+=scanf("%ld",&total); //checking input. if user enters digit then i becomes 1 (i=0+1).

    printf("The First Person Gives Sword to: ");
    i+=scanf("%ld",&diff); //checking input. if user enters digit another 1 gets added to i(i=1+1).

    killing=total-1;

    if(diff>2 && total<32000 && i==2)
    {
        for(i=0; killing; i++)
        {

            while(check_list[i%total]!=0)
            {
                if(del!=1 && del<diff)
                {
                    check_list[i%total]=0;
                    killing--;
                }
                del+=1;
                if(del==diff)
                    del=1;
                i++;
            }

        }

        for(i=0; i<total; i++)
        {
            if(check_list[i]!=0)
                printf("Survived Person Number(position): %ld\n",i+1);
        }
    }

    else
        printf("\n\nEnter Numbers Greater than 2\nand less than 32000.\n");

    return 0;
}