mod solution;
use std::io::Write;

macro_rules! readln {
    ($($var:expr),*) => {{
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).unwrap();
        let parts: Vec<&str> = buf.trim().split(" ").collect();
        let mut i: usize = 0;
        $(
            assert!(i < parts.len(), "input format incorrect: too few values on this line"); 
            $var = parts[i].parse().unwrap();
            i += 1;
        )*
        assert!(i == parts.len(), "input format incorrect: too many values on the line")
    }};
}


fn main() {
    // checkpoint
    println!("{}", 0);
    // read n
    let n: i64;
    std::io::stdout().flush().unwrap();
    readln!(n);
    // for i to n {...}
    let mut a: Vec<i64> = Vec::new();
    a.resize(n as usize, 0);
    for i in 0..n {
        // read a[i]
        std::io::stdout().flush().unwrap();
        readln!(a[i as usize]);
    }
    // call index = max_index(n, a)
    let index: i64;
    index = solution::max_index(n, a);
    // write index
    println!("{}", index);
    // exit
    std::process::exit(0);
}
