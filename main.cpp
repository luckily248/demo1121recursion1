//
//  main.cpp
//  demo1121recursion1
//
//  Created by lucky on 11/21/17.
//  Copyright © 2017 luck. All rights reserved.
//

#include <iostream>
using namespace std;
int getValue(int a,int b);

int main(int argc, const char * argv[]) {
    int lvl=1;
    cout<<"pascal triangle up to level:\n";
    cin>>lvl;
    int pt[lvl][lvl+1];
    for (int i=0; i<lvl; i++) {
        for (int j=0; j<i+2; j++) {
            pt[i][j]=getValue(i, j);
            cout<<" "<<pt[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}
int getValue(int a,int b){
    int r=1;
    if(a==0||b==0||b==a+1){
        return 1;
    }else{
        r=getValue(a-1, b-1)+getValue(a-1, b);
    }
    return r;
}
