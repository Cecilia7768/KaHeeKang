#pragma once

template <typename T>
class Singleton
{
private:
	static T* m_pThis;

protected:
	Singleton()
	{
	};
	virtual ~Singleton()
	{
	};

public:
	static T* GetInstance()
	{
		if (m_pThis == NULL)
			m_pThis = new T;

		return m_pThis;
	};

	static void DestroyInstance()
	{
		if (m_pThis)
		{
			delete m_pThis;
			m_pThis = NULL;
		}
	};
};

template <typename T> T* Singleton<T>::m_pThis = 0;

