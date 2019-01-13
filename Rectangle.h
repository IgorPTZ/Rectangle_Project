#pragma once

#include <vector>
using std::vector;

class Rectangle
{
public:
	Rectangle(const vector<double> &, const vector<double> &, const vector <double> &, const vector <double> &);
	void showInformations();

	double getLength();
	double getWidth();
	
	void   setVertexA(const vector<double> &);
    const  vector<double>& getVertexA();

	void   setVertexB(const vector<double> &);
	const  vector<double>& getVertexB();

	void   setVertexC(const vector<double> &);
	const  vector<double>& getVertexC();

	void   setVertexD(const vector<double> &);
	const  vector<double>& getVertexD();

	double calculatePerimeter();
	double calculateArea();
	int    isSquare();
	
private:
	vector<double> vertexA;
	vector<double> vertexB;
	vector<double> vertexC;
	vector<double> vertexD;
	double length;
	double width;
	
	void   setLength(double);
	void   calculateLength(const vector<double> &, const vector<double> &);
	
	void   setWidth(double);
	void   calculateWidth(const vector<double> &, const vector<double> &);
	
	int    setValidate(const vector<double> &,const vector<double> &, const vector<double> &, const vector<double> &);
	int    isValuesCorrectly(const vector<double> &, const vector<double> &, const vector<double> &, const vector<double> &);
	int    isRectangle(const vector<double> &, const vector<double> &, const vector<double> &, const vector<double> &);
};