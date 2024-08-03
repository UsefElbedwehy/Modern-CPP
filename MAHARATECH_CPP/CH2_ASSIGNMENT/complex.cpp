#include <iostream>

class Complex{
    private:
        int real;
        int img;

    public:
        Complex(){
            real=0;
            img=0;
            std::cout <<"Complex Construtor is called." << "\n";
        }
        ~Complex(){
            std::cout <<"Complex Destrutor is called." << "\n";
        }
    void SetReal(int RealVal)
    {
    real = RealVal;
    }
    void SetImg(int ImgVal)
    {
        img = ImgVal;
    }
    int PrintComplex()
    {
        if(img < 0)
        {
            std::cout << "Complex number: " << real << "-" << -img << "i" << "\n";
        }
        else{
            std::cout << "Complex number: " <<  real << "+" << img << "i" << "\n";
        }
    }
};

int main()
{
    Complex c1;
    c1.SetReal(3);
    c1.SetImg(4);

    c1.PrintComplex();

    return 0;
}
