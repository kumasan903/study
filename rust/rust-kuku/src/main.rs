use std::io;
fn main() {
    // 入力された値の読み込み
    println!("input↓");
    let mut input_value = String::new();
    io::stdin()
        .read_line(&mut input_value)
        .expect("Failed to read line");
    
    // Stringをi32に
    let input_value = input_value.trim();
    let input_value:i32 = input_value.parse().unwrap();

    // 計算と出力
    let mut kazu = 1;
    
    println!("---");
    loop {
        if kazu == 10{
            break kazu;
        }
        let kotae = input_value * kazu;
        println!("{}", kotae);
        kazu += 1;
    };
    println!("---")
}
