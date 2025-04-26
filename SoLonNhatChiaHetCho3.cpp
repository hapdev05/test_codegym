#include <iostream>
using namespace std;

bool chiaHetCho3(int n) {
    return n % 3 == 0;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Nhap cac phan tu cua mang:\n";
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    int maxChiaHet3 = -1;
    bool timThay = false;
    
    for(int i = 0; i < n; i++) {
        if(chiaHetCho3(arr[i])) {
            if(!timThay || arr[i] > maxChiaHet3) {
                maxChiaHet3 = arr[i];
                timThay = true;
            }
        }
    }
    
    if(timThay) {
        cout << "So lon nhat chia het cho 3 la: " << maxChiaHet3 << endl;
    } else {
        cout << "Khong co so nao chia het cho 3" << endl;
    }
    
    delete[] arr;
    return 0;
}