#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    void print() {
        cout << "Width: " << width
            << ", Height: " << height
            << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle r(5, 3);
    r.print();  
    return 0;
}
