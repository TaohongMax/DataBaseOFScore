#include <stdio.h>
#include <stdlib.h>
/*数据库模型*/
int main()
{
    void average();void search();int judge(int n);

    int n;
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};

    printf("\n请输入所要查找的学生编号:（1，2，3）\n");
    scanf("%d",&n);judge(n);
    average(*score,12);
    search(score,n);

    return 0;
}
void average(float *s,int n)
{
    //
    float all=0;int i;
    for(i=0;i<12;i++){
        all+=*(s+i);
    }
    printf("\n总平均分等于%.2f\n",all/n);
}
void  search(float(*s)[4],int n)//n为学生编号
{
    //
    int i;
    putchar('\n');
    for(i=0;i<4;i++){
        printf("%.2f    ",*(*(s+n-1)+i));
    }
}
int judge(int n)
{
    if(n==1||n==2||n==3){
        ;
    }
    else{
        printf("Please input a correct number!\n");
        printf("***********************************************\n");
        return main();
    }
}
