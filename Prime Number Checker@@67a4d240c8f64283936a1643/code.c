int isPrime(num){
    int count=0;
    for(int i=0;i<=num;i++){
        num%i==0;
        count++;
    }
    if(count==2){
        printf("1");
    }
    else{
        printf("0");
    }
}