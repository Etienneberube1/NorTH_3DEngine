#include<NorTH.h>

class SandBox : public NorTH::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

NorTH::Application* NorTH::CreateApplication()
{
	return new SandBox();
}