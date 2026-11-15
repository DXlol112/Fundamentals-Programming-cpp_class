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

    int saved_completed = completed_tasks;

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
            << "Saved completed: " << saved_completed << "\n";
}
void task2() {
    std::string customer_name;
    std::string dish_name;
    const double portion_price = 145.5;
    int portion_count = 3;
    const double service_fee = 20.0;
    bool is_paid = false;

    std::cout << "Customer: ";
    std::getline(std::cin, customer_name);

    std::cout << "Dish: ";
    std::getline(std::cin, dish_name);

    double subtotal = portion_price * portion_count;
    double total = subtotal + service_fee;


    std::cout << "\nCAFE ORDER\n"
                << "Customer: " << customer_name << "\n"
                << "Dish: " << dish_name << "\n"
                << "Portion price: " << portion_price << " RUB\n"
                << "Portions: " << portion_count << "\n"
                << "Subtotal: " << subtotal << " RUB\n"
                << "Service fee: " << service_fee << " RUB\n"
                << "Total: " << total << " RUB\n";

    std::cout << "Paid: " << std::boolalpha << is_paid << "\n";
}

void task3() {
    std::string name;
    std::string event;
    const int ticket_price = 200;
    const int ticket_count = 3;
    const int ticket_fee = 25;
    int issued{};
    bool confirmed = false;

    std::cout << "Participant: ";
    std::getline(std::cin, name);
    std::cout << "Event: ";
    std::getline(std::cin, event);

    int ticket_total = ticket_price * ticket_count + ticket_fee;
    int saved_issued = issued;

    std::cout << "\nIT MEETUP TICKET\n"
              << "Organizer: IT Academy\n"
              << "Participant: " << name << "\n"
              << "Event: " << '"' << event << '"' << "\n"
              << "Ticket price: " << ticket_price << " RUB\n"
              << "Tickets: " << ticket_count << "\n"
              << "Service fee: " << ticket_fee << " RUB\n"
              << "Total: " << ticket_total << " RUB\n"
              << "Issued before: " << issued << "\n"
              << "Confirmed before: " << std::boolalpha << confirmed << "\n";

    issued = ticket_count;
    confirmed = true;

    std::cout << "Issued after: " << issued << "\n"
              << "Confirmed after: " << confirmed << "\n"
              << "Saved issued: " << saved_issued << "\n";
}

int main() {
    task1();
    std::cout << '\n';
    task2();
    std::cout << '\n';
    task3();
    return 0;
}
