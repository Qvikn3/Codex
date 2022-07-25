#include <Codex.h>

class Sandbox : public Codex::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Codex::Application* Codex::CreateApplication()
{
	return new Sandbox();
}
