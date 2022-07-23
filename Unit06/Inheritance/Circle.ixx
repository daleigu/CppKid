import module1;
import <iostream>;
import <string>;

export module module2;
export class Circle;


class Circle : public Shape {
	double radius;

public:
	Circle();
	double getArea();
	double getRadius() const;
	void setRadius(double radius);
	Circle(double radius_, Color color_, bool filled_);
};
