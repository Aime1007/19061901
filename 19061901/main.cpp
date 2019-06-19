//
//  main.cpp
//  19061901
//
//  Created by s20181106275 on 2019/6/19.
//  Copyright © 2019 s20181106275. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // insert code here...
    int a,b;
    ofstream ljlout("/Users/s20181106275/Desktop/project0619/190619out.txt ");
    ifstream ljlin("/Users/s20181106275/Desktop/project0619/190619in.txt ");
    if(ljlin.is_open())
    {
        cout<<"file OK"<<endl;
        ljlin >> a >> b;
        cout << a <<"   "<< b <<endl;
        ljlin.close();
    }
    
    if (ljlout.is_open())
    {
        ljlout <<"c="<< a+b <<endl;
        cout <<"c="<< a+b <<endl;
        ljlout.close();
    }
    
    return 0;
}
