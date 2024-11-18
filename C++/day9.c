#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if(angle > 0 && angle < 90){
        return 1; // 예각
    }
    if(angle == 90){
        return 2; // 직각
    }
    if(angle > 90 && angle < 180){
        return 3; // 둔각
    }
    if(angle == 180){
        return 4; // 예각
    }
}