/*
Ram participates in a coding contest, where he got a program in which he needs to get a number from user and swap the first and last digit of the given number.
Since he got confused with the logic of the program, he seeks help from the online forum.  How will you help Ram to win the contest? 

Sample Input 1:
Enter any number: 12345
Sample Output 1:
Original number = 12345
Number after swapping first and last digit: 52341

Sample Input 2:
Enter any number: -55
Sample Output 2:
Invalid number!!  Number should be a positive integer
*/

#include <stdio.h>
#include<stdlib.h>

int
main ()
{
  int num;
  printf("Enter any number: ");
  scanf ("%d", &num);

  if(num<=0){
      printf("Invalid number!! Number should be a positive integer");
      return 0;
  }
 
  char snum[50];
 
  // convert to string
  int len = sprintf (snum, "%d", num);
 
   // character swap
  char temp = snum[0];
  snum[0] = snum[len - 1];
  snum[len - 1] = temp;

  // convert to int or use the snum string
  int result = atoi (snum);
  printf("Original number= %d\n",num);
  printf ("Number after swapping first and last digit: %d", result);

  return 0;
}
