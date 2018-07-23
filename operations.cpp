//
//  operations.cpp
//  calculator
//
//  Created by Saif Jame on 7/23/18.
//  Copyright © 2018 Saif Jame. All rights reserved.
//

#include "operations.hpp"

double operations:: operate (double a, char sign, double b){
    switch (sign){
        case '*': return a*b;
        case '+': return a+b;
        case '/': return a/b;
        case '-': return a-b;
        default: return 0;
    }
}
