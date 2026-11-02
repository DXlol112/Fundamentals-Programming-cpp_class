#include <iostream>
/*Пришлось отупеть и делать костыль, вместо #include <format> */

int main(){
    int portions = 12;
    int time = 30;
    int ready = 0;
    
    std::cout <<"Recipe: Classic pancakes\n"
            << "Portions: " << portions << "\n"
            << "Time: " << time << "min\n"
            << "Ready before: " << ready << "\n";

    std::cout << "Ingredients:\n"
            << " -Milk\n"
            << " -Eggs\n"
            << " -Wheat flour\n"
            << " -Butter\n"
            << " -Sugar\n"
            << " -Salt\n";
    
    std::cout << "Steps:\n"
            << " 1. Mix the base\n"
            << " 2. Add some milk\n"
            << " 3. Add the flour\n"
            << " 4. Thin the batter\n"
            << " 5. Cook\n";
    
    ready = 15;
    std::cout << "Ready after: " << ready << "\n";

}