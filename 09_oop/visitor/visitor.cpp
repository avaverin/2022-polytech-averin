#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Rectangle;
struct Circle;
struct Triangle

struct IVisitable
{
    virtual void accept(Rectangle& r) = 0;
    virtual void accept(Circle& c) = 0;
    virtual void accept(Triangle& t) = 0;
    
    virtual ~IVisitable() {}
};

struct IElenent
{
    virtual void visit(IVisitable& v) = 0;
    
    virtual ~IElenent() {}
};

struct Rectangle: IElenent
{
    int x, y;
    Rectangle(int ix, intr iy) : x{ix}, y{iy} 
    {}
    void visit(IVisitable& v) final
    {
        v.accept(*this);
    }
};

struct Circle: IElenent
{
    int r;
    Circle(int ir) : r{ir}
    {}
    void visit(IVisitable& v) final
    {
        v.accept(*this);
    }
};

struct Triangle: IElenent 
{
    int x, y, z;
    Triangle(int ix, int iy, int iz) : x{ix}, y{iy}, z{iz} 
    {}
    void visit(IVisitable& v) final 
    { 
        v.accept(*this); 
    }
};


struct Printer: IVisitable
{
    void accept(Rectangle& r) final
    {
        cout << "Rectangle" << endl;
    }   
    void accept(Circle& c) final
    {
        cout << "Circle" << endl;
    }
    void accept(Triangle& t) final
    {
        cout << "Triangle" << endl;
    }
};

struct Perimeter: IVisitable 
{
  void accept(Rectangle& r) final 
  { 
    cout << r.x + r.y << endl; 
  }
  void accept(Circle& c) final 
  { 
    cout << c.r * 2 * 3.14 << endl; 
  }
  void accept(Triangle& t) final 
  { 
    cout << t.x + t.y + t.z << endl; 
  }
};

struct Square: IVisitable 
{
    void accept(Rectangle& r) final 
    { 
        cout << r.x * r.y << endl; 
    }
    void accept(Circle& c) final 
    { 
        cout << c.r * c.r * 3.14 << endl; 
    }
    void accept(Triangle& t) final 
    { 
        cout << 0.5 * t.x * t.y * sin(t.z) << endl; 
    }
};


int main()
{
    std::vector<IElenent*> elements; 
    
    elements.push_back(new Circle);
    elements.push_back(new Rectangle);
    elements.push_back(new Triangle)

    Printer p;
    for(auto& el: elements)
    {
        el->visit(p);
    }

    Perimeter p;
    for (auto& el : elements) 
    {
        el->visit(p);
    }

    Square s;
    for (auto& el : elements) 
    {
        el->visit(s);
    }
}