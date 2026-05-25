class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        //Duyet tat ca phan tu trong chuoi string
        for(string x : tokens)
        {
            //Neu la dau thi lau phan tu o so o dau stack de tinh
            if(x=="+" || x=="-" || x=="*" || x=="/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (x=="+") st.push(b+a);
                else if (x=="-") st.push(b-a);
                else if (x=="*") st.push(b*a);
                else st.push(b/a);
            }
            //neu la so thi dua vao stack
            else
            {
                st.push(stoi(x)); //stoi chuyen chuoi string thanh so nguyen int
            }        
        }
        //tra ve ket qua sau khi tinh la so tren cung cua stack
        return st.top();
    }
};
