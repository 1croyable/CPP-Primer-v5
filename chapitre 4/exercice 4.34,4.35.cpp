/*
1、执行整形提升
2、if (运算对象同为带符号 || 运算对象同为无符号)
        {
            if(运算对象相同)
                执行运算过程;
            else
            {
                对象转换;  //转换的最宽。整数值将会转换成相应的浮点类型
                执行运算过程;
            }
        }
    else
    {
        if (sizeof(unsigned类型) >= sizeof (带符号类型))
        {
            带符号运算对象转换成unsigned类型;  //此时可能发生环绕
            执行运算过程；
        }
        else
        {
            if (本机器的那个unsigned类型的所有值都可以存储在该带符号类型中)
            {
                unsigned类型转换为运算另一边的那个带符号类型;
                执行运算过程;
            }
            else
            {
                带符号类型对象转换成运算另一边的那个unsigned类型;  //此时可能发生环绕
                执行运算过程；
            }
        }
    }
*/

/*
--------------------------------------------4.34
(a) float ---> bool
(b) int ---> float 执行运算后结果是float，转换成double
(c) 第一步char被提升成int 第二步int ---> double

--------------------------------------------4.35
(a) 有,int类型转换成char类型
(b) 有,int * 10结果是int,转化成unsigned int类型，最后结果转换成float类型
(c) 有,float ---> insigned int，结果转换成double
(d) 有,int ---> float, float ---> double, double ---> char
*/