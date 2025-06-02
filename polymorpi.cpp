#include <iostream>
using namespace std;

class seseorang
{
public :
    // Virtual void pesan = 0;
    virtual void pesan()
    {
        cout << "Pesan dari seseorang" << endl;
    }
};

class joko : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari Joko" << endl;
    }
};

class lia : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari Lia" << endl;
    }
};

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
   

    return 0;
}


