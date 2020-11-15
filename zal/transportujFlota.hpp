#pragma once
using namespace std;

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
 if (towar ==0)
 {
   cout<<"nie tworzymy zadnego statku"<<endl;
 }
 else
 {    
   int i=0;
   int suma = 0;
   int towarstatku;
   int liczbazaglowcow;
   while (suma < towar)
   {
    Stocznia stocznia{};
    Statek* s1=stocznia();
    towarstatku = unsigned int transportuj();
    suma=suma+towarstatku;
    if(dynamic_cast<Zaglowiec*>(s1))
    {i=i+1;};
    
    delete s1;

   }
 
 }
 
    return i;
}