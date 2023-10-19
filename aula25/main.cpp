#include <iostream>

using namespace std;

class Usuario{
    private:
        string cpf; //Identificador único do usuário.
        string nome; //Nome do usuário.
        string endereco; //Endereço do usuário.
        string telefone;//Número de telefone do usuário.

    public:
        Usuario(string cpf, string nome, string endereco, string telefone){
            this->cpf = cpf;
            this->nome = nome;
            this->endereco = endereco;
            this->telefone = telefone;

        }
        Usuario(){
            this->cpf = "default";
            this->nome = "default";
            this->endereco = "default";
            this->telefone = "default";

        }

        string getCpf(){
            return cpf;
        }
        void setCpf(string cpf){
            this->cpf = cpf;
        }

        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }

        string getEndereco(){
            return endereco;
        }
        void setEndereco(string endereco){
            this->endereco = endereco;
        }

        string getTelefone(){
            return telefone;
        }
        void setTelefone(string telefone){
            this->telefone = telefone;
        }

};

class Cliente: Usuario {
    private:
       string habilitacao;
       string historicoAlugueis;
};  