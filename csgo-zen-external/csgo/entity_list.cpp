#include "entity_list.hpp"
#include <remote/process.hpp>

namespace csgo
{
	entity_list_t::entity_list_t(remote::process_t* process) :
		process_(process),
		entity_base_(0),
		entities_()
	{
	}

	bool entity_list_t::init()
	{
		if (!process_->get_module("client_panorama.dll", client_dll_))
			return false;
		uintptr_t pattern(client_dll_.find_pattern("BB ? ? ? ? 83 FF 01 0F 8C ? ? ? ? 3B F8") + 1);
		if (!process_->read(pattern, entity_base_))
			return false;

		return true;
	}

	bool entity_list_t::refresh()
	{
		if (!process_->read(entity_base_, entities_))
			return false;
		return true;
	}
} // namespace csgo
