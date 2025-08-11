// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int array[n];
int max=-1;
int cw = -1;
for(int i=0; i<n; i++){
    scanf("%d", &array[i]);
    if(array[i]>max) {
        max = array[i];
        cw = i;
    }
}
int rcw=n-cw;

printf("%d\n", cw < rcw ? cw : rcw);

    return 0;
}
