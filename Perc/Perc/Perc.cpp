#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

namespace std{

	class Perceptron{
		vector<double> Weight;
		vector<double> Prim;
		
		double mOfSet;
		double ans;
		double Sum = 0;
		int In = 2;
		double IdealAns;

		void GetIdalAns() {
			cout << "идельный ответ";
			cin >> IdealAns;
		}
		void CreateWeight() {
			for (int i = 0; i < In; i++)
				Weight.push_back((double)rand()/RAND_MAX);
			mOfSet = (double)rand() / RAND_MAX;
		}

		void CreatePrim() {
			cout << "входной вектор";
			for (int i = 0; i < In; i++) {
				int a;
				cin >> a;
				Prim.push_back(a);
			}			 
		}

		double d_activation(double aSS) {
			return activation(aSS) * (1 - activation(aSS));
		}

		double activation (double aSS){
			return 1. / (1. + exp(-aSS));
		}

		void Sum(){
			for (int i = 0; i < In; i++) {
				Sum += Weight[i] * Prim[i];
			}
			Sum += 0.3;
			ans = Sum;
		}

		double output() {
			double out = ans;
			return activation(out);
		}

		void ChangeWeight() {
			double error, t;
			error = IdealAns - output();
			t = error * d_activation(ans);
			for (int i = 1; i < In; i++) {
				Weight[i] += Prim[i] * t * 0.3;		
			}
		}
	};

	int main()
	{	
		Perceptron CreateWeight();
		Perceptron 
		Perceptron CreatePrim();
		Perceptron 

	}

}