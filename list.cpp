#include <iostream>
using namespace std;

class list {
private:
    int* p;
    int size;
    int length;
    int current;
public:
    list(int);
    void add(int);
    void showList();
    void next();
    void back();
    void remove(int);
    


};

int main()
{
    cout << "Hello world" << endl;
    return 0;
}

list::list(int l)
{
    if (l > 0) {
        size = 0;
        length = l;
        current = 0;
        p = new int[l];
    }
    else {
        
    }
}

void list::add(int)
{
}

void list::showList()
{
}

void list::next()
{
}

void list::back()
{
}

void list::remove(int)
{
}
