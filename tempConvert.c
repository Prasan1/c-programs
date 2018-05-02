/*
* File            :tempConvert.c
* Author          :Prasanna Paudyal
* Date            :05/01/2018
* Last MOdiefied  :05/01/2018
* --------------------------------------
* OVERVIEW
*============
* This progeram coverts temperature 
* from fahrenheit to celcius scale.
*/

#include<stdio.h>
int main(void){

    //variables used
    float celcius;
    float fahrenheit;
    
    //prompt user for the input
    printf("Enter fahrenheit temperature:\n");

    //store value in fahrenheit 
    scanf("%f",&fahrenheit);

    //calculate the cilcius temperature
    celcius = (fahrenheit -32)*(5.0/9.0);
    
    //print the result
    printf("%.2f F = %.2f c\n",fahrenheit,celcius);

return 0;
}
