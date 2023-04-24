#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//
class JogoAdivinhacao {
    //
    private:
      int numeroSecreto;
      int tentativas;
    //
    public:
      JogoAdivinhacao() {
          //
          srand(time(0));
          numeroSecreto = rand() % 100 + 1;
          tentativas = 0;
      }
    //
    void jogar() {
        //
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
            //
        }while (palpite != numeroSecreto);
    }
};
//
int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}