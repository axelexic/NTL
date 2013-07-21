//
//  main.cpp
//  BigNum
//
//  Created by Yogesh Swami on 7/21/13.
//

#include <iostream>
#include <NTL/ZZ.h>

using namespace NTL;
using namespace std;

int main(int argc, const char * argv[])
{
    ZZ a, b, c;

    cin >> a;
    cin >> b;
    c = (a+1)*(b+1);
    cout << c << "\n";
    
    return 0;
}

