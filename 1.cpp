//Created by : Yash Mahesh Khalkar
//Write C++ program to draw a concave polygon and fill it with desired color using scan fill
//algorithm. Apply the concept of inheritance.


#include <graphics.h>

class Polygon {
public:
    virtual void draw() const = 0;
};

class ConcavePolygon : public Polygon {
public:
    void draw() const override {
        // Draw concave polygon
        line(100, 300, 300, 400);
        line(300, 400, 300, 100);
        line(300, 100, 200, 300);
        line(200, 300, 100, 300);
    }

    void fill(int x, int y, int fillColor) const {
        floodfill(x, y, fillColor);
    }
};

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Create ConcavePolygon object
    ConcavePolygon concavePolygon;

    // Draw concave polygon
    concavePolygon.draw();

    // Fill the polygon with a desired color
    concavePolygon.fill(250, 250, WHITE);  // Adjust the coordinates and color as needed

    delay(2000);
    closegraph();
    return 0;
}
