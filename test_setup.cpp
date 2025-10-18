#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "🎉 VSCode C++ Setup is Working Perfectly!" << endl;
    cout << "GCC Version: " << __VERSION__ << endl;
    
    // Test some C++ features
    vector<string> messages = {"Hello", "World", "from", "C++"};
    
    for (const auto& word : messages) {
        cout << word << " ";
    }
    cout << endl;
    
    cout << "✅ Compiler: GCC " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << endl;
    cout << "✅ C++ Standard: " << __cplusplus << endl;
    
    return 0;
}