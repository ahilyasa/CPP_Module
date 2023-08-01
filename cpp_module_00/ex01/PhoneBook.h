#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include "Contact.h"

class PhoneBook
{
	public:
		PhoneBook();
		bool addContact(const string &firstname,const string &lastname,const string &nickname,const string &phonenumber,const string &darkestsecret);
		bool showContactId(int index);
		void showContacts();
		bool searchID(int index);
		int	getSize();
		const string formatString(const string &text);
		bool isNumber(const string text);
	private:
		Contact _contacts[8];
		int	index;
		int	size;
};

#endif