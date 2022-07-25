#pragma once

#ifdef CX_PLATFORM_WINDOWS

extern Codex::Application* Codex::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Codex::CreateApplication();
	app->Run();
	delete app;
}

#endif
