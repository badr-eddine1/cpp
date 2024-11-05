#include <iostream>
#include <iomanip>
using namespace std;
class location{
    string nom;
    int age;
    string contact;
    public :
    location ();
    location(string name , int a,string con);
    string getNom(){
        return nom;
    }
    int getAge(){
        return age;
    }
    string getContact(){
        return contact;
    }
    void setNom(string name){
        nom=name;
    }
    void setAge(int a){
        age=a;
    }
    void setContact(string c){
        contact=c;
    }
    void afficherInfos();
};
location::location(){
    nom="";
    age=0;
    contact="";
}
location::location(string name , int a,string con){

    nom=name;
    age=a;
    contact=con;
}
void location::afficherInfos(){
    cout<< "le nom est"<<nom<<endl;
    cout<< "l'age est "<<age<<endl;
    cout<< "le contact est "<<contact<<endl;
}
class bienLocation{
    string adress;
    double montantL;
    bool occupe;
    public :
    bienLocation();
    bienLocation(string A,double M, bool O);
    string getAdress(){
        return adress;
    }
    double getM(){
        return montantL;
    }
    bool geto(){
        return occupe;
    }
    void setA(string  ad){
        adress=ad;
    }
    void setM(double m){
        montantL=m;
    }
    void setO(bool occ){
        occupe=occ;
    }
    bool basculerOp();
    void afficherProp();
};
bienLocation::bienLocation(){
    adress="";
    montantL=0;
    occupe=1;
}
 bienLocation::bienLocation(string A,double M, bool O){
    adress=A;
    montantL=M;
    occupe=O;
 }
bool bienLocation::basculerOp(){
    if(occupe==1){
        occupe=0;
    }
    else {occupe=1;}
    return occupe;
}
void bienLocation::afficherProp(){
    cout<< "l'adress est "<<adress<<endl;
    cout<< "le montant est"<<montantL<<endl;
    cout<< "l'occupation est "<<occupe<<endl;
}
class contractLocation{
    location locataire;
    bienLocation prop;
    string dateD;
    int dureeMois;
    public :
    contractLocation();
    contractLocation(location loca,bienLocation p,string date,int d);
    void afficherC();
};
contractLocation::contractLocation(){
    location 
}
int main(){
    location L;
    bienLocation b("badr@gmail.com",200,0);
    L.afficherInfos();
    b.afficherProp();

}