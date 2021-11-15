#include <iostream>
#include <vector>

using namespace std;

std::vector<double> w { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities
void ComputeProb(vector<double> w){
    double W=0;
    for(auto i:w){
        W += i;
    }
    
    for(auto i:w){
        cout << "P" << 1 << "=" << i/W << endl;
    }
    
}






int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    ComputeProb(w);
    
    
    
    
    
    
    return 0;
}
