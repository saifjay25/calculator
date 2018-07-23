//
//  main.cpp
//  calculator
//
//  Created by Saif Jame on 7/23/18.
//  Copyright © 2018 Saif Jame. All rights reserved.
//

#include <iostream>
#include "operations.hpp"
using namespace std;
int main() {
    double a=0;
    double b=0;
    double answer=0;
    char sign= '+';
    cout <<"Calculator App" <<endl;
    cout <<"Enter the operation"<<endl;
    operations object;  // refers to the operations class in order to do the math problem given
    while (true){
        cin >> a;
        if (!cin){
            cout<< "invalid input"<< endl;
            break;
        }
        cin >>sign;
        if(sign!='-' && sign!='+' && sign!='*' && sign!='/'){
            cout<< "invalid operation"<<endl;
            continue;
        }
        cin >>b;
        if (!cin){
            cout<< "invalid input"<< endl;
            break;
        }
        if(sign=='/' && b==0){
            cout<< "undefined"<<endl;
            continue;
        }
        answer =object.operate(a,sign,b);
        cout <<"The answer is " << answer<< endl;
    }
    return 0;
}
