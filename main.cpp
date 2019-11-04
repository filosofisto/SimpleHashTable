#include <iostream>
#include "simplehashtable.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Simple HasTable" << endl;

    SimpleHashTable* hashTable = new SimpleHashTable();

    hashTable->insert("Eduardo");
    hashTable->insert("Marcelo");
    hashTable->insert("Hanae");
    hashTable->insert("Djovana");
    hashTable->insert("Hanna");
    hashTable->insert("Hiago");

    string str = hashTable->find(9);
    cout << "Encontrou: " << str << " com o hash 9" << endl;

    cout << "Existe 'hanae'? " << (hashTable->exist("hanae") ? "Sim" : "Nao") << endl;

    hashTable->remove("hanae");
    cout << "Existe 'hanae'? " << (hashTable->exist("hanae") ? "Sim" : "Nao") << endl;

    delete hashTable;

    return EXIT_SUCCESS;
}
