#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	int main()
    {
        int sobimat=0,sodudoan=0,bodem=1,choitiep;
        const int max=1000,min=1;
    srand(time(NULL));
        sobimat=(rand()%(max-min+1))+min;
    while(choitiep!=0)
    {
        do
        {
            printf("Nhap so du doan: ");
            scanf("%d",&sodudoan);
            if (sodudoan<sobimat)
            {printf("lon hon\n");
            bodem+=1;}
            else if(sodudoan>sobimat)
            {printf(" nho hon\n");
            bodem+=1;}
            else 
            printf("Chuc mung ban da doan dung so bi mat sau %d lan\n",bodem);
            }
            while(sodudoan!=sobimat);
            printf(" Cam on ban da tham gia tro choi\n");
    printf(" Ban co muon tham gia tiep khong (1/0)\n");
    printf("Moi nhap so khac voi so 0 de choi tiep :  ");
    scanf("%d",&choitiep);    
        }
        system("pause");
        return 0;
        }

