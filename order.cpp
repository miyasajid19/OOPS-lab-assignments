/*
You are tasked with designing a program to model the behavior of an online store that tracks the number of orders placed by all customers.
Requirements:
1. Create a class Order that contains:
    - A private member orderID (int) to store the order’s unique identifier.
    - A private static member totalOrders (int) that keeps track of the total number of orders placed.
    - A constructor that initializes orderID and increments the totalOrders by 1 whenever a new order is placed.
    - A static function getTotalOrders() that returns the total number of orders placed so far.
2. In the main() function:
    - Create multiple Order objects to simulate new orders being placed.
    - Display the unique orderID for each order and the total number of orders after each order is placed using the getTotalOrders() static function.
Tasks:
    - Implement the Order class.
    - Use static members to track the total number of orders across all objects.
    - Write a main() function to demonstrate the use of static members and functions.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
class Order
{
    int orderId;
    static int totalOrders;

public:
    Order()
    {
        this->orderId = ++totalOrders;
        cout<<"Order with id "<<this->orderId<<" is placed."<<endl;
    }
    static void displayTotal()
    {
        cout << "the total order placed is : " << totalOrders << endl;
    }
};
int Order ::totalOrders = 0;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    Order::displayTotal();
    Order temp;
    Order::displayTotal();
    Order order2;
    Order::displayTotal();
    Order order3;
    Order::displayTotal();
    Order order4;
    Order::displayTotal();
    Order order5;
    Order::displayTotal();
    Order order6;
    Order::displayTotal();

    return EXIT_SUCCESS;
}