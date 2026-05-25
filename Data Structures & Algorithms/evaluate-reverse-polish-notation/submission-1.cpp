class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        //duyet tat ca phan tu trong string
        for(string s : tokens)
        {
            //neu la dau thi lau 2 so trong stack de tinh
            if(s=="+" || s=="-" || s=="*" || s=="/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if(s=="+") st.push(b+a);
                else if(s=="-") st.push(b-a);
                else if(s=="*") st.push(b*a);
                else st.push(b/a);
            }
            //neu la so thi dua vao trong stack
            else
            {
                st.push(stoi(s));//stoi chuyen day string thanh so nguyen int
            }
        }
        return st.top();
    }
};
