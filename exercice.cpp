#include <iostream>
#include <iomanip>
using namespace std;

class Produit {
    float PH;
    string lib;

public:
    float Prix_TTC( float tva=0.147) {
        return PH * (1+tva);
    }
    void remplir() {

        cout << "Entrez le PH : " << endl;
        cin>>PH;
        cout << "Entrez le libelet : " << endl;
        cin>>lib;
    }
    void afficher() {
        cout<<setfill('*')<<left<<setprecision(3)<<fixed;
        cout<<"+ TITRE          + PRIX HT     + PRIX TTC       +"<<endl;
        cout<<"+ "<<setw(14)<<lib<<" + "<<setw(11)<<PH<<" + "<<setprecision(2)<<setw(14)<<Prix_TTC()<<" +"<<endl;
    }
};





int main()
{
Produit P1;
    P1.remplir();
    P1.afficher();
    return 0;
}
