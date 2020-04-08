#pragma once
#include <iostream>
class vector2d
{
public:
	float x;
	float y;
	vector2d();
	vector2d(float x, float y);

	vector2d& Add(const vector2d& vec);
	vector2d& odejmuj(const vector2d& vec);
	vector2d& mnozenie(const vector2d& vec);
	vector2d& dziel(const vector2d& vec);
	friend vector2d& operator+(vector2d& v1, const vector2d& v2);
	friend vector2d& operator-(vector2d& v1, const vector2d& v2);
	friend vector2d& operator*(vector2d& v1, const vector2d& v2);
	friend vector2d& operator/(vector2d& v1, const vector2d& v2);

	vector2d& operator+=(vector2d& vec);
	vector2d& operator-=(vector2d& vec);
	vector2d& operator*=(vector2d& vec);
	vector2d& operator/=(vector2d& vec);

	friend std::ostream& operator<<(std::ostream& stream, const vector2d& vec);
};