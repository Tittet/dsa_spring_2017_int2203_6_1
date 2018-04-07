#pragma once
#include <string>
using namespace std;

class StringSet {
public:
    StringSet();
    StringSet(int _capacity);
    StringSet(const StringSet& asset);
    ~StringSet();

    bool empty() const;
    int size() const;

    int find(const string& x) const;
    void erase(const string& x);
    void insert(const string& x);

    void print() const;

    StringSet& operator=(const StringSet& asset);
    const StringSet operator+(const StringSet& asset);
private:
    string * element;
    int capacity;
    int last;
};
