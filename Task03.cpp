#include<iostream>
using namespace std ;
float taxCalculator(char type , float price) ;
main()
{
    char type ;
    float price ,totalTax ,  priceAfterTax;
    cout << "Enter the vehicle type code (M, E, S, V, T): " ;
    cin >> type ;
    cout << "Enter the price of the vehicle: $";
    cin >> price ;
    totalTax = taxCalculator( type , price) ;
    priceAfterTax = price + totalTax ;
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << priceAfterTax ;
}

float taxCalculator(char type , float price) 
{
    float TaxAmount ;
    if (type == 'M') 
 {
    TaxAmount = price * 6/100 ;
    return TaxAmount ;
 }
    if (type == 'E') 
 {
    TaxAmount = price * 8/100 ;
    return TaxAmount ;
 }
    if (type == 'S') 
 {
    TaxAmount = price * 10/100 ;
    return TaxAmount ;
 }
   if (type == 'V') 
 {
    TaxAmount = price * 12/100 ;
    return TaxAmount ;
 }
   if (type == 'T') 
 {
    TaxAmount = price * 15/100 ;
    return TaxAmount ;
 }
}