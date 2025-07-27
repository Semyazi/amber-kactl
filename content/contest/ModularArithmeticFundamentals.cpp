const ll mod = 1000000007;
int powmod(int b,int p,int md){
    int r=1;
    for(;p;p/=2){
        if(p&1)(r*=b)%=md;
        (b*=b)%=md;
    }
    return r;
}
int invert(int x){
    return powmod(x,mod-2,mod);
}