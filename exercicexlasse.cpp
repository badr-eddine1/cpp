#include <iostream>
#include <iomanip>
using namespace std;
 class point{
    int abssisse;
    int ordonnee;
    public:
    int getAbssisse(){
        return abssisse;
    }
    int getOrdonnee(){
        return ordonnee;
    }
    void setAbssisse(int abs){
        abssisse=abs;
    }
    void setOrdonne(int ord){
        ordonnee=ord;
    }
    void afficher();
    void remplire(point);
 };
 void point::remplire(point p){
        cout <<"donnez les coordonne ";
        cin >>p.abssisse>>p.ordonnee;

  }
void point::afficher(){
        cout << "l'abssisse est : "<<getAbssisse();
        cout <<"l'ordonnee est :"<<getOrdonnee();
  }
 int main(){
    point obj;
    obj.remplire(obj);
    obj.afficher();

 }