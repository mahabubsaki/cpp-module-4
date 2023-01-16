let calling = 0;
const save = [];
const fib = (n) => {
    if (n === 0) return 0;
    if (n === 1) return 1;
    // if (save[n] !== undefined) return save[n];
    const x = fib(n - 1);
    calling++;
    const y = fib(n - 2);
    calling++;
    save[n] = x + y;
    return x + y;
};
console.log(fib(5));
console.log(save);
console.log(calling);