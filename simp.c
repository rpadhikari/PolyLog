/*
 * simp.c
 *  Created on: May 25, 2016
 *  Author: Rajendra Adhikari
 *  This program computes the Complete Integral of a function using
 *  Simpson's 3/8th rule
 */
double fx(double, double);
double simp(double a, double b, int n, double nf){
  int i;
  double sum1=0.0;
  double sum2=0.0;
  double sum3=0.0;
  double h, x, val;
  h=(b-a)/(double)n;
  for(i=1;i<=n-2;i=(i+3)){
      x = a+(double)i*h;
      sum1 += fx(x,nf);
  }
  for(i=2;i<=n-1;i=(i+3)){
      x = a+(double)i*h;
      sum2 += fx(x,nf);
  }
  for(i=3;i<=n-3;i=(i+3)){
      x = a+(double)i*h;
      sum3 += fx(x,nf);
  }
  val=(3.0*h/8.0)*(fx(a,nf)+fx(b,nf)+3.0*sum1+3.0*sum2+2.0*sum3);
  return val;
}

