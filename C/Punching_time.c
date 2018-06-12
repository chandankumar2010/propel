/* A company wants their employees’ punching time to be stored and displayed (in HH:MM:SS format) in the specific format mentioned.


Sample input  and output: 

Enter time(in HH:MM:SS):12:50:59

Entered time is  12:50:59
*/
#include<stdio.h>
#define MAX 9
int main(){
    char str[9];
    printf("Enter time(in HH:MM:SS):");
    fgets(str,MAX,stdin);
    printf("Entered time is %s",str);
    return 0;

}