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

class student{
public:
    stu(){}
    void get(string a,int b){
        name = a;
        num = b;
    }
    void show()
    {
        cout << name <<" "<<num;
    }
private:
    string name;
    int num;
    
};

class judge{
public:
private:
};
int main() {
    //int a=0,b=0;
    student stu[4];
    ifstream stuin("/Users/s20181106275/Desktop/project0619/190619in01.txt");
    ifstream judgein("/Users/s20181106275/Desktop/project0619/190619in01.txt");
    ofstream ljlout("/Users/s20181106275/Desktop/project0619/190619out.txt");
    if(stuin.is_open())
    {
        cout<<"file OK"<<endl;
        for(int i=0; i<4; i++)
        {
            string a;
            int b;
            stuin >> a >> b;
            stu[i]=
            stu01.get(a,b);
        }
        
        stuin.close();
    }
    
    
    if (ljlout.is_open())
    {
        cout<<"file OK"<<endl;
        //ljlout << <<endl;
        stu01.show();
        ljlout.close();
    }
    
    return 0;
}
