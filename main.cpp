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
    Customer rags("Raghav");

    // Order 2 of 1 entry
    rags.order(MENU[1], 2);
    std::cout << rags.toString() << std::endl;
    // Order 2 of a 2nd entry
    rags.order(MENU[2], 2);
    std::cout << rags.toString() << std::endl;
    // Remove 2nd entry
    rags.cancelOrder();
    std::cout << rags.toString() << std::endl;

    // Order three deserts
    rags.order(MENU[4], 3);
    std::cout << rags.toString() << std::endl;
    // Change to 2 of them
    rags.modifyOrder(2);
    std::cout << rags.toString() << std::endl;

    // Change to 1 entry
    rags.modifyOrder(MENU[1], 1);
    std::cout << rags.toString() << std::endl;

    // Order one drink
    rags.order(MENU[6], 1);
    // Final receipt
    std::cout << rags.toString() << std::endl;
}
