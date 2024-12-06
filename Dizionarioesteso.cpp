
    // Metodo per cancellare una coppia chiave-valore
    void cancella(const std::string key) {
        int index = hashFunction(key);

        if (table[index].isOccupied && table[index].key == key) {
            table[index].isOccupied = false;
            std::cout << "Coppia chiave-valore rimossa." << std::endl;
        } else {
            std::cout << "Chiave non trovata" << std::endl;
        }
    }

    // Metodo per verificare se una chiave è presente nel dizionario
    bool appartiene(const std::string key) const {
        int index = hashFunction(key);

        return table[index].isOccupied && table[index].key == key;
    }
