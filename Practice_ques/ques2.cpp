#include<iostream>
using namespace std;
class Bank{
private:
   int  accountNumber;
   string customer_name;
   int balance;
public:
   Bank(int a,string b,int c){
    accountNumber=a;
    customer_name=b;
    balance=c;
   }
   void display() const {
        cout << "Customer: " << customer_name<<endl;
        cout<<"Balance: " << balance << endl;
    }
   friend const Bank&compareBalance(const Bank& b1, const Bank& b2);
};
const Bank&compareBalance(const Bank& b1, const Bank& b2){
    if(b1.balance>b2.balance){
        return b1;
    }
    else{
        return b2;
    }
}
int main(){
    Bank b1(2,"Vikas",99);
    Bank b2(3,"Vivek",98);
    const Bank& b3 = compareBalance(b1, b2);
    b3.display();
}