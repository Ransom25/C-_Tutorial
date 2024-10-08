#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    // declaring an uninitialized bitset object
    bitset<8> uninitializedBitset;

    // initialization with decimal number
    bitset<8> decimalBitset(15);

    // initialization with binary string
    bitset<8> stringBitset(string("1111"));

    cout << "Uninitialized bitset: " << uninitializedBitset
         << endl;
    cout << "Initialized with decimal: " << decimalBitset
         << endl;
    cout << "Initialized with string: " << stringBitset
         << endl;
    
    /*
    OPERATIONS
    */
    bitset<4> bitset1("1001"), bitset2("1010");
    bitset<4> result;

    cout << "Bitset1: " << bitset1
         << "\nBitset2: " << bitset2 << endl;

    cout << "Accessing bit value at index 1 of bitset1: "
         << bitset1[1] << endl;

    // bitwise AND
    cout << "Bitwise AND using &: "
         << (result = bitset1 & bitset2) << endl;
    cout << "Bitwise AND using &=: " << (bitset1 &= bitset2)
         << endl;

    // bitwise OR
    bitset1 = 9; // 9 = 1001
    cout << "Bitwise OR using |: "
         << (result = bitset1 | bitset2) << endl;
    cout << "Bitwise OR using |=: " << (bitset1 |= bitset2)
         << endl;

    // bitwise NOT
    cout << "Bitwise NOT: " << (result = ~bitset1) << endl;

    // bitwise XOR
    bitset1 = 9;
    cout << "Bitwise XOR: " << (bitset1 ^= bitset2) << endl;

    bitset1 = 9;
    cout << "Binary leftshift on bitwise1: "
         << (bitset1 <<= 1) << endl;
    bitset1 = 9;
    cout << "Binary rightshift on bitwise1: "
         << (bitset1 >>= 1) << endl;

    return 0;
}