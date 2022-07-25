#pragma once

#include "Core.h"

namespace Codex
{

	class CODEX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}