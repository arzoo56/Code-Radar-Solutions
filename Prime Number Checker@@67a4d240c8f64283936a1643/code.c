int isPrime(int num){
    int count=0;
    for(int i=0;i<=num;i++){
        num%i==0;
        count++;
    }
    if(count==2){
        return 0;
    }
    else{
        return 1;
    }
}