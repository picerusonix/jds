#include "vektor.h"

vector2d::vector2d()
{
	x = 0.0f;
	y = 0.0f;
}
vector2d::vector2d(float x, float y)
{
	this->x = x;
	this->y = y;
}

vector2d& vector2d::Add(const vector2d& vec)
{
	this->x += vec.x;
	this->y += vec.y;
	return *this;
}

vector2d& vector2d::odejmuj(const vector2d& vec)
{
	this->x -= vec.x;
	this->y -= vec.y;
	return *this;
}

vector2d& vector2d::mnozenie(const vector2d& vec)
{
	this->x *= vec.x;
	this->y *= vec.y;
	return *this;
}

vector2d& vector2d::dziel(const vector2d& vec)
{
	this->x /= vec.x;
	this->y /= vec.y;
	return *this;
}

vector2d& operator+(vector2d& v1, const vector2d& v2)
{
	return v1.Add(v2);
}
vector2d& operator-(vector2d& v1, const vector2d& v2)
{
	return v1.odejmuj(v2);
}
vector2d& operator*(vector2d& v1, const vector2d& v2)
{
	return v1.mnozenie(v2);
}
vector2d& operator/(vector2d& v1, const vector2d& v2)
{
	return v1.dziel(v2);
}

vector2d& vector2d::operator+=(vector2d& vec)
{
	return this->Add(vec);

}
vector2d& vector2d::operator-=(vector2d& vec)
{
	return this->odejmuj(vec);

}
vector2d& vector2d::operator*=(vector2d& vec)
{
	return this->mnozenie(vec);

}
vector2d& vector2d::operator/=(vector2d& vec)
{
	return this->dziel(vec);

}

std::ostream& operator<<(std::ostream& stream, const vector2d& vec)
{
	stream << "(" << vec.x << "," << vec.y << ")";
	return stream;
}