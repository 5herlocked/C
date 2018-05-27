#include <iostream>
#include <vector>

using namespace std;
    void printVector(vector<int> vIn);
    void assignFunction(vector<int> vInts, int in);
    void pushBackFunction(vector<int> vInts, int in);
    void emplaceFunction(vector<int> vInts, int loc, int in);
    
    void printVector(vector<int> vIn)
    {
        vector<int>::iterator vIt; 
        
        for (vIt = vIn.begin(); vIt != vIn.end(); ++vIt)
        {
            cout << *vIt << '\t';
        }
    }
    
    void assignFunction(vector<int> vInts, int in)
    {
        cout<<"\nassigning "<<in<<" and printing the vector\n";
        vInts.assign(1, in);
        printVector(vInts);
    }
  
    void pushBackFunction(vector<int> vInts, int in)
    {
        cout<<"\npush back "<<in<<" and printing the vector\n";
        vInts.push_back(in);
        printVector(vInts);
    }
  
    void emplaceFunction(vector<int> vInts,  int loc, int in)
    {
        vector<int>::iterator it;
        it = vInts.begin() + loc;
        cout<<"\nemplacing "<<in<<" and printing the vector\n";
        vInts.emplace(it, in);
        printVector(vInts);
    }