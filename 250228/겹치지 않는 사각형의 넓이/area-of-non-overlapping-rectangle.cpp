#include <iostream>
#include <algorithm>
using namespace std;

int overlap_area(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int x_overlap = max(0, min(x2, x4) - max(x1, x3)); 
    int y_overlap = max(0, min(y2, y4) - max(y1, y3)); 
    return x_overlap * y_overlap; 
}

int main() {
    int x1, y1, x2, y2; 
    int x3, y3, x4, y4; 
    int x5, y5, x6, y6; 

    cin >> x1 >> y1 >> x2 >> y2; 
    cin >> x3 >> y3 >> x4 >> y4; 
    cin >> x5 >> y5 >> x6 >> y6; 

    int area_A = (x2 - x1) * (y2 - y1);
    int area_B = (x4 - x3) * (y4 - y3);
    
    int overlap_AM = overlap_area(x1, y1, x2, y2, x5, y5, x6, y6);
    int overlap_BM = overlap_area(x3, y3, x4, y4, x5, y5, x6, y6);
    
    int total_area = area_A + area_B - overlap_AM - overlap_BM;
    
    cout << total_area << endl;
    
    return 0;
}
