#ifndef DISH_HPP
#define DISH_HPP

#include <string>

class Dish {
    private:
        // Name of menu item
        std::string name_;
        // Price of dish in USD
        double price_;
        // A description of the dish
        std::string description_;
    public:
        // Default constructor
        Dish();
        // Create a new dish by giving a name, price, and description
        Dish(std::string name, double price, std::string description);

        std::string getName();
        void setName(std::string name);
        double getPrice();
        void setPrice(double price);
        std::string getDescription();
        void setDescription(std::string description);

        std::string toString(bool full) const;

        bool operator<(const Dish& other) const;
        bool operator>(const Dish& other) const;
        bool operator==(const Dish& other) const;
        bool operator<=(const Dish& other) const;
        bool operator>=(const Dish& other) const;
};

#endif
