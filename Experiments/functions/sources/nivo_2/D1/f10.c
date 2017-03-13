#include <stdio.h>

int _f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f1(a,b,c);
 return a+b+c;
}

int _f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f2(a,b,c);
 return a+b+c;
}

int _f3(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f3(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f3(a,b,c);
 return a+b+c;
}

int _f4(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f4(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f4(a,b,c);
 return a+b+c;
}

int _f5(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f5(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f5(a,b,c);
 return a+b+c;
}

int _f6(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f6(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f6(a,b,c);
 return a+b+c;
}

int _f7(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f7(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f7(a,b,c);
 return a+b+c;
}

int _f8(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f8(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f8(a,b,c);
 return a+b+c;
}

int _f9(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f9(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f9(a,b,c);
 return a+b+c;
}

int _f10(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c;
 return a+b+c;
}

int f10(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(c!=0)
   return a/c + _f10(a,b,c);
 return a+b+c;
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
 return r;
}
