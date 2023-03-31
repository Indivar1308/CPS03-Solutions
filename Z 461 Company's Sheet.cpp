/*
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
def countInversions(arr, l, r):
    if l >= r:
        return 0

    m = (l + r) // 2
    count = countInversions(arr, l, m) + countInversions(arr, m+1, r)

    i = l
    j = m + 1
    temp = []
    inversions = 0

    while i <= m and j <= r:
        if arr[i] <= arr[j]:
            temp.append(arr[i])
            i += 1
        else:
            temp.append(arr[j])
            j += 1
            inversions += m - i + 1

    temp.extend(arr[i:m+1])
    temp.extend(arr[j:r+1])
    arr[l:r+1] = temp

    return count + inversions

n = int(input())
arr = [int(input()) for _ in range(n)]

print(countInversions(arr, 0, n-1))*/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Employee {
    char name[55];
    int salary;
};

bool cmp(const Employee& e1, const Employee& e2) {
    if (e1.salary != e2.salary) {
        return e1.salary < e2.salary;
    } else {
        return strcmp(e1.name, e2.name) < 0;
    }
}

int main() {
    int n;
    cin >> n;

    Employee employees[n];
    for (int i = 0; i < n; i++) {
        cin >> employees[i].name >> employees[i].salary;
    }

    sort(employees, employees + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << employees[i].name << " " << employees[i].salary << endl;
    }

    return 0;
}

