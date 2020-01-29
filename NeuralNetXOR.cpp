#include <iostream>

class Net
{
public:
	Net();
	~Net();

private:

};

Net::Net()
{
}

Net::~Net()
{
}

int main()
{
	Net myNet(topology);

	myNet.feedForward(inputVals);
	myNet.backProp(targetVals);
	myNet.getResults(resultVals);



    std::cout << "Hello World!\n";
}
