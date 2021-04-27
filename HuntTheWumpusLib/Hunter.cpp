﻿#include "Hunter.h"

namespace HuntTheWumpus
{
	Hunter::Hunter(const int i)
		: m_denizen_identifier_(std::make_unique<DenizenIdentifier>(Category::Hunter, i)),
		m_denizen_properties_(std::make_unique<DenizenProperties>(true, false, false, true, true))
	{
	}

	void Hunter::EnterCave()
	{
	}

	void Hunter::ObserveCaveEntrance()
	{
	}

	void Hunter::GetPriority()
	{
	}

	const DenizenProperties& Hunter::Properties() const
	{
		return *m_denizen_properties_;
	}

	const DenizenIdentifier& Hunter::GetIdentifier() const
	{
		return *m_denizen_identifier_;
	}
	
}
