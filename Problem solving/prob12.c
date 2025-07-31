/*

you are given a function,

Void *ReplaceCharacter(char str[],int n,char ch1,char ch2);

The fuction accepts a string 'str' of length n and two characters 'ch1' and 'ch2' its arguments. Implement the function
to modify and return the string 'str' in such a way that
all occurrences of 'ch1' in original string are replace by 'ch2'. and all occurrences of 'ch2' in original string are replaced by 'ch1'.

Assumption: String contains only lower-case alphabetical letters.

Note:

Return null





*/
void ReplaceCharacter(char str[],int n,char ch1,char ch2){
    int i;
    for(i=0;i<n;i++){
        if(str[i] == ch1){
            str[i] = ch2;
        }
        else if(str[i] == ch2){
            str[i] = ch1;
        }
    }
    printf("%s",str);

}


int main(){
    char a[100];
    char b,c;
    int len;
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    len =strlen(a);
    ReplaceCharacter(a,len,b,c);
    return 0;

}
