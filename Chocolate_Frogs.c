#include <stdio.h>

int main(){
int N,Q;
scanf("%d %d", &N, &Q);
int pos[N+1];
int score[N+1];
for(int _=1; _<=N; _++){
    pos[_] = _;
    score[_] = 0;
}

int max=score[1];
while(Q--){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    for(int _=1; _<=N; _++){
        if(pos[_]==a) pos[_] = b;
        else if(pos[_]==b) pos[_] = a;
    }
    for(int _=1; _<=N; _++){
        if(pos[_]==c) score[_]++;
    }

    for(int _=1; _<N; _++){
        if(max<score[_+1]) max  = score[_+1];
    }

    
}
    printf("%d\n", max);
  return 0;
}
