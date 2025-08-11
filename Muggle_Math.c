
#include <stdio.h>
int bubblesort(int N, int n){
    int array[4];
    array[0] = N/1000;
    array[1] = (N/100) % 10;
    array[2]  = (N/10) % 10;
    array[3] = N % 10;
    for(int i=0; i<3; i++){
    for(int j=0; j<3-i; j++){
        if(n){
            if(array[j]<array[j+1]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }else{
             if(array[j]>array[j+1]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    }
    return array[0] * 1000 + array[1] * 100 + array[2] * 10 + array[3];
    
    
}

int same(int N){
      int array[4];
    array[0] = N/1000;
    array[1] = (N/100) % 10;
    array[2]  = (N/10) % 10;
    array[3] = N % 10;
    int value = 1;
    for(int i=0; i<3; i++){
        if(array[i] != array[i+1]){
            value=0;
            break;
        }
    }
    return value;
}

int solve(int N){
int a = bubblesort(N, 1);
int b = bubblesort(N,0);
return a-b;
}
int main() {
  int N;
  long long K;
  scanf("%d %lld", &N, &K);
  if(same(N)){
      printf("0\n");
      return 0;
  }
  int current = N;
  for(long long i=0; i<K; i++){
      if(current == 6174) break;
      current = solve(current);
      int next = solve(current);
      if(current == next) break;
      
  }
printf("%d\n", current);
    return 0;
}
