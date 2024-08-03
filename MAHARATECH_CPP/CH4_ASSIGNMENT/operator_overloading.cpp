#include <iostream>

class Complex{
    private:
        int real;
        int img;
        friend Complex operator+(float num,Complex& cls);
        friend Complex operator-(float num,Complex& cls);
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
    void PrintComplex()
    {
        if(img < 0)
        {
            std::cout << "Complex number: " << real << "-" << -img << "i" << "\n";
        }
        else{
            std::cout << "Complex number: " <<  real << "+" << img << "i" << "\n";
        }
    }
    //Operator overloading 
    // Operator overloading
    Complex& operator=(const Complex& cls) {
        if (this != &cls) {
            this->real = cls.real;
            this->img = cls.img;
        }
        return *this;
    }

    Complex operator+(Complex& cls)
    {
        Complex bridge;
        bridge.real = real + cls.real;
        bridge.img  = img  + cls.img ;

        return bridge;
    }

    Complex operator-(Complex& cls)
    {
        Complex bridge;

        bridge.real = real - cls.real;
        bridge.img  = img  - cls.img ;

        return bridge;
    }

    Complex operator+(float num)
    {
        Complex bridge;
        bridge.real = real + num;
        bridge.img = img;

        return bridge;
    }
    Complex operator-(float num)
    {
        Complex bridge;
        
        bridge.real = real - num;
        bridge.img = img;

        return bridge;
    }
    
    void operator==(const Complex& cls)
    {
        if((img == cls.img) && (real == cls.real))
        {
            std::cout << "True, They are equal" << "\n";
        }
        else{
            std::cout << "Flase, They are not equal" << "\n";
        }

         
    }
    
    operator++()
    {
        
        this->real = this->real + 1;
        this->img = this->img + 1;
        
    }
    operator--()
    {
        
        this->real = this->real - 1;
        this->img = this->img  - 1;
        
    }
    operator++(int n)
    {
        
        this->real = this->real + 1;
        this->img = this->img  + 1;
        
    }
    operator--(int n)
    {
        
        this->real = this->real - 1;
        this->img = this->img  - 1;
        
    }
    operator+=(const Complex& cls)
    {
        this->real = this->real + cls.real;
        this->img = this->img + cls.img;
    }
    operator-=(const Complex& cls)
    {
        this->real = this->real - cls.real;
        this->img = this->img - cls.img;
    }

};

Complex operator+(float num,Complex& cls)
{
    Complex bridge;

    bridge.real = cls.real + num;
    bridge.img = cls.img;

    return bridge;
}

Complex operator-(float num,Complex& cls)
{
    Complex bridge;

    bridge.real =  num - cls.real;
    bridge.img =    cls.img;

    return bridge;
}

int main()
{
    Complex c1;
    Complex c2;
    Complex c3;
    c1.SetReal(10);
    c1.SetImg(11);
    c2.SetReal(5);
    c2.SetImg(4);

    // c1.PrintComplex();
    // c2.PrintComplex();
    // c3=c1-c2;
    // c3.PrintComplex();
    // c3=c3-2;
    // c3.PrintComplex();
    // c3=5-c3;
    // c3.PrintComplex();

    
    // c2 == c1;
    // c2.PrintComplex();
    // //++c2;
    // c2++;
    // c2.PrintComplex();
    // c2 == c1;
    // c2.PrintComplex();
    // //--c2;
    // c2--;
    // c2.PrintComplex();
    // c2 == c1;
    
    c2 += c1;
    c2.PrintComplex();
    c2 -=c1;
    c2.PrintComplex();

    return 0;
}
