#include <iostream>
#include <iomanip>
using namespace std;

class pc {
    string model;
    int qntRam;
    int qntDd;
    string processor;
    public :
    string getModel(){
        return model;
    }
    int getQ(){
        return qntRam;
    }
    int getQndd(){
        return qntDd;
    }
    string getPro(){
        return processor;
    }
    void setModel(string m){
        model=m;
    }
    void setQ(int q){
        qntRam=q;
    }
    void setQn(int qn){
        qntDd=qn;
    }
    void setpro(string p){
        processor=p;
    }
    void afficherpc();
};
void pc::afficherpc(){
    cout<< "le model est "<<getModel()<<endl;
    cout<< "la quantite de la ram est "<<getQ()<<endl;
    cout<< "la qnt disque hdd est"<<getQndd()<<endl;
    cout<< "le processeur est "<<getPro()<<endl;
}
class RepairTicket{
    pc pcRep;
    string descriptionProb;
    string dateRecep;
    public:
    pc getPc(){
        return pcRep;
    }
    string getDescrip(){
        return descriptionProb;
    }
    string getDateResp(){
        return dateRecep;

    }
    void setPcrep(pc pcR){
        pcRep=pcR;
    }
    void setDesc(string descri){
        descriptionProb=descri;
    }
    void setDate(string dateR){
        dateRecep=dateR;
    }
    void afficherrepair();
};
void RepairTicket::afficherrepair(){
    cout<< "le model est "<<getPc()<<endl;
    cout<< "la quantite de la ram est "<<getDescrip()<<endl;
    cout<< "la qnt disque hdd est"<<getDateResp()<<endl;

}
int main(){
    pc p;

}