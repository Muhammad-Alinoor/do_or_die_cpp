#include<stdio.h>

int main(){
    char first[20];
    char second[20];
    char third[20];
    printf("Enter the first name : ");
    scanf("%s",first);
    printf("Enter the middle name : ");
    scanf("%s",second);
    printf("Enter the last name : ");
    scanf("%s",third);
    printf("%s %2.1s. %s",first,second,third);
    printf("\n%2.1s.%.1s. %s",first,second,third);
    printf("\n%s %2.1s.%.1s. ",third,first,second);
}