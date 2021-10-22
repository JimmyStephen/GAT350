#include "Colorbuffer.h"
#include <string>

class Image
{
public:
	friend class Framebuffer;

	bool Load(const std::string& filename, uint8_t alpha = 255);
	void Flip();

	ColorBuffer colorBuffer;
private:
//	<a pointer to a uint8_t buffer>
	//uint8_t* buffer;
//	<a variable to hold the widthand a variable to hold the height of the image>
	//int width;
	//int height;
};
