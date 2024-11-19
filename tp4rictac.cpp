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
    void jouer(int c); 
    bool gagner();

};
void grille::afficherGrille(){
    int i,j;
    cout<<"__________________________"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"|"<<tab[i][j].afficherCellule()<<"|";
        }
        cout<<"|"<<endl;
        
    }
    cout<<"__________________________"<<endl;
}
void grille::jouer(int c){
    int i,j;
    int x,y;  
    int valid;     

    afficherGrille();
    cout<< "joueur" <<c<<"veuillez saisir la ligne :";
    cin>>x;
    cout<< "joueur" <<c<<"veuillez saisir la colone :";
    cin>>y;
    if(x>3 || y>3){
        cout<< "attention !! coordonne invalide";
    }
    else if(tab[x][y].joueur==1 || tab[x][y].joueur==2 ){
     
            cout<< " attention !! l'emplacement est occupe";
        
    }
    else {
        tab[x][y].joueur=c;
    }
}
bool grille::gagner(){
    int i,j=0,y=0;
    int f;
    for(i=0;i<3;i++){
           
            if(tab[i][i].joueur==1){
                j++;
            }
            else if(tab[i][i].joueur==2){
                y++;
            }
    }
    if(y==3||j==3)return 1;
    j=y=0;
    for(i=0;i<3;i++){
        for(f=0;f<3;f++){ 
            if(tab[i][f].joueur==1){
                j++;
            }
            else if(tab[i][f].joueur==2){
                y++;
            }
    }
       if(y==3||j==3)return 1;
    }
}

int main(){
   grille g;


    
    do{
        g.jouer(1);
        g.afficherGrille();
        g.jouer(2);
        g.afficherGrille();
    }while(g.gagner()!=1);

   if(g.gagner()==1){
    cout<< "vous avez gagner";
   }

}

