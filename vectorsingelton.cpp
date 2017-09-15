#include "vectorsingelton.h"

VectorSingelton* VectorSingelton::instance = NULL;

VectorSingelton::VectorSingelton(){
}

VectorSingelton::~VectorSingelton(){
    delete VectorSingelton::instance;
}

VectorSingelton* VectorSingelton::getInstance(){
    if(VectorSingelton::instance == NULL)
        VectorSingelton::instance = new VectorSingelton();

    return VectorSingelton::instance;
}
