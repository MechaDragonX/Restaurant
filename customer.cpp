#include <map>
#include <string>
#include "customer.hpp"
#include "dish.hpp"

Customer::Customer() {
    name_ = "";
    orderedItems_ = {};
}
Customer::Customer(std::string name) : name_(name) {
    orderedItems_ = {};
}

std::string Customer::getName() {
    return name_;
}
void Customer::setName(std::string name) {
    name_ = name;
}
std::map<Dish, int> Customer::getOrderedItems() {
    return orderedItems_;
}

void Customer::order(Dish dish, int quantity) {
    orderedItems_.insert({ dish, quantity });
}
bool Customer::cancelOrder() {
    orderedItems_.erase(std::prev(orderedItems_.end()));
    return true;
}
bool Customer::cancelOrder(Dish dish) {
    if(orderedItems_.find(dish) != orderedItems_.end()) {
        orderedItems_.erase(dish);
        return true;
    }
    return false;
}
bool Customer::modifyOrder(int quantity) {
    orderedItems_[std::prev(orderedItems_.end())->first] = quantity;
    return true;
}
bool Customer::modifyOrder(Dish dish, int quantity) {
    if(orderedItems_.find(dish) != orderedItems_.end()) {
        orderedItems_[dish] = quantity;
        return true;
    }
    return false;
}
std::string Customer::toString() {
    std::string output = "Name: " + name_ + "\n";
    for (auto const& [key, value] : orderedItems_) {
       output += "[" + key.toString(false) + "; " + std::to_string(value) + "], ";
    }
    return output;
}
