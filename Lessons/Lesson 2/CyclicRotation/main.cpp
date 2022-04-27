#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    if(A.size() == 0 || K == 0 || K == (int)A.size())
    {
        return A;
    }
    int i = 0;
    while(i < K)
    {
        A.insert(A.begin(), A[A.size() - 1]);
        A.pop_back();
        i++;
    }
    return A;
}

void DisplayVector(vector<int> &v)
{
    for (auto i: v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}





int main() {
    vector<int> v = {3, 8, 9, 7, 6};

    auto result = solution(v, 3);
    cout << "Result: " << endl;
    DisplayVector(result);

    v = {0, 0, 0};
    result = solution(v, 1);
    cout << "Result2: " << endl;
    DisplayVector(result);

    v = {1, 2, 3, 4};
    result = solution(v, 4);
    cout << "Result3: " << endl;
    DisplayVector(result);


    return 0;

}
