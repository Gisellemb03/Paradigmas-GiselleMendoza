#include <iostream>
#include <fstream>
using namespace std;

// initialize the weigth matrix W with the patterns 
 void printw(int **W, int N)
 {

   for (int i=0; i<N; i++)
     {
       for (int j=0; j<N; j++)
      {
     cout << W[i][j] << " ";
     }
     cout << endl;
   }
 }

void weigths(int **W, int *x0, int *x1, int *x2, int *x3, int *x4, int *x5,
             int *x6, int *x7, int *x8, int *x9,  int N)
{

  for (int i=0; i<N; i++)
  for (int j=0; j<N; j++)
  {
    W[i][j] = x0[i]*x0[j] + x1[i]*x1[j];
  }
  for (int k=0; k<N; k++)
    W[k][k]=0;

}
 

// calculation of sum over j of W * S

void mul(int **W, int *s, int *h, int N)
{ 
  
  for (int i=0; i<N; i++)
  {
    int sum=0;
    for (int j=0; j<N; j++)
    { 
      sum += W[i][j] * s[j];
    }
    h[i] = sum;
  }

} 

//energy of the configuration - Ising model

int energy(int **W, int *s, int N)
{

  int E=0;
  for (int i=0; i<N; i++)
   for (int j=0; j<N; j++)
      E += W[i][j] * s[i] * s[j];
  return -E;
}

int sign(int y)
{
  if (y>0) return 1;
  else return -1;
}

int check(int *v1, int *v2, int N)
{

    for (int i=0; i<N; i++)
    {
      if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int readfile(string file, int *v1, int col, int N)
{
  // std::ifstream infile(file);
   ifstream infile;
   infile.open(file.c_str(),ios::in);
   int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
   int row=0;

   while(infile >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9>> a10) {
       std::cout << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << endl;
       v1[(row*col) + 0] = a1;
       v1[(row*col) + 1] = a2;
       v1[(row*col) + 2] = a3;
       v1[(row*col) + 3] = a4;
       v1[(row*col) + 4] = a5;
       v1[(row*col) + 5] = a6;
       v1[(row*col) + 6] = a7;
       v1[(row*col) + 7] = a8;
       v1[(row*col) + 8] = a9;
       v1[(row*col) + 9] = a10;

       //v1[(row*col) + 4] = a5;
       row++;
}
  for (int i=0; i<N; i++)
  {
   if (v1[i] == 0)
    v1[i] = -1;
   cout << v1[i];

   if (((i+1)%col) == 0)
    cout << endl;
  }
  cout << endl;
 return 0;
}


int main(void)
{
  int N = 100;
  int col = 10;
  int *x0 = new int[N];
  int *x1 = new int[N];
  int *x2 = new int [N];
  int *x3 = new int [N];
  int *x4 = new int [N];
  int *x5 = new int [N];
  int *x6 = new int [N];
  int *x7 = new int [N];
  int *x8 = new int [N];
  int *x9 = new int [N];
  //int *x10 = new int [N];  

  cout << "iterations " << endl;
 

 readfile ("one.txt", x0,col, N);
 readfile ("two.txt", x1, col, N);
 readfile ("three.txt", x2, col, N);
 readfile ("four.txt", x3, col, N);
 readfile ("five.txt", x4, col, N);
 readfile ("six.txt", x5, col, N);
 readfile ("seven.txt", x6, col, N);
 readfile ("eigth.txt", x7, col, N);
 readfile ("nine.txt", x8, col, N);
 readfile ("ten.txt", x9, col, N);


  // pattern 0
 /* x0[0] = 1;
  x0[1] = 1;
  x0[2] = 1;
  x0[3] = -1;

  //pattern 1
  x1[0] = -1;
  x1[1] = -1;
  x1[2] = -1;
  x1[3] = 1;
*/
int **W = NULL; //  allocating memory for W
  W = new int *[N];
  for (int i=0; i<N; i++)
  {
    W[i] = new int[N];
  }

for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      W[i][j]=0;

  weigths(W, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, N);
  printw(W, N);

  int *s = new int[N]; //allocation memory for s

  readfile("x2.txt", s, col, N);

  // start configuration
/*  s[0] = -1;
  s[1] = -1;
  s[2] = -1;
  s[3] = -1;
 */
  int E = energy(W,s,N);
  cout << " energy of initial configuration : " << E << endl;

 int *h = new int[N];  // allocation memory for h

  for (int p=0; p<N; p++)
   {
    h[p] = 0;
  }

  int *s1 = new int[N];

  for (int i=0; i<N; i++)
  {
    s1[i] = s[i];
  }

  int result, count;
  count = 0;
   
  do
  {

    for (int i=0; i<N; i++)
    {
      s1[i] = s[i];
    }

    mul(W,s,h,N);

   
    for (int j=0; j<N; j++)
    {
      if (h[j] !=0) {
        s[j] = sign(h[j]);
      }
      if (h[j]==0) {
        s[j] = s1[j];
      }
    }

    result = check(s, s1, N);
    count++;

    cout << endl;

   /* for (int i=0; i<N; i++)
      cout << h[i] << " ";
    cout << endl;
*/
    for (int i=0; i<N; i++){
      if (s[i] == -1)
        cout << "0" << " ";
      else
        cout << s[i] << " ";
      if (((i+1)%col) == 0 )
        cout << endl;
    }


    cout << endl;

  } while ((count < 100) && (result != 1));

  cout << "\n Number of iterations " << count << endl;

  E = energy(W,s,N);
  cout << " energy of end configuration : " << E << endl;

  delete[] x0;
  delete[] x1;
  delete[] s;
  delete[] s1;
  delete[] h;

  for (int i=0; i<N; i++) {
    delete[] W[i];
  }
  delete[] W;
}
                            
