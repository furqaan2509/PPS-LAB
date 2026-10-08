#include<stdio.h>
int main()
{
    const int userName = 123;
    const int passWd = 123;
    int userName_ip,passWd_ip;
    printf("enter UserName & PassWord\n");
    scanf("%d%d",&userName_ip, &passWd_ip);
    if (Username == userName_ip&& passWd == passWd_ip)
    {
        printf("User is authorized");
    }
    else{
        printf("user is not authorized");
    }
    return 0;
}
