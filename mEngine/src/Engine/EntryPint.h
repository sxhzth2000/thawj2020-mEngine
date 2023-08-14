#pragma once

 #ifdef ME_PLATFORM_WINDOWS

extern mEngine::Application* mEngine::CreateApplication();


 
int main(int argc, char** argv)
{
	printf("start game!!!\n");
	auto app = mEngine::CreateApplication();
	app->Run();
	delete app;

}








#endif // #ifdef ME_PLATFORM_WINDOWS



