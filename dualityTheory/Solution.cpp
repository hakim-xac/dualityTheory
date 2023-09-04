#include "Solution.h"
#include <fstream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <ConsoleInterface.h>

namespace KHAS {
	Solution::Solution(const std::string& title) noexcept
		: window_name_{ title }
		, app_{ window_name_ , WinWidth{ .width = 80 }, WinHeight{ .height = 100 } }
	{
		init();
	}

	void Solution::init() noexcept
	{
		using namespace std::string_literals;

		app_.addHeaderItem(window_name_);
		app_.addHeaderItem(app_.dividingLine(), IsFormated::Disable);
		app_.addHeaderItem("Курсовая работа"s);
		app_.addHeaderItem(app_.dividingLine(), IsFormated::Disable);
		app_.addHeaderItem("Группа:"s, "ПБ-11"s, Aligment::JUSTIFIED);
		app_.addHeaderItem("Студент:"s, "Хакимов А.С."s, Aligment::JUSTIFIED);
		app_.addHeaderItem("Вариант:"s, "№ 1"s, Aligment::JUSTIFIED);

	}

	void Solution::start() noexcept
	{
		using namespace std::string_literals;


		//window.addMenuItem("hi", [] { return std::vector<std::string>{ {"qwerty"} };  }, IsExit::True);
		//window.addMenuItem("fgfgfgfghfghf:", std::nullopt);
		//window.addMenuItem("Выход:", std::nullopt );
		app_.loop();
	}
}