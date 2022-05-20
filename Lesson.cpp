#include <iostream>

int main() {
  class Lesson{
	private:
		int lesson_id;
		std ::string lesson_type;
		std ::string lesson_number;
		std ::string lesson_length;
		std ::string lesson_description;
		
	public:
		void addlesson();
		void editlesson();
		void deletelesson();
		void searchlessone();
}

Lesson::lesson(){
	
}
Lesson::lesson(int lsnID,std ::string lsntype,std ::string lsnnum,std ::string lsnLen,std ::string lsnDes )
{
	lesson_id = lsnID;
	lesson_type=  lsntype;
    lesson_number = lsnnum;
    lesson_length= lsnLen;
	lesson_description = lsnDes;
  
}

void Lesson::addlesson(){
	
}

void Lesson::editlesson(){
	
}
void Lesson::deletelesson(){
	
}
void Lesson::searchlesson(){
	
}
Lesson::~lesson(){}
	
}
