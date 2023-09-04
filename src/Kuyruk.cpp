/** 
* G201210078 Enes Samet Aydı Veri Yapilari 2.Ödevi 
* Radix Sort ile beraber kuyruk yapisinin ve ikili arama agaci kullanilarak dosyadan verilerin cekilerek odevde istenilen ciktilarin elde edilmesi
* 2.Öğretim A Grubu
* Veri Yapıları 2. Ödevi
* 10.12.2022
* G201210078 Enes Samet Aydı
*/

#include "Kuyruk.hpp"
#include <iomanip>
#include<stdexcept>
Kuyruk::Kuyruk()
{
    ilk=son=0;
    elemanSayisi=0;
}
Kuyruk::~Kuyruk()
{
    while(ilk!=0)
    {
        Dugum*gec= ilk;
        ilk=ilk->sonraki;
        delete gec;
    }
}
bool Kuyruk::bosmu()
{
    if(ilk==0)
        return true;
    return false;
}

void Kuyruk::ekle(int veri)
{
    if(ilk==0)
    {
        ilk=new Dugum(veri);
        son= ilk;

    }
    else
    {
        Dugum*yeni = new Dugum(veri);
        son->sonraki = yeni;
        son = yeni;

    }
    elemanSayisi++;
}
void Kuyruk::cikar()
{
    if(ilk!=0)
    {
        Dugum*gec = ilk->sonraki;
        delete ilk;
        ilk=gec;
        if(ilk==0)
            son=0;
        elemanSayisi--;
    }
}
int Kuyruk::getir()
{
    if(ilk!=0)
        return ilk->veri;
    throw std::out_of_range("Kuyruk Bos");
}

int Kuyruk::elemanSayisiGetir()
{
    return elemanSayisi;
}