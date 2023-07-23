#include<iostream>
#include<vector>
using namespace std;
class ShoppingSystem{
    
vector<int>priceList; // Making the vector private
public:
    void addToCart(int itemPrice) //add an item to shoppingCart
    {
        priceList.push_back(itemPrice);
    }
    int totalItemPurchased() // This function will return total no of items present in the cart
    {
        return priceList.size();
    }
    void removeLastPurchasedItem() // Removes the last item from the cart
    {
        priceList.pop_back();
    }
    int calculateTotalPrice() //Calculates total price
    {   int sum=0;
        for (int i: priceList){
            sum=sum+i;
        }
        return sum;
    }
    bool isCartEmpty() // It will tell us is the cart empty or not
    {
        return priceList.empty();
    }
    void removeALLPurchasedElementsFromCart() // Removes all the elements from the cart
    {
        priceList.clear();
        priceList.shrink_to_fit();
    }
};
int main()
{
    ShoppingSystem u1;
    u1.addToCart(150);
    u1.addToCart(75);
    u1.addToCart(95);
    cout << u1.totalItemPurchased() << endl;
    cout << u1.calculateTotalPrice() << endl;
    u1.removeLastPurchasedItem();
    cout << u1.totalItemPurchased() << endl;
    cout << u1.calculateTotalPrice() << endl;
    cout << u1.isCartEmpty() << endl;
    u1.removeALLPurchasedElementsFromCart();
    cout << u1.isCartEmpty() << endl;
    
    return 0;
}