/* 
The librarian of Universal Library, wants to maintain a log for the books in the  library. Help the librarian to maintain the log in such a way that a book’s name should be followed by its author’s name.  Refer the output statements for the format:
Sample Input 1:
Enter two strings:

C

Dennis Richie

Sample Output 1:

C book was written by Dennis Richie
*/

#include<stdio.h>
int main(){
    char book[100];
    char author[100];
    printf("Enter two strings:");
    scanf("%s %s",&book,&author);
    printf("%s book was written by %s",book,author);
    return 0;
}