#ifndef MALETA_H
#define MALETA_H
#include <string>
using std::string;

struct maleta
{
	private:
		string color;
		int size;
	
		
	public:
		maleta();
		~maleta();
		void setColor(string);
		void setSize(int);
		string getColor();
		int getSize();
	protected:
};

#endif
