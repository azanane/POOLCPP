#include "RPN.hpp"

RPN::RPN( const std::string& operation ) {

	size_t index = 0;
	float number;

	while (index < operation.size()) {

		if (isNumber(operation.substr(index), &number) == true) {

			this->_operationStack.push(number);

			while (operation[index] >= 48 && operation[index] <= 57 && index < operation.size())
				index++;
		}
		if (isOperand(operation[index]) == true) {

			resolveOperation(operation[index]);
		}

		index++;
	}

	PRINT(this->_operationStack.top())
}

RPN::RPN( void ) {}

RPN::RPN( RPN const & src ) {

	*this = src;
}

RPN & RPN::operator=( RPN const & rhs ) {

	this->_operationStack = rhs._operationStack;
	
	return *this;
}

RPN::~RPN( void ) {}

void RPN::resolveOperation(const char operand) {

	if (this->_operationStack.size() < 2 || this->_operationStack.size() > 3)
		throw RPN::OperationError();


	float firstValue, secondValue;

	secondValue = this->_operationStack.top();
	this->_operationStack.pop();

	firstValue = this->_operationStack.top();
	this->_operationStack.pop();

	if (operand == '+')
		this->_operationStack.push(firstValue + secondValue);
	else if (operand == '-')
		this->_operationStack.push(firstValue - secondValue);
	else if (operand == '*')
		this->_operationStack.push(firstValue * secondValue);
	else if (operand == '/' && secondValue != 0)
		this->_operationStack.push(firstValue / secondValue);
	else if (operand == '/' && secondValue == 0)
		throw RPN::NullDivider();
}

bool RPN::isNumber(const std::string& operation, float *number) const {

	size_t index = 0;

	if (operation[0] >= 48 && operation[0] <= 57) {

		while (operation[index] >= 48 && operation[index] <= 57 && index < operation.size())
			index++;

		*number = std::stoi(operation.substr(0, index));

		if (*number < 0 || *number > 9)
			throw RPN::RangeError();
		
		return true;
	}

	return false;
}

bool RPN::isOperand(const char operand) const {

	if (operand == '+' || operand == '-' || operand == '*' || operand == '/')
		return true;

	return false;
}
