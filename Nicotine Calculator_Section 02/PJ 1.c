#include <stdio.h>
#include <stdlib.h>

struct nicotinecontent{
    int  cignum1, cignum2, cignum3, cignum4, cignum5,cignum6,cignum7;
  float weeklync;
};

void display(struct nicotinecontent nn);
int main()
{

    struct nicotinecontent n;


    char ch;
    int Total;
    float weeklynyc=0;

     FILE *Originalfp=fopen("E:\\text.txt","w+");
     FILE *q=fopen("E:\\text.txt","r");

     if(Originalfp==NULL)
     {
         printf("File does not exist");
     }
     printf("Which brand of cigarette do u consume on daily basis? \n");
    printf("Press 1 for Marlboro Gold\n");
    printf("Press 2 for Dunhill\n");
    printf("Press 3 for Benson and Hedges\n");
    printf("Press 4 for Gold leaf\n");
    scanf("%c",&ch);
    printf("Enter the number of cigarettes u smoked on Sunday:");
    scanf("%d",&n.cignum1);
    printf("Enter the number of cigarettes u smoked on Monday:");
    scanf("%d",&n.cignum2);
    printf("Enter the number of cigarettes u smoked on Tuesday:");
    scanf("%d",&n.cignum3);
    printf("Enter the number of cigarettes u smoked on Wednesday:");
    scanf("%d",&n.cignum4);
    printf("Enter the number of cigarettes u smoked on Thursday:");
    scanf("%d",&n.cignum5);
    printf("Enter the number of cigarettes u smoked on Friday:");
    scanf("%d",&n.cignum6);
    printf("Enter the number of cigarettes u smoked on Saturday:");
    scanf("%d",&n.cignum7);
    fprintf(Originalfp," Number of cigarette on Sunday:%d\n  Number of cigarette on Monday:%d \n Number of cigarette on Tuesday:%d\n Number of cigarette on Wednesday: %d\nNumber of cigarette on Thursday: %d\n Number of cigarette on Friday: %d\n Number of cigarette on Saturday: %d",n.cignum1,n.cignum2,n.cignum3,n.cignum4,n.cignum5,n.cignum6,n.cignum7);


    do
    {
        fscanf(q,"%d %d %d %d %d %d %d",&n.cignum1,&n.cignum2,&n.cignum3,&n.cignum4,&n.cignum5,&n.cignum6,&n.cignum7);

    }while(!feof(q));



       Total=n.cignum1+n.cignum2+n.cignum3+n.cignum4+n.cignum5+n.cignum6+n.cignum7;
        printf("Total number of cigarette you consumed throughout the week=%d\n",Total);


      if(ch==1)
    {
      n.weeklync=n.weeklync+(Total*13.16);
    }
    else if(ch==2)
    {
        n.weeklync=n.weeklync+(Total*11.30);
    }
    else if(ch==3)
    {
       n.weeklync=n.weeklync+(Total*13.03);
    }
    else if(ch==4)
    {
        n.weeklync=n.weeklync+(Total*10);
}
fprintf("Weekly nicotine content:%f",n.weeklync);

fclose(Originalfp);
display(n);
}

void display(struct nicotinecontent nn)
{

    printf("Cigarettes consumed on day 1:%d\n",nn.cignum1);
    printf("Cigarettes consumed on day 2:%d\n",nn.cignum2);
    printf("Cigarettes consumed on day 3:%d\n",nn.cignum3);
    printf("Cigarettes consumed on day 4:%d\n",nn.cignum4);
    printf("Cigarettes consumed on day 5:%d\n",nn.cignum5);
    printf("Cigarettes consumed on day 6:%d\n",nn.cignum6);
    printf("Cigarettes consumed on day 7:%d\n",nn.cignum7);


    printf("Weekly nicotine content :%f mg",nn.weeklync);
}


