#include<bits/stdc++.h>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;

public:
    Product() {
        productId = 0;
        productName = "";
        price = 0.0;
    }

    void input() {
        cout << "Enter Product ID: ";
        cin >> productId;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;
    }

    double calculatePrice() {
        return price;
    }

    double calculatePrice(double discountPercentage) {
        return price - (price * discountPercentage / 100);
    }

    double calculatePrice(double discountPercentage, double deliveryCharge) {
        return price - (price * discountPercentage / 100) + deliveryCharge;
    }

    void display() {
        cout << "\nProduct ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << fixed << setprecision(2);
        cout << "Original Price: " << calculatePrice() << endl;
        cout << "Price after 10% Discount: " << calculatePrice(10) << endl;
        cout << "Price after 10% Discount + Delivery: "
             << calculatePrice(10, 50) << endl;
    }
};

int main() {
    int numberOfProducts;

    cout << "Enter number of products: ";
    cin >> numberOfProducts;

    if (numberOfProducts <= 0) {
        cout << "Invalid number of products." << endl;
        return 0;
    }

    Product* products = new Product[numberOfProducts];

    for (int i = 0; i < numberOfProducts; i++) {
        cout << "\nEnter details for Product " << i + 1 << endl;
        products[i].input();
    }

    for (int i = 0; i < numberOfProducts; i++) {
        products[i].display();
        
    }

    delete[] products;

    return 0;
}
