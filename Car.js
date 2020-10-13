class Car {
    constructor(brand) {
        this.carname = brand;
    }
    present(x) {
        return x + ', I have a ' + this.carname;
    }
}