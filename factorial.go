/** 
	factorial.go - program to solve factorial's random number between 1 - 100
*/
package main

import (
	"fmt"
	"math/rand"
	"time"
)

/** Generate a random integer number between 1 - 100 */
func rand_integer_number() int {
	var nonFixedSeed = time.Now().UnixNano()
	var randomNumber = rand.New(rand.NewSource(nonFixedSeed))
	return randomNumber.Intn(100)
}

func factorial(n int) int {
	var factorial int = n

	fmt.Printf("%d! -> ", factorial)
	for n > 1 {
		fmt.Printf("%d ", n)
		factorial *= (n - 1)
		n -= 1
	}

	return factorial
}

func main()  {
	var n int = rand_integer_number()
	var f int = factorial(n) 

	switch n {
		case 0:
			fmt.Printf("0 --> ")
			fmt.Println(f)
		default:
			fmt.Printf("1 --> ")
			fmt.Println(f)
	}
}
