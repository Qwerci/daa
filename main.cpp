#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct studentdetail{
int id,age;
double score;
string name,gender;
char grade;
};


int main(){

 studentdetail  student[6];

 int maleNum=0, femaleNum=0;
ofstream file("output.txt", ios::app);
  file<<"IDNumber\t"<<"\t"<<"Name\t"<<"\t"<<"Age\t"<<"Gender\t"<<"\t"<<"Score\t"<<"Grade"<<endl;
  file<<"*******************************************************************************"<<endl;
   cout<<"Please use tab to move to the next variable.\n";
   cout<<"IDNumber\t"<<"\t"<<"Name\t"<<"\t"<<"Age\t"<<"Gender\t"<<"\t"<<"Score\t"<<endl;

   //for input of details
 for(int i=1;i<6;i++){
        ofstream file("output.txt", ios::app);
        file<<i<<" ";
        cin>>student[i].id;
        file<<student[i].id<<"\t";
         file<<"\t";
        cin>>student[i].name;
        file<<student[i].name<<"\t";
         file<<"\t";
        cin>>student[i].age;
        file<<student[i].age<<"\t";
        cin>>student[i].gender;
        file<<student[i].gender<<"\t";

    //to determine total number of each gender
        if (student[i].gender == "male")
			{
				maleNum =maleNum+1;
			}
			else if(student[i].gender == "female")
			{
				femaleNum =femaleNum+1;
			}
			else
            {
                file<<"invalid"<<endl;
            }
            file<<"\t";
        //input of details
        cin>>student[i].score;
        file<<student[i].score<<"\t";

        //to allocate grades
        if(student[i].score>=80 && student[i].score<= 100)
      student[i].grade ='A';
      else if(student[i].score>=70 && student[i].score<=79)
        student[i].grade ='B';
      else if(student[i].score>=60 && student[i].score<=69)
        student[i].grade ='C';
      else if(student[i].score>=50 && student[i].score<=59)
        student[i].grade ='D';
      else if(student[i].score>=40 && student[i].score<=49)
       student[i].grade ='E' ;
      else
        student[i].grade ='F';
        file<<student[i].grade;
        file<<endl;

 }

    file<<"*******************************************************************************"<<endl;
            int averageScore, averageAge;
            averageScore =(student[1].score+student[2].score+student[3].score+student[4].score+student[5].score)/5;
                file<<"Average score: "<<averageScore<<endl;

                    averageAge = (student[1].age+student[2].age+student[3].age+student[4].age+student[5].age)/5;
                    file<<"Average age: "<<averageAge<<endl;

                    file<<"MaleCount :"<<maleNum<<endl;
                 file<<"Femalecount :"<<femaleNum<<endl;


            return 0;
}

