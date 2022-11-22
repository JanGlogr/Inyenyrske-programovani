#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

int main()
{
    std::cout<<"Zadejte krestni jmeno: ";
    std::string Krestni_jmeno;
    std::cin>>Krestni_jmeno;

    std::cout<<"Zadejte prijmeni: ";
    std::string Prijmeni;
    std::cin>>Prijmeni;

    float vyska;
    bool kontrola_vysky = false;
    while (kontrola_vysky == false) {
            std::cout<<"Zadejte svoji vysku: \n";
            std::cin>> vyska;
            if(vyska >= 100 && vyska <= 230) {
                kontrola_vysky =true;
                }
        }
    float hmotnost;
        std::cout<<"Zadejte svoji hmotnost: \n";
        std::cin>> hmotnost;

    float vek;
    bool kontrola_vek = false;
    while (kontrola_vek == false) {
            std::cout<<"Zadejte svuj vek: \n";
            std::cin>> vek;
            if(vek >= 18 && vek <= 120) {
                kontrola_vek =true;
                }
        }
    int i;
    bool kontrola_vzdelani = false;
    while (kontrola_vzdelani == false) {
            std::cout<<"Zadejte maximalni dosazane vydelani: \n" "Pro ZS=1, pro SS=2, pro VS=3 \n ";
            std::cin>>i;
            if(i>=1 && i <=3){
                kontrola_vzdelani= true;
            }
            else {
            std::cout <<"Zadejte spravne dosazene vzdelani (1-3): \n";
            }
        }
    std::cout << "Vase krestni jmeno je: " << Krestni_jmeno << "\n";
    std::cout << "Vase prijmeni je: " << Prijmeni << "\n";
    std::cout << "Vase vyska je: " << vyska << "\n";
    std::cout << "Vase hmotnost je: " << hmotnost << "\n";
    std::cout << "Vas vek je: " << vek << "\n" ;
    if (i==1){
            std::cout << "Vase vzdelani je ZS \n";
            }
    else if (i==2){
            std::cout << "Vase vzdelani je SS \n";
            }
    else if (i==3){
            std::cout << "Vase vzdelani je VS \n";
            }
    std::ofstream vystupni_soubor ("vystupni.txt");
    vystupni_soubor << "Vase krestni jmeno je: " << Krestni_jmeno << "\n";
    vystupni_soubor << "Vase prijmeni je: " << Prijmeni << "\n";
    vystupni_soubor << "Vase vyska je: " << vyska << "\n";
    vystupni_soubor << "Vase hmotnost je: " << hmotnost << "\n";
    vystupni_soubor << "Vas vek je: " << vek << "\n";

    if (i==1){
            vystupni_soubor << "Vase vzdelani je ZS \n";
            }
    else if (i==2){
            vystupni_soubor << "Vase vzdelani je SS \n";
            }
    else if (i==3){
            vystupni_soubor << "Vase vzdelani je VS \n";
            }
    return 0;

}
