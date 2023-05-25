#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

class Question {
private:
    int score;
    int totalQuestions;
    int correctAnswers;
    int option;

    struct QuizQuestion {
        string text;
        string answer;
    };

    void multichoice() {
    struct MultipleChoiceQuestion {
        string text;
        string options[4];
        int correctOption;
    };

    MultipleChoiceQuestion questions[] = {
        {
            "Question 1: What is the capital of France?",
            {"1. Rome", "2. London", "3. Paris", "4. Berlin"},
            3
        },
        {
            "Question 2: Which is the largest planet in our solar system?",
            {"1. Venus", "2. Mars", "3. Jupiter", "4. Saturn"},
            3
        },
         {
            "Question 3: Who painted the Mona Lisa?",
            {"1. Vincent van Gogh", "2. Pablo Picasso", "3. Leonardo da Vinci", "4. Michelangelo"},
            3
        },
        {
            "Question 4: What is the chemical symbol for gold?",
            {"1. Au", "2. Ag", "3. Hg", "4. Fe"},
            1
        },
        {
            "Question 5: What is the largest ocean in the world?",
            {"1. Atlantic Ocean", "2. Indian Ocean", "3. Southern Ocean", "4. Pacific Ocean"},
            4
        },
        {
            "Question 6: Which country is famous for the Great Wall?",
            {"1. China", "2. Italy", "3. Egypt", "4. India"},
            1
        },
        {
            "Question 7: Who wrote the play Romeo and Juliet?",
            {"1. William Shakespeare", "2. George Bernard Shaw", "3. Arthur Miller", "4. Tennessee Williams"},
            1
        },
        {
            "Question 8: What is the tallest mountain in the world?",
            {"1. Mount Everest", "2. K2", "3. Mount Kilimanjaro", "4. Mount McKinley"},
            1
        },
        {
            "Question 9: Which animal is known as the 'King of the Jungle'?",
            {"1. Elephant", "2. Tiger", "3. Lion", "4. Giraffe"},
            3
        },
        {
            "Question 10: Who invented the telephone?",
            {"1. Thomas Edison", "2. Alexander Graham Bell", "3. Nikola Tesla", "4. Isaac Newton"},
            2
        },
        // Add more questions and answers as needed
    };

    totalQuestions = sizeof(questions) / sizeof(MultipleChoiceQuestion);
    correctAnswers = 0;
    score = 0;

    for (int i = 0; i < totalQuestions; i++) {
        cout << questions[i].text << endl;
        
        for (int j = 0; j < 4; j++) {
            cout << questions[i].options[j] << endl;
        }

        int userChoice;
        cout << "Enter your choice (1-4): ";
        cin >> userChoice;

        if (userChoice == questions[i].correctOption) {
            cout << "Correct answer!" << endl;
            correctAnswers++;
            score++;
        } else {
            cout << "Wrong answer!" << endl;
        }
        cout << endl;
    }
}

    void true_or_false() {
        QuizQuestion questions[] = {
          {
            "Question 1: The sun is a star. (True/False)",
            "True"
        },
        {
            "Question 2: The Earth is flat. (True/False)",
            "False"
        },
        {
            "Question 3: Penguins can fly. (True/False)",
            "False"
        },
        {
            "Question 4: Water boils at 100 degrees Celsius. (True/False)",
            "True"
        },
        {
            "Question 5: DNA stands for Deoxyribonucleic acid. (True/False)",
            "True"
        },
        {
            "Question 6: Mount Everest is the tallest mountain in the world. (True/False)",
            "True"
        },
        {
            "Question 7: The Great Wall of China is visible from space. (True/False)",
            "False"
        },
        {
            "Question 8: The Mona Lisa was painted by Vincent van Gogh. (True/False)",
            "False"
        },
        {
            "Question 9: Oxygen is the most abundant element in the Earth's atmosphere. (True/False)",
            "False"
        },
        {
            "Question 10: The Statue of Liberty was a gift from France to the United States. (True/False)",
            "True"
        },
            // Add more questions and answers as needed
        };

        totalQuestions = sizeof(questions) / sizeof(QuizQuestion);
        correctAnswers = 0;
        score = 0;

        for (int i = 0; i < totalQuestions; i++) {
            cout << questions[i].text << endl;
            string userAnswer;
            cout << "Your answer (True/False): ";
            cin >> userAnswer;

            if (userAnswer == questions[i].answer) {
                cout << "Correct answer!" << endl;
                correctAnswers++;
                score++;
            } else {
                cout << "Wrong answer!" << endl;
            }
            cout << endl;
        }
    }

public:
    Question() {
        cout << "WELCOME TO THE QUIZ APP." << endl << endl;

        cout << "CHOOSE YOUR OPTION OF TYPE OF QUESTIONS:" << endl;
        cout << "1. MULTICHOICE" << endl;
        cout << "2. TRUE/FALSE" << endl;

        cin >> option;

        if (option == 1) {
            cout << "MULTICHOICE QUIZ:" << endl;
            multichoice();
        } else if (option == 2) {
            cout << "TRUE/FALSE QUIZ:" << endl;
            true_or_false();
        } else {
            cout << "INVALID OPTION. TRY AGAIN." << endl;
            Question();
        }
    }

    void displayResults() {
        
        cout << "----- Quiz Results -----" << endl;
        cout << "Total questions: " << totalQuestions << endl;
        cout << "Correct answers: " << correctAnswers << endl;
        cout << "Incorrect answers: " << totalQuestions - correctAnswers << endl;
        cout << "Score: " << score << "/" << correctAnswers  << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Question quiz;
    quiz.displayResults();
    return 0;
}
