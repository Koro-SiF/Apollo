#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Apollo {

	class APOLLO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};


}

// Core Log Mapper
#define AP_CORE_TRACE(...)		 ::Apollo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AP_CORE_INFO(...)        ::Apollo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AP_CORE_WARN(...)        ::Apollo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AP_CORE_ERROR(...)       ::Apollo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AP_CORE_CRITICAL(...)    ::Apollo::Log::GetCoreLogger()->critical(__VA_ARGS__)
								   	
// Client Log Mapper			   	
#define AP_TRACE(...)		     ::Apollo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AP_INFO(...)		     ::Apollo::Log::GetClientLogger()->info(__VA_ARGS__)
#define AP_WARN(...)		     ::Apollo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AP_ERROR(...)		     ::Apollo::Log::GetClientLogger()->error(__VA_ARGS__)
#define AP_CRITICAL(...)	     ::Apollo::Log::GetClientLogger()->critical(__VA_ARGS__)
