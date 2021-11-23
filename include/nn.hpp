#include <vector>

class AbstractNN
{
public:
    virtual double activation_func() = 0;
    virtual void backprop() = 0;
    virtual void train() = 0;
    virtual void inference() = 0;
};

template<class T=double>
class Perceptron : public AbstractNN
{
    double learn_rate;
    std::vector <std::vector <T>> layers;
    std::vector <std::vector <T>> weights;
public:
    void backprop() override
    {}
    void train() override
    {}
    void inference() override
    {}
};