#include <stdio.h>

int main() {
int ax,ay,bx,by,cx,cy,dx,dy;
scanf("%d %d", &ax, &ay);
scanf("%d %d", &bx, &by);
scanf("%d %d", &cx, &cy);
scanf("%d %d", &dx, &dy);

int pointX[4] = {ax,bx,cx,dx};
int pointY[4] = {ay,by,cy,dy};
int maxX = ax;
int minX = ax;
int maxY = ay;
int minY = ay;

for(int i=0; i<4; i++){
    if(maxX<pointX[i]) maxX=pointX[i];
    if(minX>pointX[i]) minX=pointX[i];
    if(maxY<pointY[i]) maxY=pointY[i];
    if(minY>pointY[i]) minY=pointY[i];    
}


int q;
scanf("%d", &q);
while(q--){
    int x,z;
    scanf("%d %d", &x, &z);
 if(x >=minX && x<= maxX && z>=minY && z<= maxY) printf("IN THE ZONE\n");
 else printf("NOOOOO!\n");
    
}

return 0;
}
