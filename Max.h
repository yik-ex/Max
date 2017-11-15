#pragma once

template <typename T>
T& max(T& val1, T& val2, T& val3)
{
	T& tempVal = (val1 >= val2) ? val1 : val2;
	return (tempVal >= val3) ? tempVal : val3;
}