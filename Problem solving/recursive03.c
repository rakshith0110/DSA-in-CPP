//To check if a string is a palindrome

int isPalindrome(char str[],int start,int end){
    if(start >= end)
        return 1;
    if(str[start] != str[end])
        return 0;
    return isPalindrome(str,start + 1,end -1);
}

int main(){
    char a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    printf("%d",isPalindrome(str,start,end));
    return 0;
}

