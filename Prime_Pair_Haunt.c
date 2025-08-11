//Time_limit_exceed

#include <stdio.h>
int isprime(int n){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3; i*i<=n; i++){
        if(n%i==0) {
            return 0;
            break;
        }
    }
    return 1;
}



int main(){
    int l,r;
    scanf("%d %d", &l, &r);
    int count=0;
    for(int i=l; i<=r; i++){
        if(!isprime(i)) continue;
        for(int j=i+1; j<=r; j++){
            if(!isprime(j)) continue;
            int diff = (j-i);
            if(isprime(diff)) count++;
        }
    }
    
    printf("%d\n", count);
    
    
    return 0;
}
