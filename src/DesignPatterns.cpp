
#include <iostream>

//
// Types of design patterns
// 1. Creational Design pattern
//      - Abstract Factory 
//      - Builder 
//      - Factory Method
//      - ProtoType
//      - SingleTon 
// 2. Structural design pattern
//      - Adapter
//      - Bridge
//      - Composite
//      - Decorator
//      - Facade
//      - Flyweight
//      - Proxy
// 3. Behavioral design pattern
//      - Chain of responsibility
//      - Template Method
//      - Command
//      - Iterator
//      - Mediator
//      - Memento
//      - Observer
//      - State
//      - Strategy
//      - Visitor
//

extern void AbstractFactoryfunction();

class SingleTon 
{
public:
    static SingleTon* getPrtInstance()
    {
        // Create instnace here
        if (!m_pInstace)
            m_pInstace = new SingleTon();

        return m_pInstace;
    }

    static SingleTon& getInstance()
    {
        if (!m_pInstace)
            m_pInstace = new SingleTon();

        return *m_pInstace;

    }

private:
    SingleTon()
    {
        std::cout << "SingleTon Const called" << std::endl;
    }

    SingleTon(const SingleTon&) = delete;
    SingleTon& operator=(const SingleTon&) = delete;

    static SingleTon* m_pInstace;
};

/// <summary>
/// take note of following declaration
/// </summary>
SingleTon * SingleTon::m_pInstace = nullptr;

   
int main()
{
    SingleTon& singleObj = SingleTon::getInstance();
    std::cout << "Hello World!\n";

    AbstractFactoryfunction();

    int a;
    std::cin >> a;
}
