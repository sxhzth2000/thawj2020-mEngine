#pragma once
#include"core.h"
namespace mEngine {
	
	class MENGINE_API Application
	{
	public:
		Application();
		virtual  ~Application();

		void Run();


	}; 

	//to be defined in client
	Application* CreateApplication();


	
}