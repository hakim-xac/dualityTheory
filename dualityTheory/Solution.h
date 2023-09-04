#pragma once
#include <ConsoleInterface.h>
#include <vector>
#include <string>
#include <optional>
#include <random>
#include <type_traits>

namespace KHAS {

	class Solution final
	{
	private:
		const std::string window_name_;
		ConsoleInterface app_;
	public:
		explicit Solution(const std::string& title) noexcept;

		void start() noexcept;

	private:
		void init() noexcept;
	private:	


	};
}



