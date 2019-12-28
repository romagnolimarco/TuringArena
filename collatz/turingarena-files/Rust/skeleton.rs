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
    // call iterazioni = collatz(n)
    let iterazioni: i64;
    iterazioni = solution::collatz(n);
    // write iterazioni
    println!("{}", iterazioni);
    // exit
    std::process::exit(0);
}
