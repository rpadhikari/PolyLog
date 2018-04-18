/*
 * fd.c
 *  Created on: May 2, 2017
 *      Author: Rajendra Adhikari
 *  This program computes the Complete Fermi-Dirac integral
 */
double simp(double, double, int, double);
double fd(double nf) {
  double a = 0.0, b = 15.0;
  return simp(a,b,12000,nf);
}

