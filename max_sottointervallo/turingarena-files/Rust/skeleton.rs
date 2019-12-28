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
    // read N
    let N: i64;
    std::io::stdout().flush().unwrap();
    readln!(N);
    // for i to N {...}
    let mut seq: Vec<i64> = Vec::new();
    seq.resize(N as usize, 0);
    for i in 0..N {
        // read seq[i]
        std::io::stdout().flush().unwrap();
        readln!(seq[i as usize]);
    }
    // call index = max_sottointervallo(N, seq)
    let index: i64;
    index = solution::max_sottointervallo(N, seq);
    // write index
    println!("{}", index);
    // exit
    std::process::exit(0);
}
