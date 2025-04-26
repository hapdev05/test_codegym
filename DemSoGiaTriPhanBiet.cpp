#include <iostream>
#include <set>
using namespace std;

int* nhapMang(int& n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "So luong phan tu phai lon hon 0!" << endl;
        return nullptr;
    }
    
    int* arr = new int[n];
    
    cout << "Nhap cac phan tu cua mang:\n";
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    return arr;
}

int demSoPhanTuPhanBiet(int arr[], int n) {
    set<int> uniqueElements;
    for(int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }
 
    return uniqueElements.size();
}

int main() {
    int n;
    int* arr = nhapMang(n);
    
    if (arr == nullptr) {
        return 1;
    }
    
    int soLuongPhanBiet = demSoPhanTuPhanBiet(arr, n);
    
    if (soLuongPhanBiet == 1) {
        cout << "Mang rong" << endl;
    } else {
        cout << "So luong gia tri phan biet trong mang la: " << soLuongPhanBiet << endl;
    }
    delete[] arr;
    return 0;
}