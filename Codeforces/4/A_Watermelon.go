// Problem: A - Watermelon
// Contest: 4
// Language: Go
// Tags: brute force, math, *800

package main

import (
	"fmt"
)

func main() {
	var w int

	// Take integer input
	fmt.Scan(&w)

	// Check the condition
	if w > 2 && w%2 == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
