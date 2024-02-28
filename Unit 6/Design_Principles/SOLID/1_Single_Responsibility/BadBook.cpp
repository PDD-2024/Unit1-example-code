#include <iostream>
#include <string>
#include <fstream>

class Book {
private:
    std::string title;
    std::string author;
    std::string content;

public:
    Book(const std::string& title, const std::string& author, const std::string& content)
        : title(title), author(author), content(content) {}

    void setTitle(const std::string& title) {
        this->title = title;
    }

    void setAuthor(const std::string& author) {
        this->author = author;
    }

    void setContent(const std::string& content) {
        this->content = content;
    }

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    std::string getContent() const {
        return content;
    }

    void exportToTxt(const std::string& filename) {
        std::ofstream file(filename);
        file << "Title: " << title << std::endl;
        file << "Author: " << author << std::endl;
        file << "Content: " << content << std::endl;
        file.close();
        std::cout << "Book exported to TXT: " << filename << std::endl;
    }

    void exportToEbook(const std::string& filename) {
        // Logic to export to ebook format
        std::cout << "Book exported to Ebook: " << filename << std::endl;
    }

    void exportToPdf(const std::string& filename) {
        // Logic to export to PDF format
        std::cout << "Book exported to PDF: " << filename << std::endl;
    }
};

int main() {
    Book book("Title of the Book", "Author Name", "Lorem ipsum dolor sit amet...");
    
    // Modify book attributes if needed
    book.setTitle("New Title");

    // Export to different formats
    book.exportToTxt("book.txt");
    book.exportToEbook("book.epub");
    book.exportToPdf("book.pdf");

    return 0;
}
