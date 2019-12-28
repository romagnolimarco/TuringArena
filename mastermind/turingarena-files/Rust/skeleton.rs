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
    // call ans = play() callbacks {...}
    let ans: i64;
    ans = solution::play(|c1: i64, c2: i64, c3: i64, c4: i64| -> i64 {
        // callback blackScore
        println!("{} {}", 1, 0);
        // write c1, c2, c3, c4
        println!("{} {} {} {}", c1, c2, c3, c4);
        // read ans
        let ans: i64;
        std::io::stdout().flush().unwrap();
        readln!(ans);
        // return ans
        return ans;
    }, |c1: i64, c2: i64, c3: i64, c4: i64| -> i64 {
        // callback whiteScore
        println!("{} {}", 1, 1);
        // write c1, c2, c3, c4
        println!("{} {} {} {}", c1, c2, c3, c4);
        // read ans
        let ans: i64;
        std::io::stdout().flush().unwrap();
        readln!(ans);
        // return ans
        return ans;
    });
    // no more callbacks
    println!("{} {}", 0, 0);
    // write ans
    println!("{}", ans);
    // exit
    std::process::exit(0);
}
