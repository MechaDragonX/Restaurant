#include <iostream>
#include <array>
#include <string>
#include "customer.hpp"
#include "dish.hpp"

static std::array<Dish, 10> MENU {
    Dish("Spaghetti Bolognese", 10.0, "Spaghetti with bolognese sauce"),
    Dish("Spaghetti with Eggplant Parmigiana", 10.0, "Spaghetti servered with eggplants fried and backed in parmesan"),
    Dish("Mac and Cheese", 10.0, "A favorite of children everywhere; served with gooey cheddar cheese sauce"),

    Dish("Chocolate Mousse", 5.0, "A single slice of a thick, creamy, cake-like dish made with eggs and whipped cream; garnished with ground cinnamon"),
    Dish("Tramisu", 5.0, "A single slice of a coffee-flavored Italian dessert made of ladyfingers dipped in coffee and layered in a whipped mixture of eggs, sugar, and mascarpone cheese; with plenty of cocoa powder on top."),
    Dish("Soufflé Pancakes", 8.0, "Three super fluffy pancakes prepared in a style that's very popular with young people in Japan; more maple syrup provided on request"),

    Dish("Coffee", 1.0, "A standard expresso; complimentary cream and sugar available"),
    Dish("Lemonade", 1.0, "A popular sugar lemon-based drink with little kids and super big kids alike"),
    Dish("Oreo Milkshake", 5.0, "We can't legally use the \"Oreo\" name, but we'll use it anyway"),
    Dish("Fountain Drinks", 1.0, "Any of the available carbonated drinks")
};

int main() {
    std::cout << MENU[4].toString(true) << std::endl;
    std::cout << "$" << MENU[4].getPrice() << std::endl;
}
