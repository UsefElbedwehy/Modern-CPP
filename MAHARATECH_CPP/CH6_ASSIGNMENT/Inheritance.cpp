//Essential OOP concepts for class relationships.
// Association: relationship without ownership. 
//Aggregation: whole-part relationship where parts exist independently. 
// Composition: strong aggregation where parts' lifetimes depend on the whole. 
#include <iostream>

class Point{

    int x;
    int y;

public:
    Point(){
    x=0;
    y=0;
    std::cout << "Point (default) constructor is called. \n";
    }
    Point(int x1,int y1){
    x=x1;
    y=y1;
    std::cout << "Point constructor is called. \n";
    }
    ~Point(){
        std::cout << "Point destructor is called. \n";
    }

    void setX(int x1){
    x=x1;
    }
    void setY(int y1){
    y=y1;
    }
    int getX(){
    return x;
    }
    int getY(){
    return y;
    }
};
class Shape{
    private:

    int RGBcolor;

    protected:
    int Red;
    int Green;
    int Blue;

    public:
    Shape(){
        RGBcolor = 0;
        std::cout << "Shape constructor. \n";
    }
    Shape(int a){
        RGBcolor = a;
        std::cout << "Shape constructor. \n";
    }
    ~Shape(){
        std::cout << "Shape destructor. \n";
    }
    setColor(int RGB){
        RGBcolor = RGB;
    }
    getColor(){
        return RGBcolor;
    }
    void showColor(){
        std::cout << RGBcolor << "\n";
    }
};
//Line inherite Shape
class Line : public Shape{
private:
    Point start_point;
    Point end_point;
public:
    Line(): start_point() , end_point() {
        std::cout << "At the line constractor \n";
    }
    Line(int x1,int y1,int x2,int y2): start_point(x1,y1) , end_point(x2,y2) {
        std::cout << "At the line(4) constractor \n";
    }
    void draw()
    {
    std::cout << "Drawing Line from (" << start_point.getX() << ", " << start_point.getY() << ") to ("
                  << end_point.getX() << ", " << end_point.getY() << ")\n";
    }
    ~Line()
    {
        std::cout << "At the line destractor \n";
    }
};

class Circle : public Shape{
private:
Point center;
int radius;
public:
Circle(): center() {
    radius = 0;
    std::cout << "At the circle constractor \n";
}
Circle(int x1,int y1, int r): center(x1,y1) {
    radius = r;
    std::cout << "At the circle(2) constractor \n";
}
void draw()
{
    std::cout << "Drawing Circle from (" << center.getX() << ", " << center.getY() << ") \n";
}
~Circle(){
    std::cout << "At the circle destractor \n";
}
};

class Rect : public Shape{
private:
    Point ul;
    Point lr;
public:
    Rect(): ul() ,lr(){
        std::cout << "At the rectangle constructor \n";
    }
    Rect(int x1,int y1,int x2,int y2): ul(x1,y1) ,lr(x2,y2){
        std::cout << "At the rectangle(4) constructor \n";
    }
    void draw()
    {
       std::cout << "Drawing Rectangle from (" << ul.getX() << ", " << ul.getY() << ") to ("
                  << lr.getX() << ", " << lr.getY() << ")\n";
    }
    ~Rect(){
        std::cout << "At the rectangle destructor \n";
    }
    


};

class Paint{
    private:
        int lNum;
        int rNum;
        int cNum;
        Line *pLine;
        Rect *pRect;
        Circle *pCircle;

    public:

    Paint(){
        lNum = 0;
        rNum = 0;
        cNum = 0;
        pLine = NULL;
        pRect = NULL;
        pCircle = NULL;
    }
    Paint(int lN,int rN,int cN,Line *pL,Rect *pR,Circle *pC){
        lNum = lN;
        rNum = rN;
        cNum = cN;
        pLine = pL;
        pRect = pR;
        pCircle = pC;
    }
    void SetLine(int NumberOfLine , Rect *pL)
    {
        rNum = NumberOfLine;
        pRect = pL;
    }
    void SetRect(int NumberOfRect , Rect *pRectangle)
    {
        rNum = NumberOfRect;
        pRect = pRectangle;
    }
    void SetCircle(int NumberOfCircle , Rect *pCir)
    {
        rNum = NumberOfCircle;
        pRect = pCir;
    }
    ~Paint(){
        
    }

};



int main(){

    Circle C1;

    C1.showColor();

    C1.setColor(9);
    C1.showColor();


    return 0;
}












