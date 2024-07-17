## Simple Programming Language

### Code Structure

- You can run file without creating any function.
- You can define functions like javascript.
  
### Example

```
func HelloWorld (name: string): void {
    print("Hello World " + name)
}

HelloWorld("Jose")
```

```
func Sum (a: int, b: int): int {
    return a + b
}

Sum(10,1)
```

```
let x : int = 5
const y = "Hello"
let z : float = 10.1
```

```
interface Person {
    name: string
    lastname: string
    age: int
}
let x: Person = {
    name: "Pepito",
    lastname: "Perez",
    age: 10
}
```