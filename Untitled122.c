#include<stdio.h>
int main()
{

    char country;
    int x,m,sum=0,total=0,difference;
    printf("                     Bangladesh Vs Afghanistan 3rd ODI 2016   \n\n\n");
    printf("This country is win the toss : ");
    scanf("%c",&country);
    printf("Bangladeshi player's details : \n\n");
    int ara[12]={118,11,65,17,12,32,4,4,2,2,0,12};
    for(x=0;x<12;x++){
    sum=sum+ara[x];
    }

    printf("Tamim run     : %d\n",ara[0]);
    printf("S.S run       : %d\n",ara[1]);
    printf("Sabbir Rahman : %d\n",ara[2]);
    printf("Shakib A.H    : %d\n",ara[3]);
    printf("Mushfiqur R   : %d\n",ara[4]);
    printf("Mahmudullah   : %d\n",ara[5]);
    printf("Mosaddek H    : %d\n",ara[6]);
    printf("Mosharraf H   : %d\n",ara[7]);
    printf("Mashrafe      : %d\n",ara[8]);
    printf("Shafiul I     : %d\n",ara[9]);
    printf("Tachkine      : %d\n",ara[10]);
    printf("Extra run     : %d\n",ara[11]);

    printf("Bangladesh's total run : %d\n\n\n",sum);

    printf("Afghanistantan player's details :\n\n");
    int af[12]={0,33,36,0,1,13,3,26,17,4,0,5};
    for(m=0;m<12;m++){
        total=total+af[m];
    }
    printf("Mohammad Shahzad : %d\n",af[0]);
    printf("Nawroz M         : %d\n",af[1]);
    printf("Rahmat S         : %d\n",af[2]);
    printf("Hsshmatullah S   : %d\n",af[3]);
    printf("Asghar S         : %d\n",af[4]);
    printf("Samiullah S      : %d\n",af[5]);
    printf("Mohammad N       : %d\n",af[6]);
    printf("Najibullah Z     : %d\n",af[7]);
    printf("Rashid K         : %d\n",af[8]);
    printf("Mirwais A        : %d\n",af[9]);
    printf("Dawlat Z         : %d\n",af[10]);
    printf("Extra run        : %d\n",af[11]);

    printf("Afghanistan's total run : %d\n\n",total);

    printf("which country win the game ?\n\n");

    printf("Bangladesh get's : %d & Afghinistan get's : %d\n\n\n",sum,total);

    if(sum>total){
        printf("So Bangladesh win the game   &\n\n");
    }
    else{
        printf("So Afghinistan win the game  &\n\n");
    }

    difference =sum-total;
    printf("This country win by : %d",difference);

    return 0;
}
