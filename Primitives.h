#pragma once

enum class FileFormats
{
	FF1, FF2, undef
};
enum class PTypes{
	Point, LineSegment,Triangle,Rectangle
};

struct GraphicalPrimitive {
public:
	GraphicalPrimitive() {}
};
struct Point:GraphicalPrimitive {
	int x = 0;
	int y = 0;
};


struct LineSegment :GraphicalPrimitive {
	LineSegment(Point a, Point b) {}
	Point a, b;
};
struct Triangle :GraphicalPrimitive {
	Triangle(Point a, Point b, Point c);
	Point a, b, c;
};
struct Rectangle : GraphicalPrimitive {
	Rectangle(Point a, Point b) {}
	Point a, b;
};