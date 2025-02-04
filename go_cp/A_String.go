package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var t int
	fmt.Fscan(reader, &t)

	for i := 0; i < t; i++ {
		solve(reader, writer)
	}
}

func solve(reader *bufio.Reader, writer *bufio.Writer) {
	// Write your solution here
	s := ""
	fmt.Fscan(reader, &s)
	count := 0

	for i := 0; i < len(s); i++ {
		if s[i] == '1' {
			count++
		}
	}

	fmt.Fprintln(writer, count)
}
