#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <map>
#include <string>
#include "dish.hpp"

class Customer {
    private:
        // Name of customer, just given name for now
        std::string name_;
        // Map of Dish => quantity
        std::map<Dish, int> orderedItems_;
        // Last dish stored in menory
        Dish previousOrder;
    public:
        // Default Constructor
        Customer();
        // Create a new customer using a name
        Customer(std::string name);

        std::string getName();
        void setName(std::string name);
        // No set access given to orderedItems_
        std::map<Dish, int> getOrderedItems();

        // Order given dish (append to orderedItems_)
        void order(Dish dish, int quantity);
        /*
            No params: Cancel previous order
            Params: Check to see if passed Dish is in orderedItems_ and then remove it, if not, do not remove anything
            
            Return true if successful and false if not
        */
        bool cancelOrder();
        bool cancelOrder(Dish dish);
        /*
            No params: Modify previous order with given quantity
            Params: Check to see if passed Dish is in orderedItems_ and then modify it with the provided quantity, if not, do not remove anything
            
            Return true if successful and false if not
        */
        bool modifyOrder(int quantity);
        bool modifyOrder(Dish dish, int quantity);
        // Return a basic receipt
        std::string toString();
};

#endif
