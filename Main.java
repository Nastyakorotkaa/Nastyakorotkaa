// Абстрактный класс для многоугольников
abstract class Polygon {
    protected int sides; // Количество сторон

    // Конструктор с параметром
    Polygon(int sides) {
        this.sides = sides;
    }

    // Абстрактный метод для вычисления площади
    abstract double area();
}

// Класс для пятиугольника
class Pentagon extends Polygon {
    private double sideLength; // Длина стороны

    // Конструктор для пятиугольника
    Pentagon(double sideLength) {
        super(5); // Вызов конструктора суперкласса
        this.sideLength = sideLength;
    }

    // Реализация метода area() для пятиугольника
    @Override
    double area() {
        return 0.25 * Math.sqrt(5 * (5 + 2 * Math.sqrt(5))) * sideLength * sideLength;
    }
}

// Класс для шестиугольника
class Hexagon extends Polygon {
    private double sideLength; // Длина стороны

    // Конструктор для шестиугольника
    Hexagon(double sideLength) {
        super(6); // Вызов конструктора суперкласса
        this.sideLength = sideLength;
    }

    // Реализация метода area() для шестиугольника
    @Override
    double area() {
        return (3 * Math.sqrt(3) * sideLength * sideLength) / 2;
    }
}

// Класс для семиугольника
class Heptagon extends Polygon {
    private double sideLength; // Длина стороны

    // Конструктор для семиугольника
    Heptagon(double sideLength) {
        super(7); // Вызов конструктора суперкласса
        this.sideLength = sideLength;
    }

    // Реализация метода area() для семиугольника
    @Override
    double area() {
        return (7 * sideLength * sideLength) / (4 * Math.tan(Math.PI / 7));
    }
}

// Главный класс для тестирования
public class Main {
    public static void main(String[] args) {
        // Создание объектов пятиугольника, шестиугольника и семиугольника
        Polygon pentagon = new Pentagon(5.0);
        Polygon hexagon = new Hexagon(5.0);
        Polygon heptagon = new Heptagon(5.0);

        // Вычисление и вывод площади каждого многоугольника
        System.out.println("Площадь пятиугольника: " + pentagon.area());
        System.out.println("Площадь шестиугольника: " + hexagon.area());
        System.out.println("Площадь семиугольника: " + heptagon.area());
    }
}

