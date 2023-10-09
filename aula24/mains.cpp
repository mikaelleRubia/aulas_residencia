#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Estado{
    private:
        string nome;
        string UF;
    public:
        Estado(){
            nome = "Default";
            UF = "Default";
        };
        Estado(string _nome, string _uf) {
            nome = _nome;
            UF = _uf;
        } 
        string getNome() {
            return nome; 
        }
        void setNome(string _nome) {
            nome = _nome; 
        }
        string getUF() {
            return UF; 
        }  
        void setUF(string _uf) { 
            UF = _uf; 
        }

};

class Cidade{
    private:
        string nome;
        vector <Estado*> estados;
    public:
        Cidade(string _nome){
            nome = _nome;
        }
        string getNome(){
            return nome;
        }
        void setNome(string _nome){
            nome = _nome;
        } 

        void add_cidade(Estado *estado){
            estados.push_back(estado);
        }
        void lista_cidade(){
            cout << "Cidade" << endl;
            for(Estado* e : estados){
                cout << e->getNome() << endl;
                cout << e->getUF() << endl;
            }
        }   
};
int main(){


    return 0;
}