int stringtoInt(string s)
{
	int result = stoi(s);
	return result;
}

int stringToInt(string s)
{
	//object from the class stringstream
	stringstream ss(s);
	//object has the value and stream it to temp
	int temp;
	ss >> temp;
	return temp;
}

string intToString(int a)
{
	ostringstream oss;
	oss << a;
	string temp;
	temp = oss.str();
	return temp;
}
