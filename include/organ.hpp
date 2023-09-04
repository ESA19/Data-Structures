#ifndef organ_hpp
#define organ_hpp
#include "sistem.hpp"
#include <iostream>
#include <vector>
class Organ
{
    public:
        Organ();
        Organ(int sayi);
        Organ*Insert(Organ*organ, int*sayi);
        void Inorder(Organ*organ);
        void DokudanAl(int*Doku);   
        void OrganOlustur(Organ*root);
        int yukseklik(Organ*kok);
        bool dengeliMi(Organ*kok);
        int data;
        Organ*left,*right;
        Organ*root;
        int elemanSayisi;
        int OrganSayisi;
        vector<Organ*>kokTut;
};     
#endif