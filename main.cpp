#include <iostream>
#include<cmath>
using namespace std;

class Circle {
int x,y;
int radius;
public:

    void input() {
    cin>>x>>y>>radius;
    }

    bool check(Circle other) {
    double d=sqrt(pow(x-other.x,2)+pow(y-other.y,2));

 if(d==abs(radius-other.radius)){
    return true;
}
    else if (d<radius+other.radius && d>abs(radius-other.radius)){
        return true;
    }
else if (d==radius+other.radius) {
    return true;
}

else return false;

    }

};

int main() {
Circle c1,c2;
c1.input();
c2.input();
if (c1.check(c2)) {
    cout<<"Yes";
}
else cout<<"No";

}
