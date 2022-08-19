

int reverse(int x){
    if(x==-2147483648){
        return 0;
    }
    int flag=0;
    if(x<0){
        x*=-1;
        flag=1;
    }
    int length=log10(x)+1;
    int new=0;
    for(int i=0;i<length;i++){
        new+=(x%10)*pow(10,length-i-1);
        x=(x-(x%10))/10;
        printf("%d\n",new);
        if(new+(x%10)*pow(10,length-i)<new || new<0){
        return 0;
        }
        
        
    }
    
    if(flag==1){
        new*=-1;
    }
    
    return new;
}