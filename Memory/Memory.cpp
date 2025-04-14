
#include <iostream>

void func1()
{
    bool b = true;
    int i = 5;
}

void func2()
{
    bool b = false;
    float f = 10;

    func1();
}

void func3()
{
    int a[100000];
    func3;

}

class Animal
{
public:
    Animal(std::string name)
    {
        std::string name_ = name;
    }

    std::string getName()
    {
        return name_;
    }
private:
    std::string name_;
};

void setValue(int* v)
{
    *v = 5;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 5;
    float f = 4.5;

    //func1();
    //func2();
    //func3();

    int* p = new int(5);

    std::cout << *p << std::endl;
    delete p;

    Animal* dog = new Animal("Dog");
    std::cout << (*dog).getName() << std::endl;
    delete dog;

    dog = nullptr;

    if (dog)
    {
        //std::cout << dog->getName << std::endl;
    }

    Animal cat("Cat");
    std::cout << cat.getName() << std::endl;

    int* block = (int*)malloc(sizeof(int) * 1000);

    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;
    block[4] = 7;

    block++;

    std::cout << *(block + 2) << std::endl;

    free(--block);


    int v1 = 10;
    int v2 = 20;

    int* po = nullptr;

    std::cout << po << std::endl;

    //po = &v2;
    //*po = 53;
    //std::cout << po << std::endl;
   // std::cout << &v1 << std::endl;

    //setValue(p);
    //v1 = 10
    //v2 = 20
    swap(&v1, &v2);

    std::cout << v1 << " " << v2 << std::endl;

}


