#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
* CLASS
*******************************************************************************/
class StringSet
{
public:
    /* • StringSet(): Hàm kiến tạo không đối số. Tạo ra tập rỗng.
       • StringSet(int _capacity): Tạo tập rỗng.
                                   Mảng có thể chứa tối đa _capacity phần tử.
       • StringSet(const StringSet& asset): Hàm kiến tạo sao chép.
                                            Tạo tập bằng một tập xâu đã có.
       • ~StringSet(): Giải phóng bộ nhớ.
       • empty(): Kiểm tra xem tập hợp có phải tập rỗng không.
       • size(): Đếm số phần tử trong tập hợp.
       • find(const string & x ): Tìm xem xâu x có trong tập hợp hay không.
                                  Nếu có thì trả về chỉ số trong mảng.
                                  Nếu không thì trả về -1.
                                  Hàm này cài thuật toán tìm kiếm nhị phân.
       • erase(const string & x): Nếu x có trong tập hợp thì xóa x.
       • insert(const string & x): Nếu x chưa có trong tâp hợp thì thêm x.
       • operator=: nạp chồng phép gán
       • operator+: nạp chồng phép cộng. */
    StringSet();
    StringSet(int _capacity);
    StringSet(const StringSet& asset);
    ~StringSet();
    bool empty() const;
    int size() const;
    int find(const string &x) const;
    void erase(const string &x);
    void insert(const string &x);
    StringSet& operator=(const StringSet& asset);
    const StringSet operator+(const StringSet& asset);
    void append(const string &x);
    void output();
    void sort();
private:
    string *element;
    int capacity;
    int last;
};

/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    StringSet A;
    A.append("January");
    A.append("February");
    A.append("March");
    A.append("April");
    A.append("May");
    A.append("June");
    cout << "\n\tString Set A: ";
    A.output();
    StringSet B;
    B.append("July");
    B.append("August");
    B.append("September");
    B.append("October");
    B.append("November");
    B.append("December");
    cout << "\n\tString Set B: ";
    B.output();
    cout << endl;

    /* sort */
    cout << "\n\tA.sort(): ";
    A.sort();
    A.output();
    cout << endl;
    cout << "\tB.sort(): ";
    B.sort();
    B.output();
    cout << endl;

    /* empty */
    if (A.empty())
    {
        cout << "\n\tA.empty -> true" << endl;
    }
    else
    {
        cout << "\n\tA.empty -> false" << endl;
    }
    if (B.empty())
    {
        cout << "\tB.empty -> true" << endl;
    }
    else
    {
        cout << "\tB.empty -> false" << endl;
    }

    /* size */
    cout << "\n\tA.size() -> " << A.size() << endl;
    cout << "\tB.size() -> " << B.size() << endl;

    /* find */
    cout << "\n\tB.find(""September"") -> " << B.find("September") << endl;

    /* erase */
    cout << "\n\tB.erase(""July""): ";
    B.erase("July");
    B.output();
    cout << endl;

    /* insert */
    cout << "\n\tB.insert(""July""): ";
    B.insert("July");
    B.output();
    cout << endl;

    /* A + B */
    cout << "\n\tA + B: ";
    StringSet C;
    C = A;
    C.operator+(B);
    C.output();
    cout << endl;

    return 0;
}

/*******************************************************************************
* FUNCTION
*******************************************************************************/
StringSet::StringSet()
{
    last = -1;
    capacity = 0;
    element = NULL;
}

StringSet::StringSet(int _capacity)
{
    last = -1;
    capacity = _capacity;
    element = new string[_capacity];
}

StringSet::StringSet(const StringSet& asset)
{
    element = asset.element;
    last = asset.last;
    capacity = asset.capacity;
}

StringSet::~StringSet()
{
    delete[] element;
    last = -1;
    capacity = 0;
}

void StringSet::append(const string &x)
{
    /* Empty */
    if (capacity == 0)
    {
        string *newElement = new string[1];
        newElement[0] = x;
        element = newElement;
        last = 0;
        capacity = 1;
    }

    /* Full */
    else if (last + 1 == capacity){
        capacity *= 2;
        string *newElement = new string[capacity];
        int i = 0;

        for (int i = 0; i <= last; i++)
        {
            newElement[i] = element[i];
        };
        last++;
        newElement[last] = x;
        delete[] element;
        element = newElement;
    }

    /* Normal */
    else
    {
        last++;
        element[last] = x;
    }
}

bool StringSet::empty() const
{
    if (last == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int StringSet::size() const
{
    return last + 1;
}

/* binary search */
int StringSet::find(const string& x) const
{
    int i, first, last1, mid;
    bool check = true;
    first = 0;
    last1 = this->last;
    mid = last1 / 2;
    while (element[mid] != x&&element[mid+1] != x)
    {
        if (element[mid] < x)
        {
            first=mid;
        }
        if (element[mid] > x)
        {
            last1=mid;
        }
        mid = (first + last1) / 2;
        if (last1 == first + 1 && (element[first] != x) & (element[last1] != x))
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        if (element[mid] == x)
        {
            return mid;
        }
        else
        {
            return mid + 1;
        }
    }
    else
    {
        return -1;
    }
}

void StringSet::erase(const string &x)
{
    int i, j;
    for (i = 0; i <= last; i++)
    {
        if (element[i] == x)
        {
            for (j = i; j < last; j++) 
            {
                element[j] = element[ j + 1];
            }
            last--;
        }
    }
}

void StringSet::insert(const string &x)
{
    bool check = false;
    int i, j;
    /* Already exist element */
    for (i = 0; i <= last; i++)
    {
        if (element[i] == x)
        {
            check = true;
            break;
        }
    }
    /* Element does not exist */
    if (check == false)
    {
        if (last + 1 < capacity)
        {
            if (element[last] < x)
            {
                last++;
                element[last] = x;
            }
            else
            {
                for (i = 0; i <= last; i++)
                {
                    if(element[i] > x)
                    {
                        break;
                    }
                }
                last++;
                for (j = last; j > i; j--)
                {
                    element[j] = element[j - 1];
                }
                element[i] = x;
            }
        }
        else
        {
            capacity = 2 * capacity + 1;
            string *newElement = new string[capacity];
            if (element[last] < x)
            {
                for (i = 0; i <= last; i++)
                {
                    newElement[i] = element[i];
                }
                last++;
                newElement[last] = x;
                delete[] element;
                element = newElement;
            }
            else
            {
                for (i = 0; i <= last; i++)
                {
                    if(element[i] > x)
                    {
                        break;
                    }
                }
                last++;
                for (j = 0; j < i; j++)
                {
                    newElement[j] = element[i];
                }
                for (j = last; j > i; j--)
                {
                    newElement[j] = element[j - 1];
                }
                newElement[i] =x ;
                delete[] element;
                element = newElement;
            }
        }
    }
}

StringSet& StringSet::operator=(const StringSet& asset)
{
    capacity = asset.capacity;
    last = asset.last;
    element = new string[capacity];
    for (int i = 0; i <= last; i++)
    {
        element[i] = asset.element[i];
    }
    return *this;
}

const StringSet StringSet::operator+(const StringSet& asset)
{
    for(int i = 0; i <= asset.size(); i++)
    {
        append(asset.element[i]);
    }
    sort();
}

void StringSet::output()
{
    for (int i = 0; i <= last; i++)
    {
        cout << element[i] << "   ";
    }
}

void StringSet::sort()
{
    string temp;
    int i, j;
    for (i = 0; i < last; i++)
    {
        for (j = i + 1; j <= last; j++)
        {
            if (element[i] > element[j])
            {
                temp = element[i];
                element[i] = element[j];
                element[j] = temp;
            }
        }
    }
}