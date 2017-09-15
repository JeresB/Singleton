#ifndef VECTORSINGELTON_H
#define VECTORSINGELTON_H

#include "vector"
#include "string"

using namespace std;

class VectorSingelton : public vector<string>{

private:
    static VectorSingelton* instance;
    VectorSingelton();

public:
    ~VectorSingelton();
    static VectorSingelton* getInstance();
};

#endif // VECTORSINGELTON_H
