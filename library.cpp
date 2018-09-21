#include "library.h"

#include <iostream>
#include <typeinfo>

template <class T> class MPointer{
public:
    T* element= new T;
    int id;

    static MPointer<T> New() {

        return MPointer<T>();
    }

    int getId(){
        return id;
    }

    void setId(int x){
        id =x;
    }

    T& operator*(){
        return *element;
    }

    T& operator&(){
        return *element;
    }

    T& operator=(const T& other){

        if(typeid(*element).name()== typeid(other).name()) {
            *element = other;
        }
        return *element;

    }

};







