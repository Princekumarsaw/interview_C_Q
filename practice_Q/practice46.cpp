#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter total income: ";
	double income;
	cin>>income;
	
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	unordered_map<string, int>mp;
	vector<double>expenses;
	
	while(true){
		cout<<"enter type of material (or 'done' to finish): ";
		string cat="";
		int exp;
		getline(cin, cat);
		
		if(cat == "done" || cat == "DONE"){
			break;
		}
		
		cin>>exp;
		cin.ignore();
		
	for(mp.find(cat)==mp.end()){
		v.push_back(cat);
	}
	mp[cat]+=exp;
	total_expense+=exp;
}
	
	double totalSaving = income - total_expense;
	
	cout<<"\n--- Summary ---\n";
	cout<<"Total Income: "<<income<<endl;
	cout<<"Total Expenditure: "<<total_expese<<endl;
	cout<<"Total saving: "<<totalSaving<<endl;
	
	cout<<"\nExpenditures: \n";
	for(size i=0;i<meterials.size();i++){
		cout<<materials[i]<<" :"<<expenses[i]<<endl;
	}
	return 0;
}




//int main(){
//	cout<<"enter your income: ";
//	int income;
//	cin>>income;
//	int totalexpenditure=0;
//	int totalsaving=0;
//	
//	cout<<"how many material: ";
//	int material;
//	cin>>material;
//
//    vector<string>s;
//    while(true){
//		cout<<"enter type of material: ";
//		string s;
//		getline(cin, s);
//		
//		if(s == "done" || s == "DONE"){
//			break;
//		}
//		s.push_back(material);
//    }
//	
//	int arr[material];
//	for(int i=0;i<material;i++){
//		cout<<"expediture cost: ";
//		cin>>arr[i];
//	}
//	for(int i=0;i<material;i++){
//		totalexpenditure=totalexpenditure+arr[i];
//	}
//	
//	totalsaving=income-totalexpenditure;
//	
//	cout<<"\n--- Summary ---\n";
//	cout<<"Total Income: "<<income<<endl;
//	cout<<"Total Expenditure: "<<totalexpenditure<<endl;
//	cout<<"Total saving: "<<totalsaving<<endl;
//	
//	cout<<"\nExpenditures: \n";
////	for(int i=0;i<material;i++){
////		cout<<material;
////	}
//}















//int main(){
//	cout<<"enter a string: ";
//	string input;
//	getline(cin, input);
//	
//	if(input.empty()){
//		cout<<"Inavlid input "<<endl;
//		return 0;
//	}
//	
//	unordered_map<char, int> frequency;
//	unordered_map<char, int> firstindex;
//	
//	for(int i=0;i<(int)input.size();i++){
//		char c=input[i];
//		frequency[c]++;
//		if(firstindex.find(c) == firstindex.end()){
//			firstindex[c]= i;
//		}
//	}
//	
//	char firstnonrepeating = '\0';
//	bool hasnonrepeating = false;
//	for(int i=0;i<(int)input.size();i++){
//		char c = input[i];
//		if(frequency[c]==1){
//			firstnonrepeating =c;
//			hasnonrepeating = true;
//			break;
//		}
//	}
//	
//	int maxfreq =0;
//	for (auto &kv :frequency
//){
//		
//	}
//}
