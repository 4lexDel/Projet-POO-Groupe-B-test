//MAPPING = MIDDLEWARE
#pragma once
#include "CLmapTB.h"

using System::String;

namespace NS_Comp_Mappage
{
	public ref class CLmapClient : public CLmapTB
	{
	protected:
		String^ sSql;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
	};
}
