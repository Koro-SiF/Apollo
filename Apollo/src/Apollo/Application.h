#pragma once

#include "Core.h"

namespace Apollo {

	class APOLLO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TBF in CLIENT
	Application* CreateApplication();

}



