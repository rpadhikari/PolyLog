/*
 * main.c
 *
 *  Created on: May 25, 2016
 *      Author: Rajendra P. Adhikari
 */

#include<stdio.h>
#include<math.h>
FILE *ofp;
double fd(double);
//double pi=M_PI;
double exp(double);
int main(){
  ofp=fopen("data.out","w");
  int i, m=70;
  double nf, mb;
  for(i=-m; i<=m; i++){
    nf=0.10*(double)i;
    mb=sqrt(M_PI)/2.0*exp(nf);
    fprintf(ofp," %6.2lf %20.15lf %20.15lf\n",nf, fd(nf),mb);
    printf(" %6.2lf %20.15lf %20.15lf\n",nf, fd(nf),mb);
  }
  fclose(ofp);
}

