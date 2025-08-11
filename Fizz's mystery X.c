// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int zero=0;
    int one=0;
    for(int i=0; i<n; i++){
    scanf("%d", &array[i]);
   if(array[i]==0) zero++;
   if(array[i]==1) one++;
}
if(zero || one) printf("YES\n");
else printf("NO\n");
    return 0;
}
