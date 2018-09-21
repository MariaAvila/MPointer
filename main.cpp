//
// Created by maria on 15/09/18.
//

#include "library.cpp"
#include "json.hpp"
#include "Client.h"
#include <typeinfo>

int main(int argc, char *argv[]) {
    Client* cliente = new Client();

    MPointer<int> myPtr = MPointer<int>::New();
    *myPtr = 5;
    myPtr.setId(9);
    int valor = &myPtr;

    MPointer<int> myPtr2 = MPointer<int>::New();

    myPtr2=8;
    myPtr2=myPtr;





    //std::cout<< myPtr2.getId() << std::endl;
}
