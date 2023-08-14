#include <mEngine.h>
class examplebox : public mEngine::Application
{
public:
	examplebox()
	{

	}

	~examplebox()
	{

	}

};

mEngine::Application* mEngine::CreateApplication()
{
	return new examplebox();
} 

