#include <iostream>
#include <memory>

int g = 10;

template<typename T>
struct smart_ptr
{
    smart_ptr() = default;

    smart_ptr(T* p) 
    {
        this->p = p;
    }

    ~smart_ptr()
    {
        delete p;
        std::cout << "Deleted!\n";
    }

    T Dereference() { return *p; }
    T operator * () { return *p; }
    T* operator & () { return p; }

    T* p = nullptr;
};

int main()
{
    g = 23;

    int i = 5;
    int* p = &i;

    {
        smart_ptr<int> sPtr{ new int (10)};
        //*sPtr = 20;
        std::cout << *sPtr << std::endl;
        std::cout << &sPtr << std::endl;


        smart_ptr<float> sPtrFl{ new float(32.5f) };
    }

    std::unique_ptr<int>uptr = std::make_unique<int>(23);
    std::cout << *uptr << std::endl;

    std::shared_ptr<int> sharedPtr = std::make_shared<int>(34);
    std::cout << sharedPtr.use_count() << std::endl;
    std::shared_ptr<int> sharedPtr2 = sharedPtr;
    std::cout << sharedPtr.use_count() << std::endl;
    {
        std::shared_ptr<int> sharedPtr3 = sharedPtr;
        std::cout << sharedPtr.use_count() << std::endl;
    }
    std::shared_ptr<int> sharedPtr4 = sharedPtr;
    std::cout << sharedPtr.use_count() << std::endl;
}

