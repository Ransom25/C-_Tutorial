#include <iostream>
using namespace std;
// Dynamic Memory management library
#include <memory>

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area() { return length * breadth; }
};

int main()
{
// --\/ Smart Pointer
// UNIQUE:
//  it store one pointer only. we can assigna different object 
//  by removing the current object from the pointer
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));

// SHARED:
//  more than one pointer can point to this one object at a time 
//  and it’ll maintain a Reference Counter using the use_count() method. 
    shared_ptr<Rectangle> P_shared(new Rectangle(10, 5));

    cout << P1->area() << endl; // This'll print 50

    // unique_ptr<Rectangle> P2(P1);
    unique_ptr<Rectangle> P2;
    P2 = move(P1);

    // This'll print 50
    cout << P2->area() << endl;

    // cout<<P1->area()<<endl;
    return 0;
}