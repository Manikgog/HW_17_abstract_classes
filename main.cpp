/*!
Наследование - абстрактные классы
Задание
Cоздать базовые классы для растений(Plants) и плодов(Harvest).

Класс плода должен
предоставлять возможность пользователю:
- узнавать своё название(задаётся при создании)
- узнавать свой вес и цвет(также можно задать при создании)

Базовый класс растения должен
- знать какой у него размер(большой, маленький, средний),
- цвет, сколько на нём может быть плодов.
Создайте конкретных наследников для класса растения. Пример (яблоня, груша, малина,
ежевика). Которые связаны со своими наследниками класса плод и которые возвращают
плоды пока они есть на дереве через виртуальный метод базового класса (модель паттерна
фабричный метод)
В функции main продемонстрировать возможность работы с классами.
``` задание сдаётся в виде текстового документа с иллюстрациями либо в виде файла -
изображения диаграммы, с пояснениями
*/
#include <iostream>
#include "AppleTree.hpp"
#include "PeachTree.hpp"
#include "CherryTree.hpp"



int main() {
    AppleTree appletree("Green", "Large", "Apple Tree", 10);
    appletree.printInfo();
    double total_weight = 0;
    std::cout << "\nHarvest from an apple tree:\n";
    while (appletree.GetFruitCount())
    {
        Harvest* apple = appletree.harvestFruit();
        std::cout << "Name of hurvest: " << apple->getName()
            << "; Color of hurvest: " << apple->getColor()
            << "; Size of hurvest: " << apple->getSize()
            << "; Weight of hurvest: " << apple->getWeight()
            << std::endl;
        total_weight += apple->getWeight();
        delete apple;
    }
    std::cout << "Total weight of apples: " << total_weight << " kg.\n";
    total_weight = 0;

    PeachTree peachTree("green", "medium", "peach tree", 8);
    std::cout << "\nHarvest from peach tree:\n";
    while (peachTree.GetFruitCount())
    {
        Harvest* peach = peachTree.harvestFruit();
        std::cout << "Name of hurvest: " << peach->getName()
            << "; Color of hurvest: " << peach->getColor()
            << "; Size of hurvest: " << peach->getSize()
            << "; Weight of hurvest: " << peach->getWeight()
            << std::endl;
        total_weight += peach->getWeight();
        delete peach;
    }
    std::cout << "Total weight of peaches: " << total_weight << " kg.\n";
    total_weight = 0;

    CherryTree cherryTree("green", "medium", "cherry tree", 15);
    std::cout << "\nHarvest from an cherry tree:\n";
    while (cherryTree.GetFruitCount())
    {
        Harvest* cherry = cherryTree.harvestFruit();
        std::cout << "Name of hurvest: " << cherry->getName()
            << "; Color of hurvest: " << cherry->getColor()
            << "; Size of hurvest: " << cherry->getSize()
            << "; Weight of hurvest: " << cherry->getWeight()
            << std::endl;
        total_weight += cherry->getWeight();
        delete cherry;
    }
    std::cout << "Total weight of cherries: " << total_weight << " kg.\n";
    return 0;
}


