#include <string>

class Sales_item {
	friend std::istream& operator>>(std::istream&, Sales_item&);
	friend std::ostream& operator<<(std::ostream&, const Sales_item&);
public:
	// operations on Sales_item objects
	double avg_price() const;
	bool same_isbn(const Sales_item &rhs) const
	{ return isbn == rhs.isbn; }
	//default constructor needed to initialize members of built-in types
	Sales_item() : units_sold(0), revenue(0.0) {}
	//member binary operator: left-hand operand bound to 
	//implicit this pointer
	Sales_item & operator+=(const Sales_item &);
private:
	std::string isbn;
	usinged units_sold;
	double revenue;
};

double Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

// nonmember binary operator: must declare a parameter for each operand
Sales_item operator+(const Sales_item&, const Sales_item&)
