#include <lml_cis/error.hpp>

#include <iomanip>
#include <ios>
#include <sstream>

namespace lml_cis
{
	lml_pae::string make_internal_error_message(std::uint32_t errorcode)
	{
		std::basic_ostringstream<lml_pae::character> oss;
		oss << STR("Internal error 0x") << std::hex << std::setw(8) << std::setfill(STR('0')) << errorcode << STR(": Please report to the developers.");
		return oss.str();
	}
}