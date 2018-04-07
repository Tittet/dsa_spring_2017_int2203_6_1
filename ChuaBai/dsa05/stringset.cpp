#include "stringset.h"

StringSet::StringSet()
    : capacity(0),
      last(-1),
      element(nullptr)
{
}

StringSet::StringSet(int _capacity)
    : capacity(_capacity),
      last(-1),
      element(nullptr)
{
    element = new string[capacity];
}

StringSet::StringSet(const StringSet& asset)
    : capacity(asset.capacity),
      last(asset.last),
      element(nullptr)
{
    element = new string[capacity];
    for (int i = 0; i <= last; i++)
    {
        element[i] = asset.element[i];
    }
}

bool StringSet::empty() const
{
    return last == -1;
}

int StringSet::size() const
{
    return (last + 1);
}

int StringSet::find(const string& x) const
{
     for (int i = 0; i <= last; i++)
    {
        if (x.compare(element[i]) == 0) return i;
    }
    return -1;
}

void StringSet::erase(const string& x)
{
    for (int i = 0; i <= last; i++){
        if (x.compare(element[i]) == 0){
            for(int j = i; j < last; j++){
                element[j] = element[j+1];
            }
            element[last] = "";
            last--;
        }
    }
}

void StringSet::insert(const string& x)
{
    if (element == nullptr){
        string * st = new string[1];
        st[0] = x;
        element = st;
        last = 0;
        capacity = 1;
        return;
    }
    if(last + 1 == capacity){
        capacity *= 2;
        string * st = new string[capacity];
        int i = 0;

        while (element[i].compare(x) == -1 && i <= last){
            st[i] = element[i];
            i++;
        }
        st[i] = x;
        for(i = i + 1; i <= last+1; i++){
            st[i] = element[i-1];
        }
        delete[] element;
        element = st;
        last++;
    }else{
        int position = 0;
        while(element[position].compare(x) == -1 && position <= last){
            position++;
        }
        for(int j = last + 1; j > position; j--){
            element[j] = element[j-1];
        }
        element[position] = x;
        last++;
    }
}

StringSet& StringSet::operator=(const StringSet& asset)
{
    capacity = asset.capacity;
    last = asset.last;
    element = new string[capacity];
    for (int i = 0; i <= last; i++)
    {
        element[i] = asset.element[i];
    }
    return *this;
}

const StringSet StringSet::operator+(const StringSet& asset)
{
    StringSet a(capacity + asset.capacity);
    a.element = new string[a.capacity];
    //
    return a;
}

StringSet::~StringSet()
{
    delete [] element;
}

void StringSet::print() const
{
    for(int i = 0; i <= last; i++){
        cout << element[i] << endl;
    }
}



