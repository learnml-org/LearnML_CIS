#pragma once

#include <lml_pae/string.hpp>

#include <cstdint>

namespace lml_cis
{
	lml_pae::string make_internal_error_message(std::uint32_t errorcode);
}