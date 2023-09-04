/** 
* G201210078 Enes Samet Aydı Veri Yapilari 2.Ödevi 
* Radix Sort ile beraber kuyruk yapisinin ve ikili arama agaci kullanilarak dosyadan verilerin cekilerek odevde istenilen ciktilarin elde edilmesi
* 2.Öğretim A Grubu
* Veri Yapıları 2. Ödevi
* 10.12.2022
* G201210078 Enes Samet Aydı
*/
#include "hucre.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
void Hucre::dosyaOku()
{
    Doku doku;
    fstream dosya;
    string satir;
    dosya.open("veriler.txt"); //dosyanin okunmasi
    if (dosya.is_open())
    {
        while (getline(dosya,satir))
        {
            int count=0;
            stringstream ss(satir);
            int okunanSayi;
            while (ss>>okunanSayi)
            {   
                count++;
            }
            stringstream sas(satir);
            int okunan;
            int *arr=new int[count];
            int i=0;
            while (sas>>okunan)
            {
               arr[i]=okunan;
               i++; 
            }
            doku.dokuOlustur(arr,count);
            delete []arr;
        }
    }
    dosya.close();
}