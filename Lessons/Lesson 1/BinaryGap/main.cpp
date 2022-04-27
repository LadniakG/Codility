#include <iostream>
using namespace std;

string ConvertDecimalToString(int N){
    string r;
    while(N!=0){
        r = ( N % 2 == 0 ? "0" : "1" ) + r;
        N /= 2;
    }
    cout << r << endl;
    return r;
}
int solution(int N){
    string converted = ConvertDecimalToString(N);
    int count1 = 0;
    int count0 = 0;
    int result = 0;
    //Count the number of 1's between 0 and converted.length()
    for(int i=0; i<converted.length(); i++){
        if(converted[i] == '1'){
            count1++;
        }else if(converted[i] == '0' && count1 != 0){
            count0++;
        }
        if(count1 == 2){
            if(count0 > result){
                result = count0;
            }
            count0 = 0;
            count1 = 1;
        }
    }
    return result;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    /*cout << "9 " << solution(9) << endl;
    cout << "529 " << solution(529) << endl;
    cout << "32 " << solution(32) << endl;
    cout << "20 " << solution(20) << endl;
    cout << "1041 " << solution(1041) << endl;
    cout << "15 " << solution(15) << endl;*/
    cout << "328 " << solution(328) << endl;

}
