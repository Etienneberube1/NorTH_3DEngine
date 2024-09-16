#pragma once

#ifdef NORTH_PLATFORM_WINDOWS

extern NorTH::Application* NorTH::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NorTH::CreateApplication();
	app->Run();
	delete app;
}

#endif