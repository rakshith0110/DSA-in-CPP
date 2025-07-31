/*

You are




*/
#include<stdio.h>

int largesmallSum(int arr[],int length){
    if(length <= 3){
        return 0;
    }
    int evenPos[100],oddPos[100];
    int evenCount = 0,oddCount = 0;

    for(int i = 0;i < length;i++){
        if(i % 2 == 0){
            evenPos[evenCount++] = arr[i];
        }
        else{
            oddPos[oddCount++] = arr[i];
        }

    }
    //sort the even position arry in descending order
    for(int i = 0;i < evenCount -1;i++){
        for(int j = 0;j < evenCount - i - 1;j++){
            if(evenCount[j] < evenPos[j + 1]){
                int temp = evenPos[j];
                evenPos[j] = evenPos[j + 1];
                evenPos[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {3,2,1,7,5,4};
    int length = strlen(arr);
    printf("%d",largesmallSum(arr,length));
    return 0;
}
