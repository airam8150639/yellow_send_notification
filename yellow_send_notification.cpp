#include <iostream>

using namespace std;

class INotifier {
public: 
	virtual void  Notify(const string& message) const = 0;
};

class SmsNotifier : public INotifier {
public:
	SmsNotifier(const string& number) : number_(number) {}; 
	void Notify (const string& message) const override  {
		SendSms(number_, message);
	}
private:
	string number_;
};

class EmailNotifier : public INotifier {
public:
	EmailNotifier(const string& email) : email_(email) {};
	void Notify(const string& message) const override {
		SendEmail(email_, message);
	}
private:
	string email_;
};

