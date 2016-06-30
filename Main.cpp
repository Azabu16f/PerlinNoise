
# include <Siv3D.hpp>
#include"perlin_noise.h"
void Main()
{

	const Font font(30);
	CPerlinNoise noise1;

	while (System::Update())
	{
		for (int x = 0; x < 640; x++) {
			for (int y = 0; y < 480; y++) {
				Rect(x, y, 1, 1).draw(Color(
					noise1.PerlinNoise_2D(double(x) / 20, double(y) / 20) * 128 + 128,
					noise1.PerlinNoise_2D(double(x) / 20 + 18, double(y) / 20 - 35) * 128 + 128,
					noise1.PerlinNoise_2D(double(x) / 20 - 20, double(y) / 20 + 35) * 128 + 128));
			}
		}
	}
}
