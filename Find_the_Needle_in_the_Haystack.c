#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 char s[10002];
 scanf("%s",s);
 int len = strlen(s);
 int q;
 scanf("%d",&q);
 while(q--){
     int l,r;
     scanf("%d %d", &l, &r);
     int freq[26]={0};
     int value=1;
     for(int i=l-1; i<r; i++){
         if(islower(s[i])){
             freq[s[i]-'a']++;
         }
     }
     for(int i=0; i<26; i++){
          if(freq[i]>1){
             value=0;
             break;
         }
     }
     printf("%s\n", value? "YES" : "NO");
     
 }
    return 0;
}
