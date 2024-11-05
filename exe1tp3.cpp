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
int main(){
    location L;
    L.afficherInfos();
}