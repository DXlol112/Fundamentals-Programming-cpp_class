#include <iostream>
#include <string>

void task1() {
    std::string name;
    std::string group;
    int age = 16;
    double experience_years = 1.5;
    bool is_ready = false;
    const int lessons_count = 2;
    int completed_tasks{};

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Group: ";
    std::getline(std::cin, group);
    
    int save_complite = completed_tasks;

    std::cout << "\nSTUDENT PROFILE\n"
            << "Name: " << name << "\n"
            << "Group: " << group << "\n"
            << "Course: C++\n"
            << "Age: " << age << "\n"
            << "Experience: " << experience_years << "\n"
            << "Ready: " << std::boolalpha << is_ready << "\n"
            << "Lessons: " << lessons_count << "\n";

    std::cout << "Completed before: " << completed_tasks << "\n";
        
    completed_tasks = 3;
        
    std::cout << "Completed after: " << completed_tasks << "\n"
            << "Saved completed: " << save_complite << "\n";
}
void task2(){
    std::string customer_name;
    std::string dish_name;
    const double portion_price = 145.5;
    int count_portion = 3;
    const double service_fee = 20.0;
    bool is_paid = false;

    std::cout << "Customer: ";
    std::getline(std::cin, customer_name);

    std::cout << "Dish: ";
    std::getline(std::cin, dish_name);

    double subtotal = portion_price * count_portion;
    double total = subtotal + service_fee;


    std::cout << "\nCAFE ORDER\n"
                << "Customer: " << customer_name << "\n"
                << "Dish: " << dish_name << "\n"
                << "Portion price: " << portion_price << " RUB\n"
                << "Portions: " << count_portion << "\n"
                << "Subtotal: " << subtotal << " RUB\n"
                << "Service fee: " << service_fee << " RUB\n"
                << "Total: " << total << " RUB\n";
    
    std::cout << "Paid " << std::boolalpha << is_paid << "\n";
};

void task3(){
    
}

int main() {
    task1();
    task2();
    return 0;
}
