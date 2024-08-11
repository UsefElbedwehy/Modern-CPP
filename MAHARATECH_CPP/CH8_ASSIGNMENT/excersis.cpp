#include <iostream>

class GeoShape{

    private:


    protected:
        float Dim1;
        float Dim2;

    public:
        GeoShape(): Dim1(0),Dim2(0){
            std::cout << "GeoShape constructor. \n";
        }
        GeoShape(float a,float b): Dim1(a),Dim2(b){
            std::cout << "GeoShape constructor. \n";
        }
        ~GeoShape(){
            std::cout << "GeoShape destructor. \n";
        }
        setDim1(float a)
        {
            Dim1= a;
        }
        setDim2(float a)
        {
            Dim2 = a;
        }
        getDim1()
        {
            return Dim1;
        }
        getDim2()
        {
            return Dim2;
        }
        virtual float calculateArea(){
            return 0;
        }

};



class Circle : private GeoShape{

    private:
       // float radius;
    
    public:
        Circle() : GeoShape(){
            std::cout << "Circle constructor. \n";
        }
        Circle(float r) : GeoShape(r,r){
            std::cout << "Circle constructor. \n";
        }
        ~Circle(){
            std::cout << "Circle destructor. \n";
        }
        setRadius(float r){
            //radius = r;
            Dim1 = r;
            Dim2 = r;
        }
        getRadius(){
            return Dim1;
        }
        float calculateArea(){
            return ((22.0f/7.0f)*Dim1*Dim1);
        }


};

class Triangle : public GeoShape{

    private:

    public:
        Triangle() : GeoShape(){
            std::cout << "Triangle constructor. \n";
        }
        Triangle(float h , float b) : GeoShape(h,b){
            std::cout << "Triangle constructor. \n";
            
        }
        ~Triangle(){
            std::cout << "Triangle destructor. \n";
        }
        setHeight(float h){
            Dim1 = h;
        }
        setBase(float b){
            Dim2 = b;
        }
        getHeight(){
            return Dim1;
        }
        getBase(){
            return Dim2;
        }
        float calculateArea(){
            return ((0.5f)*Dim1*Dim2);
        }

};

class Rectangle : public GeoShape{
    private:

    public:
        Rectangle() : GeoShape(){
            std::cout << "Rectangle constructor. \n";
        }
        Rectangle(float h , float w) : GeoShape(h,w){
            std::cout << "Rectangle constructor. \n";
            
        }
        ~Rectangle(){
            std::cout << "Rectangle destructor. \n";
        }
        setHeight(float h){
            Dim1 = h;
        }
        setWidth(float w){
            Dim2 = w;
        }
        getHeight(){
            return Dim1;
        }
        getWidth(){
            return Dim2;
        }
        float calculateArea(){
            return (Dim1*Dim2);
        }
};

class Square :private Rectangle{
    private:

    public:
        Square() : Rectangle(){
            std::cout << "Square constructor. \n";
        }
        Square(float L) : Rectangle(L,L){
            std::cout << "Square constructor. \n";
            
        }
        ~Square(){
            std::cout << "Square destructor. \n";
        }
        setLength(float L){
           Dim1 = L;
           Dim2 = L;
        }
        getLength(){
            return Dim1;
        }

        float calculateArea(){
            return Rectangle::calculateArea();
        }
};

float calculate_area(Triangle *T,Circle *C,Rectangle *R){
    return (T->calculateArea() + C->calculateArea() + R->calculateArea()) ;
}

int main()
{
    Circle C1(5);
    Triangle T1(3,6);
    Rectangle R1(5,4);
    Square S1(5);

    std::cout << "Area of circle : " << C1.calculateArea() << "\n"; 
    std::cout << "Area of triangle : " << T1.calculateArea() << "\n"; 
    std::cout << "Area of rectangle : " << R1.calculateArea() << "\n"; 
    std::cout << "Area of square : " << S1.calculateArea() << "\n"; 

    float D = (C1.calculateArea()+T1.calculateArea()+R1.calculateArea());

    std::cout << D << "\n"; 

    std::cout << calculate_area(&T1,&C1,&R1) << "\n"; 


    return 0;
}