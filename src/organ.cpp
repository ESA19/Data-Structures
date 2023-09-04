/** 
* G201210078 Enes Samet Aydı Veri Yapilari 2.Ödevi 
* Radix Sort ile beraber kuyruk yapisinin ve ikili arama agaci kullanilarak dosyadan verilerin cekilerek odevde istenilen ciktilarin elde edilmesi
* 2.Öğretim A Grubu
* Veri Yapıları 2. Ödevi
* 10.12.2022
* G201210078 Enes Samet Aydı
*/
#include "organ.hpp"
#include <iostream>
using namespace std;
Organ::Organ()
{
    data=0;
    left=NULL;
    right=NULL;
    root=NULL;
    OrganSayisi=0;
    elemanSayisi=0;
}
Organ::Organ(int sayi)
{
    data=sayi;
    left=right=NULL;
}

Organ* Organ::Insert(Organ* root,int*sayi)
{
    if (!root)
    {
        return new Organ(*(sayi));
    }
    if (*(sayi)>root->data)
    {
        root->right=Insert(root->right,sayi);
    }
    else if (*(sayi)<root->data)
    {
        root->left=Insert(root->left,sayi);
    }
    
   else if (*(sayi)==root->data)
   {
      root->left=Insert(root->left,sayi);
   }
   
    return root;  
}
void Organ::DokudanAl(int*Doku)
{    
    root=Insert(root,Doku);
    elemanSayisi++;
    if (elemanSayisi%20==0)
    {
        kokTut.push_back(root);
        OrganSayisi++;
        OrganOlustur(kokTut.back());
        elemanSayisi=0;
        root=NULL;
    }
}
void Organ::OrganOlustur(Organ*root)
{
     if (OrganSayisi%100==0)
    {
        static int a=100;
        static int i = 0;
        for (i; i < a; i++)
        {
            if (dengeliMi(kokTut[i]))
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }  
        }
        cout << endl;
        a += 100;
    }
}
int Organ::yukseklik(Organ*root)
{
    if (root==nullptr)
        return 0;
    return 1+max(yukseklik(root->left),yukseklik(root->right));  
}
bool Organ::dengeliMi(Organ*root)
{
    int lh;
    int rh;
    if (root==nullptr)
        return 1;
    lh=yukseklik(root->left);
    rh=yukseklik(root->right);
    if (abs(lh-rh)<=1&&dengeliMi(root->left)&&dengeliMi(root->right))
        return 1;
    
    return 0;
}

