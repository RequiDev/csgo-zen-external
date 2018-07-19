#pragma once
#include <cstdint>
#include <array>
#include <remote/module.hpp>

namespace remote {
	class process_t;
}

namespace csgo
{
	struct ent_info_t
	{
		uintptr_t entity;
		int serial;
		uintptr_t previous;
		uintptr_t next;
	};

	class entity_list_t
	{
	public:
		explicit entity_list_t(remote::process_t* process);

		bool init();
		bool refresh();
	private:
		remote::process_t* process_;
		remote::module_t client_dll_;
		uintptr_t entity_base_;
		std::array<ent_info_t, 4096> entities_;
	};
} // namespace csgo
