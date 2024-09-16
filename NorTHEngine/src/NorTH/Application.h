#pragma once

#include "Core.h"


namespace NorTH
{
	class NORTH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};


	// to be defined in the CLIENT
	Application* CreateApplication();
}


