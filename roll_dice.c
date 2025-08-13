#include <stdio.h>

int main() {

int n;
scanf("%d", &n);
int a,b;
int count = 1;
int prev = -1;
while(n--){
    scanf("%d %d", &a, &b);
    if(prev == a*10 +b) count++;
    else count = 1;
     prev = a*10 +b;
    if(count==3) break;
}
printf("%s\n", count == 3 ? "YES" : "NO");
    
    return 0;
}
