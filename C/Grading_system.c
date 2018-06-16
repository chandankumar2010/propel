#include<stdio.h>
int main(){

    int num;

    printf("Enter marks\n");
    scanf("%d",&num);
    if(num>100 || num <0){
        printf("Enter valid marks");
        return 0;
    }

    if(num<25)
        printf("Grade is:F");
    else if(num>=25 && num<45)
        printf("Grade is:E");
    else if(num>=45 && num <50)
        printf("Grade is:D");
    else if(num>=50 && num<60)
        printf("Grade is:C");
    else if(num>=60 && num<80)
        printf("Grade is:B");
    else if(num>=80)
        printf("Grade is:A");
    
    
return 0;
}