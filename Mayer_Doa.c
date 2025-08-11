#include <stdio.h>

int main() {
	long long M;
	scanf("%lld", &M);
	if(M>1 && (M&(M-1)) == 0) printf("Ferocious Angry Fighter\n");
	else printf("HailaYehKyaHua\n");
	return 0;
}
