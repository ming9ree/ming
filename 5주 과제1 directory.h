#ifndef DIRECTORY_H
#define DIRECTORY_H
class directory // class 선언
{
private:
	std::string pnum; //sting함수가 namespace std에 따르는 걸 표기
	std::string name; 

public:
	void addPhone(); 
	void editPhone(); 
	std::string getPnum(); 
	std::string getName(); 
};
#endif // !DIRECTORY_H
