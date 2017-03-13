#include <stdio.h>

int _f1(int a, int b, int c) {
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
 return a+b+c;
}

int f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f1(a,b,c);
 return a+b+c;
}

int _f2(int a, int b, int c) {
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
 return a+b+c;
}

int f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f2(a,b,c);
 return a+b+c;
}

int main() {
 int a, b, c, r = 0;
 scanf("%d%d%d", &a, &b, &c);
 r += f1(a,b,c);
 r += f2(a,b,c);
 return r;
}
