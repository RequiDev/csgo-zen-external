#pragma once
#include <cheat/cheat.hpp>
#include <csgo/entity_list.hpp>

namespace cheat
{
	class csgo_cheat_t : public cheat_t
	{
	public:
		csgo_cheat_t();

		virtual bool init();
	private:
		csgo::entity_list_t entity_list_;
	};
} // namespace cheat