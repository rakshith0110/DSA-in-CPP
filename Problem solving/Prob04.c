/*
You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument.Implement
the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

-At least 4 charecters
-At least one numeric digit
-At least one Capital Letter;
-Must not have space or slash(/)
-Starting character must be not be a number

Assumption:
Input string will not be empty;

Example:

input 1:
aA1_67

input 2:
a987 abCC012

output 1:
1

output  2:
0

*/

#include<stdio.h>
#include<string.h>

int CheckPassword(char str[],int n){
    //At least 4 charecters
    if(n < 4)
        return 0;
    //Starting charecter must not be a number
    if(str[0] - '0' >= 0 &&str[0] - '0' <= 9)
        return 0;
    int a = 0,cap = 0, nu = 0;
    while(a < n){
        //Must not have space or slash(/)
        if(str[a] == ' ' || str[a] == '/')
            return 0;
        //Counting captial letters
        if(str[a] >= 'A' && str[a] <= 'Z'){
            cap++;
        }
        //counting numaric digits
        else if(str[a] - '0' >= 0 && str[a]  - '0' <= 9){
            nu++;
        }
        //Intresting for the while loop
        a++;
    }
    //returns 1 if there are > 0 numeric digits and capital letters
    return cap > 0 && nu > 0;
}



int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    if(str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }
    int result = CheckPassword(str,len);
    printf("%d\n",result);
    return 0;
}
