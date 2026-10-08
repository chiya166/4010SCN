#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;
    int pageCount;

public:

        Book(const std::string& newTitle, const std::string& newAuthor, int newPublicationYear, int pages)    
        : title(newTitle), author(newAuthor), publicationYear(newPublicationYear) { setPageCount(pages);

    }

    void display() const {
        std::cout << "Title: " << title << '\n';
        std::cout << "Author: " << author << '\n';
        std::cout << "Publication year: " << publicationYear << '\n';
    }

    void displayPageCount() const {
        std::cout << "Pages: " << pageCount << '\n';
    }

    void setPublicationYear(int newPublicationYear) {
        if (newPublicationYear > 0) {
            publicationYear = newPublicationYear;
        } else {
            std::cout << "Publication year must be positive. Change rejected.\n";
        }
    }

    void setPageCount(int pages) {
        if (pages > 0) {
            pageCount = pages;
        } else {
            pageCount = 1;
        }
}
};

class Movie {
private:
    std::string title;
    int ageRating;
    int runningMinutes;

    public:
    Movie(const std::string& newTitle, int newAgeRating, int newRunningMinutes)
        : title(newTitle), ageRating(newAgeRating), runningMinutes(newRunningMinutes) {
    }

    void display() const {
    std::cout << "Title: " << title << '\n';
    std::cout << "Age rating: " << ageRating << '\n';
    std::cout << "Running time: " << runningMinutes << " minutes\n";
}

void setAgeRating(int newAgeRating) {
    if (newAgeRating >= 0) {
        ageRating = newAgeRating;
    } else {
        ageRating = 0;
    }
}
bool isSuitableForAge(int age) const {
    return age >= ageRating;
}
};
    

int main() {
    Book favouriteBook("The Hobbit", "J. R. R. Tolkien", 1937, 310);
    Book brokenBook("Mystery Book", "Unknown", 2026, -50);
    Movie favouriteMovie("Inception", 12, 148); 

    favouriteMovie.display();
    favouriteMovie.setAgeRating(-5);
    favouriteMovie.display();

    std::cout << "Suitable for age 15: "
          << favouriteMovie.isSuitableForAge(15) << '\n';
          std::cout << "Suitable for age 15: "
          << favouriteMovie.isSuitableForAge(15) << '\n';

    brokenBook.displayPageCount();

    favouriteBook.display();
    favouriteBook.displayPageCount();
    favouriteBook.setPublicationYear(0);
    favouriteBook.display();

    return 0;
}
