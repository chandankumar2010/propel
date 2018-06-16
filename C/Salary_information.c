/*
Company XXX wants to maintain full Salary details of their employees, in order to calculate increment or appraisal based on their performance. Details to be collected are employee's ID, total worked hours of a month and the amount he/she received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
Sample Input 1:
Input the Employee ID: 2345567
Input the working hrs: 6
Salary amount/hr: 500
Sample Output 1:
Employee ID = 2345567
Salary = $3000.00
*/

#include <stdio.h>
int main(){
    int emp_id, working_hrs, salary;
    float total_salary;
    printf("Input the Employee ID:");
    scanf("%d",&emp_id);
    printf("Input the working hrs:");
    scanf("%d",&working_hrs);
    printf("Salary amount/hr:");
    scanf("%d",&salary);
    printf("Employee ID = %d\n",emp_id);
    total_salary=working_hrs*salary;
    printf("Salary = $%.2f",total_salary);

return 0;
}