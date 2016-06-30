#pragma once

class CPerlinNoise
{
public:
	CPerlinNoise();
	CPerlinNoise(int seed);
	~CPerlinNoise();

	double PerlinNoise_2D(double x, double y);

private:

	double Noise(int x, int y);
	double SmoothNoise(double x, double y);
	double Interpolate(double a, double b, double x);
	double InterpolatedNoise(double x, double y);


	double persistence = 0.4;
	double Number_Of_Octaves = 5;
	int m_seed;	//シード値

};
