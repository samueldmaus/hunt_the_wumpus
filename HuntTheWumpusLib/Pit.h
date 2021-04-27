﻿#pragma once

#include <memory>

#include "Denizen.h"

namespace HuntTheWumpus
{
	class Pit : public Denizen
	{
	public:
		explicit Pit(const int i);

		~Pit() override = default;

		void ObserveCaveEntrance() override;

		void ReportPresence() override;

		void GetPriority() override;

		[[nodiscard]] const DenizenProperties& Properties() const override;

		[[nodiscard]] const DenizenIdentifier& GetIdentifier() const override;

	private:
		std::unique_ptr<DenizenIdentifier> m_denizen_identifier_;
		
		std::unique_ptr<DenizenProperties> m_denizen_properties_;
	};
}