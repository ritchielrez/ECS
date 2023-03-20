## ECS
### This project is a basic entity component system made using modern C++

**ECS** is quite a hot topic in the game industry. **ECS** is full form of *Entity Component System*, where our gameobjects are considered as entities. Their
functionalities are defined in components, and systems are created to do something with the components of an entity.
Here's an example diagram below:

    [ Manager ]                          
         |             /-[ DrawComponent ]---[ DrawSystem() ]
         \-[ Entity ]--|                 
                       \-[ TransformComponent ]---[ PhysicsUpdateSystem() ]

This graph off course isn't the perfect representation of an **ECS**. Remember, it's just a game architecture, that can be
implemented in many ways. This project takes rather an OOP approach, but you can easily make a **ECS** using Data Oriented Design.
In fact, that is the recomended the approach to make an **ECS**. But it's up to you again how you want to implement it.
There are many resources to learn about the benefits and different implementations of **ECS**.

### This project is off course still incomplete, this is more like a base to start from, rather than a full-fledged solution.