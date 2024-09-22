#include <bits//stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

int ccw(Point p1, Point p2, Point p3) {
    int ccw = (p2.x - p1.x) * (p3.y - p2.y) - (p2.y - p1.y) * (p3.x - p2.x);
    if (ccw > 0) return 1;
    else if (ccw < 0) return -1;
    else return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Point p1, p2, p3;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
    cout << ccw(p1, p2, p3);
}
