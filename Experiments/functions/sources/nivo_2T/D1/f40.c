#include <stdio.h>

int _f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f1(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f1(a,b,c);
 return a+b+c;
}

int _f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f2(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f2(a,b,c);
 return a+b+c;
}

int _f3(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f3(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f3(a,b,c);
 return a+b+c;
}

int _f4(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f4(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f4(a,b,c);
 return a+b+c;
}

int _f5(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f5(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f5(a,b,c);
 return a+b+c;
}

int _f6(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f6(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f6(a,b,c);
 return a+b+c;
}

int _f7(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f7(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f7(a,b,c);
 return a+b+c;
}

int _f8(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f8(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f8(a,b,c);
 return a+b+c;
}

int _f9(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f9(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f9(a,b,c);
 return a+b+c;
}

int _f10(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f10(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f10(a,b,c);
 return a+b+c;
}

int _f11(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f11(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f11(a,b,c);
 return a+b+c;
}

int _f12(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f12(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f12(a,b,c);
 return a+b+c;
}

int _f13(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f13(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f13(a,b,c);
 return a+b+c;
}

int _f14(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f14(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f14(a,b,c);
 return a+b+c;
}

int _f15(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f15(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f15(a,b,c);
 return a+b+c;
}

int _f16(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f16(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f16(a,b,c);
 return a+b+c;
}

int _f17(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f17(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f17(a,b,c);
 return a+b+c;
}

int _f18(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f18(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f18(a,b,c);
 return a+b+c;
}

int _f19(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f19(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f19(a,b,c);
 return a+b+c;
}

int _f20(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f20(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f20(a,b,c);
 return a+b+c;
}

int _f21(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f21(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f21(a,b,c);
 return a+b+c;
}

int _f22(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f22(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f22(a,b,c);
 return a+b+c;
}

int _f23(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f23(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f23(a,b,c);
 return a+b+c;
}

int _f24(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f24(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f24(a,b,c);
 return a+b+c;
}

int _f25(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f25(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f25(a,b,c);
 return a+b+c;
}

int _f26(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f26(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f26(a,b,c);
 return a+b+c;
}

int _f27(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f27(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f27(a,b,c);
 return a+b+c;
}

int _f28(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f28(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f28(a,b,c);
 return a+b+c;
}

int _f29(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f29(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f29(a,b,c);
 return a+b+c;
}

int _f30(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f30(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f30(a,b,c);
 return a+b+c;
}

int _f31(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f31(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f31(a,b,c);
 return a+b+c;
}

int _f32(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f32(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f32(a,b,c);
 return a+b+c;
}

int _f33(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f33(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f33(a,b,c);
 return a+b+c;
}

int _f34(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f34(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f34(a,b,c);
 return a+b+c;
}

int _f35(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f35(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f35(a,b,c);
 return a+b+c;
}

int _f36(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f36(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f36(a,b,c);
 return a+b+c;
}

int _f37(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f37(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f37(a,b,c);
 return a+b+c;
}

int _f38(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f38(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f38(a,b,c);
 return a+b+c;
}

int _f39(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f39(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f39(a,b,c);
 return a+b+c;
}

int _f40(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b;
 return a+b+c;
}

int f40(int a, int b, int c) {
 a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
 if(b!=0)
   return a/b + _f40(a,b,c);
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
 r += f11(a,b,c);
 r += f12(a,b,c);
 r += f13(a,b,c);
 r += f14(a,b,c);
 r += f15(a,b,c);
 r += f16(a,b,c);
 r += f17(a,b,c);
 r += f18(a,b,c);
 r += f19(a,b,c);
 r += f20(a,b,c);
 r += f21(a,b,c);
 r += f22(a,b,c);
 r += f23(a,b,c);
 r += f24(a,b,c);
 r += f25(a,b,c);
 r += f26(a,b,c);
 r += f27(a,b,c);
 r += f28(a,b,c);
 r += f29(a,b,c);
 r += f30(a,b,c);
 r += f31(a,b,c);
 r += f32(a,b,c);
 r += f33(a,b,c);
 r += f34(a,b,c);
 r += f35(a,b,c);
 r += f36(a,b,c);
 r += f37(a,b,c);
 r += f38(a,b,c);
 r += f39(a,b,c);
 r += f40(a,b,c);
 return r;
}
