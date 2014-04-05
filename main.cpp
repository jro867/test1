/* 
 * File:   main.cpp
 * Author: nuxer
 *
 * Created on March 22, 2014, 6:32 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/*
 * 
 */
string printMsg(){
    stringstream printer;
    printer << "We are trying to do better today!!!" << endl;
    printer << "so yay for us" << endl;
    
    return printer.str();
}

int main(int argc, char* argv[]) {
    
    if(argc > 2){
        ofstream output(argv[2]);
        output << printMsg();
//        cout << ">1 parameter" << endl;
    }else{
        cout << "just a parameter" << endl;
    }

    return 0;
}

