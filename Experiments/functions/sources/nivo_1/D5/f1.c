#include <stdio.h>

int f1(int a, int b, int c) {
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
 if(c!=0)
   return a/c;
 return a+b;
}

int main() {
 int a, b, c, r = 0;
 scanf("%d%d%d", &a, &b, &c);
 r += f1(a,b,c);
 return r;
}
