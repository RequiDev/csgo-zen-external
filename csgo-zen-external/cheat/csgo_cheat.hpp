#pragma once
#include <cheat/cheat.hpp>

namespace cheat
{
	class csgo_cheat_t : public cheat_t
	{
	public:
		csgo_cheat_t();

		virtual int mainloop();
	private:
	};
} // namespace cheat