using System;

public class Solution {
    public int solution(string ineq, string eq, int n, int m)
{
    int answer = 0;
    //ineq : <> eq : != 
    if (ineq == "<")
    {
        if (eq == "!")
        {
            answer = (n < m) ? 1 : 0;
        }
        else if (eq == "=")
        {
            answer = (n <= m) ? 1 : 0;
        }
    } else if (ineq == ">")
    {
        if (eq == "!")
        {
            answer = (n > m) ? 1 : 0;
        }
        else if (eq == "=")
        {
            answer = (n >= m) ? 1 : 0;
        }
    }

    return answer;
}
}