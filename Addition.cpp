#include <iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"Enter the number of rows in the matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in the matrix: ";
    cin>>n;
    int a[m][n],b[m][n],sum[m][n];
    cout<<"Enter the elements of the 1st Matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the ["<<i+1<<","<<j+1<<"]th element: ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the 2nd Matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the ["<<i+1<<","<<j+1<<"]th element: ";
            cin>>b[i][j];
        }
    }
    cout<<"Matrix 1 ="<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2 ="<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    cout<<"Sum ="<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
}}


//OUTPUT:
/* Enter the number of rows in the matrix: 2
Enter the number of columns in the matrix: 2
Enter the elements of the 1st Matrix: 
Enter the [1,1]th element: 1
Enter the [1,2]th element: 2
Enter the [2,1]th element: 3
Enter the [2,2]th element: 4
Enter the elements of the 2nd Matrix: 
Enter the [1,1]th element: 1
Enter the [1,2]th element: 2
Enter the [2,1]th element: 3
Enter the [2,2]th element: 4
Matrix 1 =
1 2 
3 4 
Matrix 2 =
1 2 
3 4 
Sum =
2 4 
6 8   */
