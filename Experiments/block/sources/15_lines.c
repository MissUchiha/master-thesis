// milena@jason:/opt/llvm-3.3/cbmc-5-5-linux-64$ time ./cbmc --div-by-zero-check --64 --function m branislava.c
// milena@jason:/opt/llvm-3.3/cbmc-5-5-linux-64$ time ./cbmc --div-by-zero-check --32 --function m branislava.c

int m(int a, int b, int c, int d)
{

  a = (b<<3)*((c>>2)/3);
  b = (a<<3)*((c>>2)/3);
  c = (b<<3)*((a>>2)/3);

  a = (b<<3)*((c>>2)/3);
  b = (a<<3)*((c>>2)/3);
  c = (b<<3)*((a>>2)/3);

  a = (b<<3)*((c>>2)/3);
  b = (a<<3)*((c>>2)/3);
  c = (b<<3)*((a>>2)/3);

  a = (b<<3)*((c>>2)/3);
  b = (a<<3)*((c>>2)/3);
  c = (b<<3)*((a>>2)/3);

  a = (b<<3)*((c>>2)/3);
  b = (a<<3)*((c>>2)/3);
  c = (b<<3)*((a>>2)/3);

  a = b/c + b/a + c/(++b);
  b = a/d;

  return b;
}
