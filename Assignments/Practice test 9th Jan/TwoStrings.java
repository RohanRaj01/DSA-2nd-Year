// https://www.hackerrank.com/challenges/two-strings/problem?isFullScreen=true

class Result {

    /*
     * Complete the 'twoStrings' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s1
     *  2. STRING s2
     */

    public static String twoStrings(String s1, String s2) {
    // Write your code here
        
        String str = s1.replaceAll("["+s2+"]", "");
        if(str.length() < s1.length()){
            return "YES";
        }
        
        return "NO";

    }

}
