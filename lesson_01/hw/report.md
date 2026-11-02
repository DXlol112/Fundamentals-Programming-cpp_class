# Домашнее задание № 1

## Что надо было сделать

**Курс:** Основы C++ · **Группа:** 9/2-РПО-25/1  
**Тема:** Структура программы и переменные · **Время:** 20–30 минут

### Задание 1

Напишите консольную программу, которая выводит рецепт вашего любимого простого блюда или напитка. Придумайте собственные название, ингредиенты и шаги приготовления.

### Требования к выполнению

1. Создайте три переменные типа `int`: количество порций, время приготовления в минутах и количество готовых порций. Задайте всем переменным начальные значения; число готовых порций в начале равно нулю.
2. Выведите название рецепта, количество порций, время и начальное число готовых порций. Числовые данные выводите через переменные.
3. Добавьте разделы «Ингредиенты» и «Приготовление»: минимум три ингредиента и три шага. Каждый пункт выводите с новой строки.
4. После вывода шагов присвойте счётчику готовых порций новое значение и выведите его. При изменении используйте уже созданную переменную.
5. Добавьте минимум один осмысленный комментарий в коде. Проверьте сборку и запуск через Ctrl+F5. Текст рецепта можно записать латиницей.

### Пример консольного отображения

```text
Recipe: Banana milkshake
Portions: 2
Time: 5 min
Ready before: 0
Ingredients:
- Milk
- Banana
- Honey
Steps:
1. Peel the banana.
2. Mix the ingredients.
3. Pour into glasses.
Ready after: 2
```

### Результат работы

Сохраните `main.cpp` и `report.md` в папке `homework/01-structure-variables/` своего репозитория. Создайте коммит и отправьте изменения на GitHub. В Journal прикрепите ZIP архив проекта и ссылку на папку домашней работы.

## Решение

```cpp
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
```

Вывод программы:

```text
Recipe: Classic pancakes
Portions: 12
Time: 30min
Ready before: 0
Ingredients:
 -Milk
 -Eggs
 -Wheat flour
 -Butter
 -Sugar
 -Salt
Steps:
 1. Mix the base
 2. Add some milk
 3. Add the flour
 4. Thin the batter
 5. Cook
Ready after: 15
```
