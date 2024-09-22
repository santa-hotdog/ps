#include <bits//stdc++.h>
using namespace std;

int n;

struct Point {
    long long x;
    long long y;
};

vector<Point> points;

double get_area() {
    double area = 0;
    for (int i = 0; i < n; i++) {
        Point current = points[i];
        Point next = points[(i + 1) % n];
        area += (current.x * next.y - next.x * current.y);
    }
    return abs(area) / 2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    points.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    cout << fixed << setprecision(1) << get_area();
}
