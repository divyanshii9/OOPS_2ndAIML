#include<iostream>
using namespace std;
class product{
private:
    string name;
     int id;
     int price;
public:
   product(string a,int b,int c){
    name=a;
    id=b;
    price=c;
   }
   
    product higherPrice(product p1, product p2) {
        if (p1.price > p2.price)
            return p1;
        else
            return p2;
    }
    void display(){
         
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    
}
};
int main(){
     string a="Vikas";
    int b=237;
    int c=99000;
    string p="Vivek";
    int q=945;
    int r=98009;
    product p1(a,b,c);
    product p2(p,q,r);
     product p3 = p1.higherPrice(p1, p2);

    cout << "Product with Higher Price:" << endl;
    p3.display();

    return 0;
}


