#include <stdio.h>
__int8 __mod(__int8 n){return (!((~(((n>>1)|((n&1)<<7))&0x80))==-1))?1:0;}
int main(void) {
    __int8 n;
    printf("%s",__mod(scanf("%d",&n)==1?n:0)==1?"o":"e");
}