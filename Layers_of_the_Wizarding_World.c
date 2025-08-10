#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    char array[N][N+1];
    for(int i=0; i<N; i++)
    scanf("%s", array[i]);
    
    int Q;
    scanf("%d", &Q);
    while(Q--){
        int L;
        char ch;
        scanf("%d  %c", &L, &ch);
        int layer = L-1;
        int total= (N+1) / 2;
        
        int count = 0;
        for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            int index = i;
            if(j<index) index = j;
            if(N-1-i<index) index = N-1-i;
            if(N-1-j<index) index = N-1-j;
            int center = total - index;
            if( center == L && array[i][j] == ch) count++; 
            
        }
        printf("%d\n", count);
    }
    
    
    
    return 0;
}
