#include<stdio.h>
#include<stdlib.h>
struct data{
    int b;
    char name[20];
};
int main (){
    FILE* fp;
    struct data b[3];
    fp=fopen("test.txt","w+");

    if(fp==NULL)
    printf("file does not exist");
    else
    printf("file exist");
    fputs("I study in faculty of technology DU.",fp);
}