
#include<iostream>
#include<string>
  using namespace std;
  class employee {
  protected:
      string name;
      int salary;
  public:
      int getsalary()
      {
          return salary;
      }
      string getname()
      {
          return name;
      }

  };
  class EmployeeSystem :public employee {
  private:
      int exp;
      int n;
      int level;
      int rsalary[50];// lương thưc tế
      int slnv;
      string tempname[50];
      int tempsalary[50];
      int templv[50];
      int tempexp[50];
      int m = 0;
  public:

      void input()
      {
          cin >> slnv;
          for (int i = 0; i < slnv; i++)
          {
              cin >> n;
              cin.ignore();
              if (n == 1)
              {
                  getline(cin, name);
                  cin >> salary;
                  cin >> level;
                  tempname[i] = name;
                  tempsalary[i] = getsalary();
                  rsalary[i] = level * getsalary() * 20 / 100 + getsalary();
                  templv[i] = level;
                  tsal[i]=sal1();
                  cin.ignore();
              }
              if (n == 2)
              {
                  getline(cin, name);
                  cin >> salary;
                  cin >> exp;
                  cin.ignore();
                  tempname[i] = getname();
                  tempsalary[i] = getsalary();
                  rsalary[i] = exp * getsalary() * 15 / 100 + getsalary();
                  tempexp[m] = exp;
                  m++;
              }
          }
      }
      void sortemployee()
      {
          for (int i = 0; i < slnv; i++)
          {
              for (int j = i + 1; j < slnv; j++)
              {
                  if (rsalary[i] > rsalary[j])
                  {
                      int temp = rsalary[i];
                      string temp1 = tempname[i];
                      int temp2 = tempsalary[i];
                      int temp3 = templv[i];
                      //int temp4 = tempexp[i];
                      tempname[i] = tempname[j];
                      tempname[j] = temp1;
                      tempsalary[i] = tempsalary[j];
                      tempsalary[j] = temp2;
                      templv[i] = templv[j];
                      templv[j] = temp3;
                      //tempexp[i] = tempexp[j];
                      //tempexp[j] = temp4;
                      rsalary[i] = rsalary[j];
                      rsalary[j] = temp;
                  }
              }
          }
      }
      void display()
      {
          sortemployee();
          int k = 0;
          for (int i = 0; i < slnv; i++)
          {
              if (i!=slnv-1)
              {
                  cout << "Employee " << "[" << i + 1 << "]" << ":" << endl;
                  cout << " - Name: " << tempname[i] << endl;
                  cout << " - Basic Salary: " << tempsalary[i] << endl;
                  cout << " - Salary: " << rsalary[i] << endl;
                  cout << " - Level: " << templv[i] << endl;
              }
              else
              {
                  cout << "Employee " << "[" << i + 1 << "]" << ":" << endl;
                  cout << " - Name: " << tempname[i] << endl;
                  cout << " - Basic Salary: " << tempsalary[i] << endl;
                  cout << " - Salary: " << rsalary[i] << endl;
                  cout << " - Experience: " << tempexp[k] << endl;
                  k++;
              }
          }
      }
  };
  int main()
  {
      EmployeeSystem es;
      es.input();
      es.display();
      return 0;
  }
