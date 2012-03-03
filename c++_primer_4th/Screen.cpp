#include <string>

class Screen {
public:
	// interface member functions
	typedef std::string::size_type index;
private:
	std::string contents;
	index cursor;
	index height, width;
};
