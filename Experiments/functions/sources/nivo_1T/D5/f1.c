#include <stdio.h>

int f1(int a, int b) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b;
}

int main() {
 int a, b, r = 0;
 scanf("%d%d", &a, &b);
 r += f1(a,b);
 return r;
}
