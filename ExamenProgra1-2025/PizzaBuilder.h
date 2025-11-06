#pragma once
#include <vector>
#include <string>
#include "TomatoesRepository.h"
#include "HerbRepository.h"
#include "IngredientSelector.h"

class PizzaBuilder {
public:
    PizzaBuilder();

    void BuildPizza();
    void DisplayFinalPizza() const;

private:
    void SelectTomatoes();
    void SelectCheese();
    void SelectHerb();
    void SelectMeat();

    TomatoesRepository tomatoRepo_;
    std::vector<std::string> selectedIngredients_;

    const std::vector<std::string> availableTomatoes_ = {"Cherry", "Roma", "Beefsteak", "Heirloom", "Grape"};
    

    HerbRepository HerbRepo_;
    std::vector<std::string> selectedIngredients2;

    const std::vector<std::string> availableHerb_ = { "Basil", "Parsley", "Oregano", "Thyme", "Rosemary", "Cilantro", "Sage", "Chives" };

};