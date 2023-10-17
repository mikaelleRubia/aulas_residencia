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
        Estado* estado;
    public:
        Cidade(string _nome, Estado* _estado){
           nome = _nome;
           estado = _estado;
           
        }
        string getNome(){
            return nome;
        }
        void setNome(string _nome){
            nome = _nome;
        } 

        Estado* getEstado() {
        return estado;
        }

        void setEstado(Estado* _estado) {
        estado = _estado;
        }

        void lista_cidade(){
            cout << "Cidade: " <<  getNome() << endl;
            cout << estado->getNome() << endl;
            cout << estado->getUF() << endl;

        }   
};
int main(){
    Estado estado("Bahia", "BA");
    Cidade cidade("Salvador", &estado);

    cidade.lista_cidade();


    return 0;
}