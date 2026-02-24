// Problem: C - Cirno-and-Operations
// Contest: 2062
// Language: Go
// Tags: brute force, math, *1200

package main

import (
	"fmt"
	"math"
)

func max(a, b int64) int64 {
	if a > b {
		return a
	}
	return b
}

func main() {
	var t int
	fmt.Scan(&t)

	for ; t > 0; t-- {
		var n int
		fmt.Scan(&n)

		a := make([]int64, n)
		for i := 0; i < n; i++ {
			fmt.Scan(&a[i])
		}

		now := n
		ans := int64(math.MinInt64)

		for i := 0; i < n; i++ {
			sum := int64(0)
			for j := 0; j < now; j++ {
				sum += a[j]
			}

			if i == 0 {
				ans = max(ans, sum)
			} else {
				ans = max(ans, max(sum, -sum))
			}

			for j := 0; j < now-1; j++ {
				a[j] = a[j+1] - a[j]
			}
			now--
		}

		fmt.Println(ans)
	}
}
