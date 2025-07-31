/*
The Binary number system only uses two digits,0 and 1 and number system can be called binary string.
you are required to implement the following function:

int OperationsBinaryString(char* str);

The function accepts a string str as its argument.the string str conists of binary digits
 eparatted with an alphabet as follows:

-A denotes AND operation
-B denotes OR operation
-C denotes XOR operation

You are required to calculate the result of the string str,scanning the string to right
taking one operation at a time,and return the same.

Note:
No order of properties of operations is required
Length of str is odd
If str is NULL or None (in case of Python),return -1

Input:
str : 1C0C1C1A0B1

OUTPUT:
1

*/
#include<stdio.h>
#include<stdlib.h>

int OperationsBinaryString(char *str){
    if(str == NULL)
        return -1;
    int i = 1;
    int a = *str - '0';
    str++;
    while(*str != '\0'){
        char p = *str;
        str++;
        if(p == 'A')
            a &= (*str - '0');
        else if(p == 'B')
            a |= (*str - '0');
        else
            a ^= (*str - '0');
        str++;
    }
    return a;
}

int main(){
    char str[100];
    fgets(str,sizeof (str),stdin);
    int len = strlen(str);
    if(str[len -1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    int result = OperationsBinaryString(str);
    printf("%d\n",result);
    return 0;
}
