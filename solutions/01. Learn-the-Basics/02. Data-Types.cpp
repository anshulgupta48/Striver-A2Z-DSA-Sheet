// ******** Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help. Given a data type, help Geek in finding the size of it in byte. Data Type - Character, Integer, Long, Float and Double. ********

// <======== Example ========>
// Input: Character
// Output: 1

// Input: Integer
// Output: 4




class Solution{
  public:
    int dataTypeSize(string str) {
        if(str == "Character") {
            return 1;
        }
        else if(str == "Integer" || str == "Float") {
            return 4;
        }
        else if(str == "Double" || str == "Long") {
            return 8;
        }
    }
};