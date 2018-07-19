#include "csgo_cheat.hpp"

namespace cheat
{
	csgo_cheat_t::csgo_cheat_t():
		cheat_t("Counter-Strike Global Offensive", "Valve001")
	{
	}

	int csgo_cheat_t::mainloop()
	{
		return cheat_t::mainloop();
	}
} // namespace cheat
