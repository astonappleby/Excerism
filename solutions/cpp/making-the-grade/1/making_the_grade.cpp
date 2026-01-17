#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    int n = size(student_scores);
    std::vector<int> scores {};
    for(int i = 0; i <n; i++){
        scores.emplace_back(static_cast<int>(student_scores[i]));
    }
    return {scores};
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    int n = size(student_scores);
    for(int i = 0; i < n; i++){
        if(static_cast<int>(student_scores[i]) <= 40){
            count++;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int range = highest_score - 40;
    int c = range/4;
    std::array<int , 4> grades = {41, 41+c, 41+2*c, 41+3*c};
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> rank = {};
    int n = size(student_scores);
    for (int i = 0; i < n; i++){
        rank.emplace_back(std::to_string(i+1)+". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return rank;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    int n = size(student_scores);
    std::string perfect{""};
    for (int i =0; i < n; i++){
        if (student_scores[i] == 100){
            perfect = student_names[i];
            break;
        }
    }
    return perfect;
}
