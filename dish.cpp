#include <cmath>
// #include <format>
#include <string>
#include "dish.hpp"

Dish::Dish() {
    name_ = "";
    price_ = 0.0;
    description_ = "None";
}
Dish::Dish(std::string name, double price, std::string description) : name_(name), price_(price), description_(description) {
    // price_ = std::ceil(price_ * 100.0) / 100.0;
}

std::string Dish::getName() {
    return name_;
}
void Dish::setName(std::string name) {
    name_ = name;
}
double Dish::getPrice() {
    return price_;
}
void Dish::setPrice(double price) {
    price_ = price;
}
std::string Dish::getDescription() {
    return description_;
}
void Dish::setDescription(std::string description) {
    description_ = description;
}

std::string Dish::toString(bool full) const {
    if(full) {
        // return std::format("Name: {}\nPrice: {}\nDescription: {}", name_, price_, description_); 
        return "Name: " + name_ + "\nPrice: " + std::to_string(price_) + "\nDescription: " + description_;
    } else
        return name_ + ", " + std::to_string(price_);
}

bool Dish::operator<(const Dish& other) const {
    return name_.compare(other.name_) < 0;
}
bool Dish::operator>(const Dish& other) const {
    return name_.compare(other.name_) > 0;
}
bool Dish::operator==(const Dish& other) const {
    return name_.compare(other.name_) == 0;
}
bool Dish::operator<=(const Dish& other) const {
    return name_.compare(other.name_) <= 0;
}
bool Dish::operator>=(const Dish& other) const {
    return name_.compare(other.name_) >= 0;
}
