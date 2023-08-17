#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Product class to store product information
class Product {
public:
    string name;
    int quantity;
    double price;

    Product(string n, int q, double p) : name(n), quantity(q), price(p) {}
};

// Inventory class to manage products
class Inventory {
private:
    vector<Product> products;

public:
    // Add a new product to the inventory
    void addProduct(string name, int quantity, double price) {
        Product product(name, quantity, price);
        products.push_back(product);
    }

    // Display the inventory
    void displayInventory() {
        cout << "Inventory:\n";
        for (const auto& product : products) {
            cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
        }
    }
};

int main() {
    Inventory inventory;

    // Adding products to the inventory
    inventory.addProduct("Product A", 10, 25.99);
    inventory.addProduct("Product B", 20, 15.49);
    inventory.addProduct("Product C", 5, 9.99);

    // Displaying the inventory
    inventory.displayInventory();

    return 0;
}
