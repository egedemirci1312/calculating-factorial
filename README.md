# calculating-factorial
I actually want to talk about RAM here, because it can help you understand this topic more easily and save you from a lot of confusing work. However, i don’t think i can explain it with my poor explanation skills, so ill try to keep it simple.

What i really want to explain is why we use another int variable to store the input.

The answer is simple. When we use an int variable, were using space from our Random Access Memory (RAM). An int usually takes 4 bytes of memory. Those 4 bytes are used to store our input, whether  if it is a number or another value.

When we assign a value to an int, that value is stored in those 4 bytes. However, if we perform operations like addition, subtraction, division, or anything else that messes up with our original value, the original value is overwritten by our new value.

For example, if our input is 3 and we write:

input++;


The value stored in memory becomes 4, and we lose the original value 3.

That is why we use a different variable (another int) as a backup. For example:

int ily;
int iloveyou = ily;


After this, even if we change the original variable, we can still access the original value using the backup variable. This allows us to use the original input whenever we need it.

I hope this explanation helps someone. If youre reading this, thank you 🙂
