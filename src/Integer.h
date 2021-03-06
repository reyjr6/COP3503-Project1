/*
 * Integer.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Brett
 */

#ifndef INTEGER_H_
#define INTEGER_H_

#include<string>
#include<vector>
#include "Number.h"
#include "Exponent.h"
#include "Placeholder.h"
#include "Log.h"
#include "Root.h"
#include "Variable.h"

class Integer: public Number {
public:
	Integer(int toContain);
	virtual ~Integer();

	Number& operator+(Number& rhs);
	Number& operator-(Number& rhs);
	Number& operator*(Number& rhs);
	Number& operator/(Number& rhs);
	bool operator==(Number& rhs);

	std::string toString();
	std::vector<std::pair<Number*, char> > simplify();

	int getInt();

private:
	int intContainer;
};

#endif /* INTEGER_H_ */
