#pragma once
#include <iostream>

class AABB
{
public:
	//ctor
	AABB(int x,int y,int width,int height)
	{
		m_x = x;
		m_y = y;
		m_width = width;
		m_height = height;
	}
	// funtion
	inline bool isIntersecting(AABB* cuadrado)
	{
		if (cuadrado->m_x + cuadrado->m_width < m_x) {
			return false;  
		}

		if (m_x + m_width < cuadrado->m_x) {
			return false;  
		}

		if (cuadrado->m_x > m_x + m_width) {
			return false;  
		}

		if (m_x > cuadrado->m_x + cuadrado->m_width) {
			return false;  
		}

		if (cuadrado->m_y + cuadrado->m_height < m_y) {
			return false;  
		}

		if (m_y + m_height < cuadrado->m_y) {
			return false;  
		}

		if (cuadrado->m_y > m_y + m_height) {
			return false;  
		}

		if (m_y > cuadrado->m_y + cuadrado->m_height) {
			return false; 
		}

		return true;
	} 
	
private:
	int m_x;
	int m_y;
	int m_width;
	int m_height;
};
