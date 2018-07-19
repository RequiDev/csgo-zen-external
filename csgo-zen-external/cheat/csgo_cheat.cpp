#include "csgo_cheat.hpp"

namespace cheat
{
	csgo_cheat_t::csgo_cheat_t():
		cheat_t("Counter-Strike Global Offensive", "Valve001"),
		entity_list_(&process_)
	{
	}

	bool csgo_cheat_t::init()
	{
		if (!cheat_t::init())
			return false;

		if (!entity_list_.init())
			return false;

		entity_list_.refresh();

		return true;
	}
} // namespace cheat
