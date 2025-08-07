#include <iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"Enter the number of rows in the matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in the matrix: ";
    cin>>n;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the ["<<i+1<<","<<j+1<<"]th element: ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


//OUTPUT:

/*Enter the number of rows in the matrix: 2
Enter the number of columns in the matrix: 2
Enter the [1,1]th element: 1
Enter the [1,2]th element: 2
Enter the [2,1]th element: 3
Enter the [2,2]th element: 4
1 2 
3 4 */
