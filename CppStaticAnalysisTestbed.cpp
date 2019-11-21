#include <iostream>
#include <vector>

class Range
{
public:
    Range(int a, int b):
        m_a(a),
        m_b(b)
    {
    }

    int m_a;
    int m_b;
};

class Rectangle
{
public:
    Rectangle(const Range& vertical, const Range& horizontal):
        m_vertical(vertical),
        m_horizontal(horizontal)
    {
    }

    const Range& m_vertical;
    const Range& m_horizontal;
};

class Engine
{
public:
    Engine()
    {        
    }

    void populate()
    {
        for (int i = 0; i < 5; i++)
        {
            Range foo(1, 2);
            Rectangle rect(foo, foo);
            m_rects.push_back(rect);
        }

        printout();
    }

    void printout()
    {
        for (int i = 0; i < 7; i++)
        {
            const auto rect = m_rects[i];
            std::cout << "hor.a=" << rect.m_horizontal.m_a << "\n";
        }
    }

private:
    std::vector<Rectangle> m_rects;
};

int main()
{
    Engine engine;

    engine.populate();
    engine.printout();

    char buf[200];

    for (int i = 0; i <= 200; i++)
    {
        buf[i] = 42;
    }

    return 0;
}
