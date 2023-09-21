#pragma once

#ifdef AP_PLATFORM_WINDOWS

extern Apollo::Application* Apollo::CreateApplication();

int main(int argc, char** argv)
{
	Apollo::Log::Init();
	AP_CORE_WARN("Initialised Log!");
	AP_INFO("Hello!");

	auto app = Apollo::CreateApplication();
	app->Run();
	delete app;
}

#endif
