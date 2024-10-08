#include <bits/stdc++.h>
using namespace std;

class instrument
{
public:
    virtual void playSound()
    {
        cout << "play sound In base class" << endl;
    }

    virtual void display()
    {
        cout << "A virtual method to display the instrument type. This can be overridden in derived classes." << endl;
    }

    virtual ~instrument() {

    };
};

class Piano : public instrument
{
public:
    void playSound()
    {
        cout << "Playing a melodious piano tune." << endl;
    }

    void display()
    {
        cout << "This is a Piano" << endl;
    }
};

class Violin : public instrument
{
public:
    void playSound()
    {
        cout << "Playing a classical violin tune." << endl;
    }

    void display()
    {
        cout << "This is a Violin" << endl;
    }
};

int main()
{
    instrument *inst[2];

    inst[0] = new Piano();
    inst[1] = new Violin();

    for (int i = 0; i < 2; ++i)
    {
        inst[i]->playSound();
        inst[i]->display();
    }

    // Proper memory management
    for (int i = 0; i < 2; ++i)
    {
        delete inst[i];
    }
    return 0;
}