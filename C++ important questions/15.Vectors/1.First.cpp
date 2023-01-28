// The vectors are the dynamic arrays,their size can be vary and change according to the input or inserting or deleting of the elements

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    v.push_back(2);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    v.push_back(3);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    v.push_back(4);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    v.push_back(5);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    v.resize(10);
    cout << "size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
}