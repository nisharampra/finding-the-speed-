//
//  main.cpp
//  finding the speed
//
//  Created by Nisha Ramprasath on 23/10/23.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int u,v,a;
    float speed;
    cout<<"enter 3 no";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"speed is "<<speed;
    return 0;
}
