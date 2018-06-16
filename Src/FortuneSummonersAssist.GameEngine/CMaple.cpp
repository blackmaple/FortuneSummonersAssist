#include "CMaple.h"

namespace FortuneSummonersAssistCommon
{
	template<class T>
	CMaple<T>::CMaple()
	{
		 
	}
	template<class T>
	CMaple<T>::~CMaple()
	{
	}
	template<class T>
	vector<T>& CMaple<T>::GetVectorInfo() const
	{
		return &this->m_vecInfo;
	}

}