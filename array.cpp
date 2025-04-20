#include<iostream>
using namespace std;

// find smallest number

// int main(){
//     int size = 5;

//     int arr[size];

//     int smallest = __INT_MAX__;

//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<size;i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//         }
//         }
//         cout<<smallest;
//         return 0;
// }

int main(){
    int size = 5;
    int arr[size];
    int smallest =  __INT_MAX__;
    int largest = INT8_MIN; // Initialize largest with the smallest possible integer value
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    for(int i =0;i<size;i++){
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
        // if(arr[i]<smallest){
        //     smallest = arr[i];
        // }
        // if(arr[i]>largest){
        //     largest = arr[i];
        // }
        
    }
        cout<<endl;
        cout<<smallest<<" ";
        cout<<largest<<" ";
}




// largest number :

// int main(){
//     int size = 5;
//     int arr[size];
//     int largest = INT8_MIN; // Initialize largest with the smallest possible integer value
 
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }

//     // Find the largest element
//     for(int i = 0; i < size; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     } 


//     cout << largest;
//     return 0;
// }


// Min / Max concept :

// int main(){
//     int size = 5;
//     int arr[size];
//     int smallest = __INT_MAX__;
//     int largest = INT8_MIN; // Initialize largest with the smallest possible integer value

//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }

//     // Find the largest element
//     for(int i = 0; i < size; i++){
//         smallest= min(arr[i], smallest);
//         largest = max(arr[i], largest);
//         }

//     cout<<smallest<<endl;
//     cout << largest;
//     return 0;
// }


// pair equal to 10;

// int main()
// {

//     int arr[] = {1, 3, 4, 5, 6};
//     int pairsum = 10;

//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << size << endl;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == pairsum)
//             {
//                 cout << arr[i] << "-" << arr[j] << endl;
//             }
//         }
//     }
// }


// other method by using map;

// #include<iostream>
// #include<unordered_map>

// using namespace std;

// int main()
// {

//     int arr[] = {1, 3, 4, 5, 6};
//     int pairsum = 10;

//     int size = sizeof(arr) / sizeof(arr[0]);

//     unordered_map<int,bool> map;

//     cout << size << endl;

//     for (int i = 0; i < size; i++)
//     {
//         int compliment = pairsum - arr[i];
//             if (map[compliment]== true)
//             {
//                 cout << arr[i] << "-" << compliment << endl;
//             }
//             map[arr[i]] = true;
//     }

// }

// Addition of numbers of digit . :

// int main()
// {

//     int num = 1234;
//     int tsum = 0;
//     while (num > 0)
//     {
//         int sum = 0;
//         int temp = num;
//         int d = 1;
//         while (temp > 10)
//         {
//             temp = temp / 10;
//             d = d * 10;
//         }
//         temp = num;

//         while (temp > 0)
//         {
//             sum += temp % 10;
//             temp = temp / 10;
//         }
//         tsum += sum;
//         num %= d;
//     }
//     cout << tsum;
// }

// other way

// int main() {
//     int num = 1234;
//     int totalSum = 0;

//     while (num > 0) {
//         int currentNum = num;
//         int sum = 0;

//         // Calculate the sum of the digits of the current number
//         while (currentNum > 0) {
//             sum += currentNum % 10;
//             currentNum /= 10;
//         }

//         totalSum += sum;

//         // Remove the most significant digit
//         int d = 1;
//         while (num / (d * 10) > 0) {
//             d *= 10;
//         }
//         num %= d;
//     }

//     cout << totalSum << endl;
//     return 0;
// }


// subarray problem 

// int main(){

//     int n =5;
//     int arr[] = {2,3,-5,7,6};

//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// subarray problem with sum =0 :
// int main() {
//     int n = 5;
//     int arr[] = {2, 3, -5, 7, 6};

//     for (int st = 0; st < n; st++) {
//         for (int end = st; end < n; end++) {
//             int sum = 0;
//             for (int i = st; i <= end; i++) {
//                 sum += arr[i];
//                 cout << arr[i];
//             }
//             cout << " = " << sum;
//             if (sum == 0) {
//                 cout << " (Sum is 0)";
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*int main() {
    int n = 5;
    int arr[] = {2, 3, -5, 7, 6};

    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            int sum = 0;
            for (int i = st; i <= end; i++) {
                sum += arr[i];
            }
            if (sum == 0) {
                cout << "Subarray with sum 0: ";
                for (int i = st; i <= end; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
*/