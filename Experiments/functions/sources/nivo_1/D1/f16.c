#include <stdio.h>

int f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f3(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f4(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f5(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f6(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f7(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f8(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f9(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f10(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f11(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f12(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f13(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f14(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f15(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b;
}

int f16(int a, int b, int c) {
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
 r += f2(a,b,c);
 r += f3(a,b,c);
 r += f4(a,b,c);
 r += f5(a,b,c);
 r += f6(a,b,c);
 r += f7(a,b,c);
 r += f8(a,b,c);
 r += f9(a,b,c);
 r += f10(a,b,c);
 r += f11(a,b,c);
 r += f12(a,b,c);
 r += f13(a,b,c);
 r += f14(a,b,c);
 r += f15(a,b,c);
 r += f16(a,b,c);
 return r;
}
