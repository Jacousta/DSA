// class Solution {
//   public:
//   long long k=0;
//     long long sumOfSeries(long long n) {
//         // code here
//         //base case
//         if(n==1)
//         {
//             k=k+1;
//         }
//         else
//         {
//             k=(n*n*n)+k;
//             sumOfSeries(n-1);
//         }
//         return k;
//     }
// };