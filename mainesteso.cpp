#include <string>
#include "Dizionarioesteso.cpp"

int main() {

    Dizionario<std::string> dict;

    // Inserimento delle coppie chiave-valore
    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");

    // Caso di collisione
    dict.inserisci("arc", "automobile"); 

    // Recupero dei valori associati alle chiavi
    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n";

    // Stampa del dizionario
    dict.stampa();

    // Verifica della presenza di chiavi
    std::cout << "Chiave 'car' appartiene: " << (dict.appartiene("car") ? "sì" : "no") << std::endl;
    std::cout << "Chiave 'book' appartiene: " << (dict.appartiene("book") ? "sì" : "no") << std::endl;
    std::cout << "Chiave 'pen' appartiene: " << (dict.appartiene("pen") ? "sì" : "no") << std::endl;

    // Cancellazione di una chiave
    dict.cancella("car");

  
    std::cout << "Dopo la cancellazione di 'car':" << std::endl;
    dict.stampa();
    std::cout << "Chiave 'car' appartiene: " << (dict.appartiene("car") ? "sì" : "no") << std::endl;

    return 0;
}
