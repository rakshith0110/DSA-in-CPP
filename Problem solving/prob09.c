/* Problem

N-base notation is a system for writing numbers that uses only n diffrent symbols,this symbols are the first
n symbols from the given notation list(including the symbol for 0) Decimal to n base notation are
(0:0,1:1,2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,10:A,11:B and so on 35:Z)

Implement the following

char* DectoNBase(int n,int num);

The function accept positive integer n and num Implement the function to calculate the n-base equivalent of
num and return the same  as a string.

Steps:

Divide the decimal number by n,Treat the division as the integer division
write the remainder(in n-base notation)
Devide the quotient again by n,Trest the division  as integer division
Repeat step 2 and 3 until the quotient is 0
the n-base value is the sequence of the remainders from last to first

Assumption:
1 < n < = 36

Example
Input
n: 12
num: 718

output:
4BA

Explanation

num     Divisor     quotient         reminder
718        12          59              10(A)
59         12          04              11(B)
4          12          00              10(A)




*/

#include<stdio.h>

char *decitoNBase(int  n,int num){
    char *res = NULL;
    int quotient = num/n;
    int *rem = malloc(sizeof(int));
    int remSize = 1;
    rem[0] = num % n;

    while(quotient != 0){
        remSize++;
        int *temp = realloc(rem,remSize *sizeof(int));
        if(temp == NULL){
            free(rem);
            return NULL;
        }
        rem = temp;
        rem[remSize -1] = quotient % n;
        quotient = quotient / n;
    }

    int resSize = remSize + 1;
    res = malloc(resSize * sizeof(char));
    if(res == NULL){
        free(rem);
        return NULL;
    }

    int i,j=0;
    for(i=remSize - 1 ;i >= 0; i--){
        if(rem[i] > 9){
            res[j] =(char)(rem[i] - 9 + 64);
        }
        else{
            res[j] = (char) (rem[i] + '0');
        }
        j++;
    }

    free (rem);
    return res;
}

int main(){
    int n,num;
    scanf("%d %d",&n,&num);
    char *result = decitoNBase(n,num);
    printf("%s",result);
    return 0;
}

