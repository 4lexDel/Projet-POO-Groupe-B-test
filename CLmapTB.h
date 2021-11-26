//CLmapTB.H*********************************************************************************
//MAPPING = MIDDLEWARE
#pragma once
using System::String;

namespace NS_Comp_Mappage
{
	public ref class CLmapTB
	{
	protected:
		String^ sSql;
	public:
		virtual String^ Select(void);
		virtual String^ Insert(void);
		virtual String^ Delete(void);
		virtual String^ Update(void);
	};
}
