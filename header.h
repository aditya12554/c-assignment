int adams(int n)
{
    int rev = 0;
    int x,p;
    int h = 0;
    int e = n*n;
    while(n>0){
        x = n%10;
        rev = rev*10 + x;
        n = n/10;
    }
    int c =rev*rev;
    while(c>0){
        p = c%10;
        h = h*10+p;
        c=c/10;
    }
    if(h==e){
        return 1;
    }
    else{
        return 0;
    }
}

int palindrome(int a)
{
    int b;
    int p = 0;
    int temp = a;
    while (a > 0)
    {
        b = a % 10;
        p = p * 10 + b;
        a = a / 10;
    }
    if (temp == p)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int perfect(int b){
    int d = 0;
    for(int i=1;i<b;i++){
        if(b%i==0){
            d=d+i;
        }
    }
    if(b==d){
        return 1;
    }
}

