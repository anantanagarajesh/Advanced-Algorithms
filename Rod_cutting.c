int rod_cutting(int len[],int price[]){
    int arr[9]={0};
    int max=arr[0]=0;
    for(int i=1;i<=8;i++){
        for(int k=0;k<i;k++){
            arr[i]=arr[i-k-1]+price[k];
            if(max<arr[i]){
                max=arr[i];
            }
        }
    }
    return max;
}

int main(){
    int length[8]={1,2,3,4,5,6,7,8};
    int price[8]={1,5,8,9,10,17,17,20};

    int max = rod_cutting(length,price);
    printf("%d",max);
}