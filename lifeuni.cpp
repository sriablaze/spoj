#include<iostream>
using namespace std;

class Life {
    static const int kAnswerForLife = 42;
    int a[10];

    public:

    void input(int);
    void display(int);
};

void Life :: input(int n) {
    cout << "Please enter the elements one by one: \n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == kAnswerForLife)
            break;
    }
}

void Life :: display(int n) {
    cout << "The answer to life universe and everything is:";
    for (int i = 0; i < n; i++) {
        if (a[i] != kAnswerForLife)
            cout << "\n" << a[i];
    }
    cout << "\nEnd\n";
}

int main() {
    int n;
    cout << "Please enter the number of elements that the array can contain: ";
    cin >> n;
    Life l;
    l.input(n);
    l.display(n);
}
