#ifndef SHIP_H
#define SHIP_H


class Ship
{
public:
	Ship() {}
	int getCoordinateBeginX() const;
	int getCoordinateBeginY() const;
	int getCoordinateEndX() const;
	int getCoordinateEndY() const;
	bool isAlive() const;
	void setCoordinateBeginX(const int& coordinateBeginX);
	void setCoordinateBeginY(const int& coordinateBeginX);
	void setCoordinateEndX(const int& coordinateBeginX);
	void setCoordinateEndX(const int& coordinateBeginX);
	~Ship() {}
private:
	int coordinateBeginX_;
	int coordinateBeginY_;
	int coordinateEndX_;
	int coordinateEndY_;
};


#endif //SHIP_H
