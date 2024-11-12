#include<iostream>
#include<iomanip>
using namespace std;

class cellule{
    int joueur;
    public:
    cellule();
    string afficherCellule();
    friend class grille;
};
cellule::cellule(){
    joueur=0;
}
string cellule::afficherCellule(){
    if(joueur==0){
        return " ";
    }
    else if(joueur==1){
        return"X";
    }
    else return"O";
}   
int main(){
    cout<< "hello";
}

