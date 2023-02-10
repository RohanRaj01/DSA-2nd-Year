// https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true

class Result {

    /*
     * Complete the 'camelcase' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.
     */

    public static int camelcase(String s) {
    // Write your code here
    
        int len = s.length();
        if(len == 0){
            return 0;
        }
        int count = 1;
    
        for (int i = 0; i < len; i++) {
            char ch = s.charAt(i);
            if(Character.isUpperCase(ch)){
                count++;
            }
        }
        
        return count;

    }

}
