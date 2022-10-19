/*
*   Scrivere un programma in C++ che permetta di simulare una sequenza di N lanci di una coppia di
*   dadi, dove N è un numero scelto dall’utente oppure una costante scelta a tempo di compilazione.
*   Il programma dovrà stampare le sequenze dei due numeri (output primo dado e output secondo
*   dado) in due colonne separate.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));

    // se vengono usati due dadi
    int fd1; // numero facce Dado 1
    int fd2; // numero facce Dado 2
    int N; // numero di lanci

    cout<<"Inserisci il numero di facce del primo dado: "<<endl;
    cin>>fd1;
    cout<<"Numero inserito correttamente! Il primo dado ha "<<fd1<<" facce."<<endl;

    cout<<"Inserisci il numero di facce del secondo dado: "<<endl;
    cin>>fd2;
    cout<<"Numero inserito correttamente! Il secondo dado ha "<<fd2<<" facce."<<endl;

    cout<<"Bene, adesso inserisci il numero di lanci che vuoi effettuare: "<<endl;
    cin>>N;
    cout<<"Verranno effettuati "<<N<<" lanci:"<<endl;

    for(int i=1; i<=N; i++){
        int d1= rand()%fd1+1; // dado a 'fd1' facce
        int d2= rand()%fd2+1; // dado a 'fd2' facce
        cout<<d1<<" "<<d2<<endl;
    }

    if(N==1){
        cout<<N<<" lancio avvenuto con successo! Spero sia stato un lancio fortunato! ¦¬)"<<endl;
    }
    else{
        cout<<N<<" lanci avvenuti con successo! Spero siano stati "<<N<<" lanci fortunati! ¦¬)"<<endl;
    }   
    return 0;
}
