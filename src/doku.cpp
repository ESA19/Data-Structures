/** 
* G201210078 Enes Samet Aydı Veri Yapilari 2.Ödevi 
* Radix Sort ile beraber kuyruk yapisinin ve ikili arama agaci kullanilarak dosyadan verilerin cekilerek odevde istenilen ciktilarin elde edilmesi
* 2.Öğretim A Grubu
* Veri Yapıları 2. Ödevi
* 10.12.2022
* G201210078 Enes Samet Aydı
*/
#include "doku.hpp"
#include "Radix.hpp"
#include "organ.hpp"
void Doku::dokuOlustur(int*arr,int count)
{
    Radix *radix=new Radix(arr,count);
    int*siraliSayilar=radix->sirala(); 
    organ.DokudanAl(siraliSayilar);
}
int* Doku::Ortadaki(int*arr,int count)
{
    int*sayi;
    int ortadaki=count/2;
    return sayi=&(arr[ortadaki]);
}

