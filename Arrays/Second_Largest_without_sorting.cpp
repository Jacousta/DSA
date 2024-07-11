// classSolution {
//   public:
//     // Function returns the second
//     // largest elements
//     int largest=-1;
//     int secondlargest=-1;
//     int print2largest(vector<int> &arr) {
//         // Code Here
//         int n=arr.size();
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]>largest )
//             {
//                 secondlargest=largest;
//                 largest=arr[i];
//             }
//             else if(arr[i]>secondlargest && arr[i]<largest)
//             {
//                 secondlargest=arr[i];
//             }
//         }
//         return secondlargest;
//     }
// };