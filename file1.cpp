#include <iostream>
#include <string>
using namespace std;

class Conversion
{
public:
	string convert(int number) {
		string ones[] = {
			"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twevle","Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
		};
		string tens[] = {
			"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"
		};
		if (number == 0) {
			return "zero";
		}
		else if (number < 20) {
			return ones[number];
		}
		else if (number < 100) {
			return tens[number / 10] + " " + ones[number % 10];
		}
		else if (number < 1000) {
			return ones[number / 100] + " hundred and " + convert(number % 100);
		}
		else {
			return convert(number / 1000) + " thousand " + convert(number % 1000);
		}
	}
};

int main()
{
	Conversion obj;
	int n;
	cout << "Enter the number : ";
	cin >> n;
	cout << "Result : " << obj.convert(n) << endl;;
}