#include <cstdio>

struct CatalogCard{
	const char* title;
	const char* author;
	const char* publisher;
	const char* subject;
	const char* isbn;
	const char* oclc;
	short int ddc1;
	short int ddc2;
	short int year_pub;
	short int year_acq;
	short int quantity;
};


int main(){
	
	CatalogCard lc1 = {
		"Quantum Computing", "William Entangler", "New Publish",
		"Science", "151512323 2132132", "821838217804", 594,123,2012,2013,3
	};
	
	printf("Title : %s\n", lc1.title);
	printf("Author : %s\n", lc1.author);
	printf("Publisher : %s\n", lc1.publisher);
	printf("Subject : %s\n", lc1.subject);
	printf("ISBN : %s\n", lc1.isbn);
	printf("OCLC : %s\n", lc1.oclc);


	return 0;
}
