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
class grille{
    cellule tab[3][3];
    public:
    void afficherGrille();
    void jouer();
    void 

};
void grille::afficherGrille(){
    int i,j;
    cout<<"__________________________"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"|"<<tab[i][j].afficherCellule()<<"||";
        }
        cout<<"|"<<endl;
        
    }
    cout<<"__________________________"<<endl;
}
void grille::jouer(){
    int i,j;
    int x,y;
    int valid;
    
    do{ 
        
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(tab[i][j].afficherCellule()==" " ){
                 valid=1;
            }
            else valid=0;}}
    cout<< endl;
    afficherGrille();
    cout<< "joueur 1 a vous de jouer";
    cout<< "donner les coordoner de la cellule que vous souhaitez occupe";
    cin>>x,y;
    if(i>3 || j>3){
        cout<< "attention !! coordonne invalide";
    }
    else if{
        if(tab[i][j].afficherCellule()=="X" || tab[i][j].afficherCellule()=="O" ){
            cout<< " attention !! l'emplacement est occupe";
        }
    }
    else {
        tab[i][j]="X";
    }
}
while(valid==1);}

int main(){
   grille g;
   g.afficherGrille();
}

