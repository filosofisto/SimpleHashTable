#ifndef SIMPLEHASHTABLE_H
#define SIMPLEHASHTABLE_H

using namespace std;

#include <string>

constexpr int MAX_SIZE = 100;

class SimpleHashTable
{
public:
    SimpleHashTable();
    ~SimpleHashTable();

    string find(int k) const;

    void insert(string data);

    void remove(string data);

    bool exist(string data);
private:
    int hash(string text) const;

    string* array[MAX_SIZE];
};



#endif // SIMPLEHASHTABLE_H
