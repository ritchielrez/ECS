#include "Manager.hpp"

#include <iostream>

class CounterComponent : public Component
{
  public:
    double counter = 0;

    void init() override
    {
        std::cout << "Counter component init\n";
    }
    void update(double dt) override
    {
        counter += dt;
        std::cout << "Counter: " << counter << "\n";
    }
    void render() override
    {
        std::cout << "Counter component rendered\n";
    }
};

int main()
{
    Manager manager;

    Entity &ent1 = manager.addEntity();

    ent1.addComponent<CounterComponent>();

    for (size_t i = 1; i <= 100; ++i)
    {
        manager.refresh();
        manager.update(1.0f);
        manager.render();
    }

    return 0;
}
