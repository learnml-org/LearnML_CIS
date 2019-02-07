#pragma once

#include <lml_pae/os.hpp>

#include <iostream>

namespace lml_cis
{
#if defined(LML_PAE_WINDOWS) && (defined(UNICODE) || defined(_UNICODE))
	static inline std::wostream& out = std::wcout;
	static inline std::wistream& in = std::wcin;
#else
	static inline std::ostream& out = std::cout;
	static inline std::istream& in = std::cin;
#endif
}