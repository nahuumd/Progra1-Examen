#pragma once
#include <vector>
#include <string>
#include "TomatoesRepository.h"
#include "MeatsRepository.h"
#include "IngredientSelector.h"

class PizzaBuilder {
public:
    PizzaBuilder();

    void BuildPizza();
    void DisplayFinalPizza() const;

private:
    void SelectTomatoes();
    //void SelectCheese();
   // void SelectHerb();
    void SelectMeats();

    TomatoesRepository tomatoRepo_;
    std::vector<std::string> selectedIngredients_;

    const std::vector<std::string> availableTomatoes_ = {"Cherry", "Roma", "Beefsteak", "Heirloom", "Grape"};

    MeatsRepository meatRepo_;
    std::vector<std::string> selectedIngredients3;

    const std::vector<std::string> availableMeats_ = { "Pepperoni", "Bacon", "Chicken", "Shrimp", "Mignon" , "Ham" , "Sausage" , "Prosciutto" };
};          