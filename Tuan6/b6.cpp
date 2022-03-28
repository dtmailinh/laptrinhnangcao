#include <iostream>
#include <iomanip>
using namespace std;
struct complexNumber{
    int real;//thuc
    int imag;//ao
    complexNumber();
    complexNumber(int a, int b){
        real=a;
        imag=b;
    }
    complexNumber add (complexNumber other){
        return complexNumber(real+other.real,imag+other.imag);}
    complexNumber sub (complexNumber other){
        return complexNumber(real-other.real,imag-other.imag);}
    complexNumber mul (complexNumber other){
        return complexNumber(real*other.real-imag*other.imag,real*other.imag+imag*other.real);}
    void print(){
        if (imag==0&&real==0){
            cout<<0<<endl;
        } else if (imag==0&&real!=0) cout<<real<<endl;
            else
                if(imag!=0&&real==0)
                    if (imag<0) cout<<imag<<"i"<<endl; else cout<<imag<<"i"<<endl;
                        else if (real!=0&&imag!=0) {
                            if(imag<0) cout<<real<<imag<<"i"<<endl; else cout<<real<<"+"<<imag<<"i"<<endl;
                }
            
    }
};
int main(){
    complexNumber temp1(1,2);
    complexNumber temp2(3,4);
    complexNumber res=temp1.sub(temp2);
    res.print();
    return 0;
}
