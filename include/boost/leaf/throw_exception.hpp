#ifndef BOOST_LEAF_68F2D7C61AA111E9952B34BE67511AEB
#define BOOST_LEAF_68F2D7C61AA111E9952B34BE67511AEB

// Copyright (c) 2018 Emil Dotchevski
// Copyright (c) 2018 Second Spectrum, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LEAF_NO_EXCEPTIONS
#	if !__cpp_exceptions
#		define LEAF_NO_EXCEPTIONS
#	endif
#endif

#ifdef LEAF_NO_EXCEPTIONS

namespace boost
{
	[[noreturn]] void throw_exception( std::exception const & ); // user defined
}

namespace boost { namespace leaf {

	template <class T>
	[[noreturn]] void throw_exception( T const & e )
	{
		::boost::throw_exception(e);
	}

} }

#else

namespace boost { namespace leaf {

	template <class T>
	[[noreturn]] void throw_exception( T const & e )
	{
		throw e;
	}

} }

#endif

#endif
