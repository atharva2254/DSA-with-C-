#include <iostream>
using namespace std;

class Cars
{
    string model;
    int engine;

public:
    Cars(string model, int engine)
    {
        this->model = model;
        this->engine = engine;
    }

    void getInfo()
    {
        cout << "Model: " << model << endl
             << "Engine: " << engine << endl;
    }

    void startEngine()
    {
        if (ignitionFunction())
        {
            cout << "Engine started!";
        }
    }

private:
    bool ignitionFunction()
    {
        // "Motor is running... and the engine started";
        return true;
    }
};

int main()
{
    Cars bmw("Bmw", 2499);

    bmw.getInfo();
    bmw.startEngine();
}