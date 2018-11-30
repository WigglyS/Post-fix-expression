#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int i = 0;
stack<char> NumberHolder;

void main() {
	string userinput;
	int Result;
	cout << "Enter the Post-Fix Expression with spaces between each number or operator: ";
	cin >> userinput;

	char C = userinput[i +1];
	
	while (C != NULL) {
		cout << userinput[i];
		string tempstring;
		int x;
		int y;
		if (userinput[i] >= '0') {
			NumberHolder.push(userinput[i]);
		}
		else {

			switch (userinput[i])	{

			case '+':
				x = ((NumberHolder.top()) - '0');
				NumberHolder.pop();
				y = ((NumberHolder.top()) - '0');
				NumberHolder.pop();

				NumberHolder.push(y + x);
				break;
			case '-':
				x = ((NumberHolder.top()) - '0');
				NumberHolder.pop();
				y = ((NumberHolder.top()) - '0');
				NumberHolder.pop();


				NumberHolder.push(y - x);
				break;
			case '*':
				x = ((NumberHolder.top()) - '0');
				NumberHolder.pop();
				y = ((NumberHolder.top()) - '0');
				NumberHolder.pop();

				NumberHolder.push(y * x);
				break;
			case '/':
				x = ((NumberHolder.top()) - '0');
				NumberHolder.pop();
				y = ((NumberHolder.top()) - '0');
				NumberHolder.pop();

				NumberHolder.push(y / x);
				break;
			case '%':
				x = ((NumberHolder.top()) - '0');
				NumberHolder.pop();
				y = ((NumberHolder.top()) - '0');
				NumberHolder.pop();

				NumberHolder.push(y % x);
				break;
			case ' ':

				break;



				/*case '^':
					x = ((NumberHolder.top()) - '0');
					NumberHolder.pop();
					y = ((NumberHolder.top()) - '0');
					NumberHolder.pop();

					NumberHolder.push(y exp(x));
					break;
				*/

				}
			}
		i++;
		}
	cout << "the Result is : " << NumberHolder.top();
	system("pause");
	

}
