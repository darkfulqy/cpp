#include <iostream>
using namespace std;
class Point
{
    public:
        int x,y;
        Point( int a=0, int b=0)
        {
            x=a;
            y=b;
        }
        Point operator+(const Point& other){
            return Point(x+other.x,y+other.y);
        }

    
};
template <typename TYPE> class VEC2{//模板类
    public:
        TYPE a,b;
        //VEC2(const TYPE &x,const TYPE &y){a=x;y=b;} //体内描述成员函数
        VEC2(const TYPE &x,const TYPE &y);//声明成员函数,下文体外描述成员函数
        TYPE &Get();

};
template <typename TYPE>
VEC2<TYPE>:: VEC2(const TYPE &x,const TYPE &y){//类名体外描述成员函数所需要的操作
    a=x;b=y;
}
template <typename TYPE>
TYPE & VEC2<TYPE>::Get(){
    return a;
}

int main(){
    Point a(1,2),b(3,4);
    Point *c=new Point;
    *c=a+b;
    cout<<c->x<<" "<<c->y;
    delete c;//new了记得delete
    return 0;
}