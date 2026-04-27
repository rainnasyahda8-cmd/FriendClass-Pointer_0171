#include <iostream>
using namespace std;
class mahasiswa
{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs{1}; //Object mhs
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer reference refMhs
    refMhs.nim = 2; //member Access Operator
    mhs.shownim();

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3; //arrow Operator
    pMhs->shownim();
    return 0;