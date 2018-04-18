/*
 * fx.c
 *  Created on: May 25, 2016
 *      Author: Rajendra Adhikari
 * Polylog function
 */
double pow(double, double);
double exp(double);

double fx(double x, double nf){
  return pow(x,0.50)/(exp(x-nf)+1.0);
}

