#pragma once
#include <string>

class Plusterm
{
public:
	void start();
private:
	const std::string plusterm_version{ "0.3.102" };

#ifdef DEBUG
	const std::string plusterm_version_channel{ "DEV_CANARY" };
#else
	const std::string plusterm_version_channel{ "RTL_CANARY" };
#endif

	bool is_exit{};

	void plusterm_main();

	void run(std::string _user_input_command, std::string _user_input_text);

	void help();

	void print_title(std::string _mode = "title");

	void info(std::string _info_level, std::string _info_text, std::string _input_command = "_plusterm?undefined_");

	void set_color(std::string _color_mode = "output_default");
};