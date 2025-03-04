#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void ReadReviews(vector<string> &reviewList) {
   ifstream reviewsFS;
   string review;

   reviewsFS.open("reviews.txt");

   if (!reviewsFS.is_open()) {
      cout << "Could not open file reviews.txt." << endl;
   }
   else {
      getline(reviewsFS, review);
      while (!reviewsFS.fail()) {
         reviewList.push_back(review);
         getline(reviewsFS, review);
      }

      reviewsFS.close();
   }
}

void DisplayReviews(const vector<string> &reviewList) {
   cout << endl << "Reviews:" << endl;
   for (int i = 0; i < reviewList.size(); i++) {
      cout << i + 1 << ". " << reviewList.at(i) << endl;
   }
   cout << endl;
}

void SaveReviews(const vector<string> &reviewList) {
   ofstream reviewsFS;
   reviewsFS.open("reviews.txt");
   
   if (!reviewsFS.is_open()) {
      cout << "Could not open file reviews.txt for writing." << endl;
      return;
   }
   
   for (int i = 0; i < reviewList.size(); i++) {
      reviewsFS << reviewList.at(i) << endl;
   }
   
   reviewsFS.close();
   cout << "Reviews saved successfully to reviews.txt" << endl;
}

int main() {
   vector<string> reviewList;
   string newReview;

   // Read reviews from file into reviews vector and display
   ReadReviews(reviewList);
   DisplayReviews(reviewList);
   
   cout << "Enter new review or QUIT:" << endl;
   getline(cin, newReview);
   while (newReview != "QUIT") {
      // Add new reviews to the vector and display new list
      reviewList.push_back(newReview);
      DisplayReviews(reviewList);

      cout << "Enter new review or QUIT:" << endl;
      getline(cin, newReview);
   }
   
   // Save all reviews back to the file
   SaveReviews(reviewList);

   return 0;
}