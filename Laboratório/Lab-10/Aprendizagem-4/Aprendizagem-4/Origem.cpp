#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 200; i++)
    {
        int vet[5];
        vet[i] = { 60 };
        cout << vet[i];

    }
    /*
      A mensagem de erro que aparece � de que o vetor so pode armazenar valores nas casas de 0 a 4
      mas essa mensagem n�o fecha o programa.
      A posi��o em que ele para de atribuir os valores depende quantas vezes o la�o � repetido.
      Podemos concluir que n�o � recomendado atribuir valores a posi��es que n�o estejam dentro do limite do vetor
      por mais que o programa mostre as posi��es que v�o al�m da capacidade dele.
    */
}