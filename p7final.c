#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef _complex complex;
Complex input_complex()
{
  complex x;
  printf("enter the values\n");
  scanf("%f%f\n",&x.real,&x.imaginary);
  return x;
}
Complex add(Complex a, Complex b)
{
  complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}
void output(Complex a, Complex b, Complex c)
{
  printf("%f + %fi + %f + %fi is %f + %fi",a.real,a.imaginary,b.real,b.imaginary);
}
int main()
{
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}