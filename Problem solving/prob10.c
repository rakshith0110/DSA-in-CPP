/* Problem

Implement the folwing functions.

char *MoveHyphen(char str[],int n);

The function accepts a string "str" of length 'n' ,that contains
alphabets and hyphens (-) in the string to the front

*/
#include<stdio.h>
#include<stdlib.h>

char *MoveHyphen(char *s,int n){
    int count = 0;
    int i = 0;
    while(i < n){
        if(s[i] == '-'){
            count++;
            memmove(&s[i],&s[i+1],n-i);
            n--;
        }
        else{
            i++;
        }
    }
    char *res = malloc((n + count +1)* sizeof(char));
    if(res == NULL){
        return NULL;
    }

    for(i = 0;i < count;i++){
        res[i] = '-';
    }

    for(i = count;i < count + n;i++){
        res[i] = s[i - count];
    }
    res[count + n] = '\0';
    return res;
}

int main(){
    char s[100];
    scanf("%s",&s);
    int n = strlen(s);
    char *result = MoveHyphen(s,n);
    printf("%s\n",result);
    free(result);
    return 0;
}
