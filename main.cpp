#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::cerr;

struct student
{
    string name;
    string surname;
    int age;

    student(string n, string s, int a)
    {
        name = n;
        surname = s;
        age = a;

    }
};

struct students_group
{
private:
    string name;
    vector<student> members;
public:
    auto add(student const& new_student)-> void
    {
        members.push_back(new_student);
    }

    auto show() -> void
    {
        cout << name << ": ";
        for(auto stud: members)
        {
            cout << stud.name << ' ' << stud.surname << ", ";
        }
        cout << "\n";
    }
    auto change_name_to(string const& new_name ) -> void
    {
        if(new_name.size()>10) // Walidacja
        {
            cerr << "\nRozmiar nazwy nie moze przekroczyc 10 liter\n";
        }
        else
        {
            name = new_name;
        }
        name = new_name;
    }
    auto get_name() -> string
    {
        return name;
    }
};

//auto display_group(students_group g) -> void
//{
//    cout << g.name << ": ";
//    for(auto stud: g.members)
//    {
//        cout << stud.name << ' ' << stud.surname << ", ";
//    }
//    cout << "\n";
//}
//
//auto add_to_group(students_group& g, student const& s) -> void
//{
//    g.members.push_back(s);
//}

auto main() -> int {

//    auto str = string("Hello");
//    str += " ";
//    str += "There";
//    cout << str;

    auto stud1 = student("Adam", "Mickiewicz", 30);
    auto stud2 = student("Juliusz", "Slowacki", 21);
    auto stud3 = student("Jan", "Kochanowski", 40);


    auto group11c = students_group();
//    group11c.name="11c";
    group11c.change_name_to("11c");
//  group11c.members.push_back(stud1);
//  group11c.members.push_back(stud2);
//    add_to_group(group11c, stud1);
//    add_to_group(group11c, stud2);
    group11c.add(stud1);    //Najlepsza opcja (Metoda- Funkcja w klasie)
    group11c.add(stud2);    //Najlepsza opcja (Metoda- Funkcja w klasie)

    auto group13c = students_group();
//    group13c.name = "13c";
    group13c.change_name_to("13c");
//  group13c.members.push_back(stud3);
//   add_to_group(group13c, stud3);
    group13c.add(stud3);    //Najlepsza opcja (Metoda- Funkcja w klasie)

//  display_group(group11c);
//  display_group(group13c);

    group11c.change_name_to("Bardzo bardzo bardzo dluga nazwa");
    group11c.show();
    group13c.show();

    cout << group11c.get_name();
}
//Metoda która ustawia pole nazywa sie seter
//Metoda która pobiera pole nazywa się geter

