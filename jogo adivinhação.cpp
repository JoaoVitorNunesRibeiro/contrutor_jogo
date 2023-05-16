#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//armazenando valores sem mostrar para o usuário
class JogoAdivinhacao {
    //armazenando valores sem mostrar para o usuário
    private:
      int numeroSecreto;
      int tentativas;
    //escolhendo um número aleatório entre 100 opções e deixando privado
    public:
      JogoAdivinhacao() {
          //% 100 + 1 adiciona mais um numero nas 100 opções e esta sendo usado pois srand só escolhe um numero de 0 a 99, ou seja, agora o programa pode escolher um número de 0 e 100 opções
          srand(time(0));
          numeroSecreto = rand() % 100 + 1;
          tentativas = 0;
      }
    //void define qual o metodo/ação que será usado
    void jogar() {
        //programa onde vai dando dicas para o usario saber se esta se aproximando da resposta e consequentemente acertando
        int palpite;
        do{
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numeroSecreto) {
                cout << "O número secreto é menor!" << endl;
            }
            else if (palpite < numeroSecreto) {
                cout << "O número secreto é maior!" << endl;
            }
            else {
                cout << "Parabéns, você acertou o número em " << tentativas << " tentativas!" << endl;
            }
            //condição pro palpite sempre repetir enquanto o numero nao ser descoberto
        }while (palpite != numeroSecreto);
    }
};
//jogo.jogar é o metodo que esta sendo usado que foi iniciado no void linha 20, jogoAdivinhacao esta dentro do metodo que esta sempre sendo rodado, e jogoAdivinhacao faz parte dele para funcionar.
int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}
