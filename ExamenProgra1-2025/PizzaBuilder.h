#pragma once
#include <vector>
#include <string>
#include "TomatoesRepository.h"
#include "MeatsRepository.h"
#include "HerbRepository.h"
#include "CheeseRepository.h"
#include "IngredientSelector.h"

class PizzaBuilder {
public:
    PizzaBuilder();

    void BuildPizza();
    void DisplayFinalPizza() const;

private:
    void SelectTomatoes();
    void SelectMeats();
    void SelectCheese();
   void SelectHerb();
   

    TomatoesRepository tomatoRepo_;
    std::vector<std::string> selectedIngredients_;

    const std::vector<std::string> availableTomatoes_ = {"Cherry", "Roma", "Beefsteak", "Heirloom", "Grape"};

    MeatsRepository meatRepo_;
    std::vector<std::string> selectedIngredients3;

    const std::vector<std::string> availableMeats_ = { "Pepperoni", "Bacon", "Chicken", "Shrimp", "Mignon" , "Ham" , "Sausage" , "Prosciutto" };
        
    

    HerbRepository HerbRepo_;
    std::vector<std::string> selectedIngredients2;

    const std::vector<std::string> availableHerb_ = { "Basil", "Parsley", "Oregano", "Thyme", "Rosemary", "Cilantro", "Sage", "Chives" };



    CheeseRepository cheeseRepo_;
    std::vector<std::string> selectedIngredients1;

    const std::vector<std::string> availableCheeses_ = { "Mozzarella", "Cheddar", "Parmesan", "Cream Cheese", "Gouda", "Blue Cheese", "Feta" };


    

};
