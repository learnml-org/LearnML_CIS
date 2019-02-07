#include <lml/application.hpp>
#include <lml_cis/error.hpp>
#include <lml_cis/unicode.hpp>

#include <cstdint>
#include <cstdlib>

int main(int argc, char** argv)
{
	if (std::uint32_t errorcode = lml::application::initialize(); errorcode)
	{
		lml_cis::out << lml_cis::make_internal_error_message(errorcode) << STR('\n');
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}