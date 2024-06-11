// Абстрактный класс Shape
abstract class Shape {
    // Абстрактный метод для вычисления площади
    abstract double calculateArea();
}

// Подкласс Circle, представляющий круг
class Circle extends Shape {
    private double radius;

    // Конструктор для инициализации радиуса
    public Circle(double radius) {
        this.radius = radius;
    }

    // Реализация метода calculateArea для круга
    @Override
    double calculateArea() {
        return Math.PI * radius * radius;
    }
}

// Подкласс Rectangle, представляющий прямоугольник
class Rectangle extends Shape {
    private double length;
    private double width;

    // Конструктор для инициализации длины и ширины
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Реализация метода calculateArea для прямоугольника
    @Override
    double calculateArea() {
        return length * width;
    }
}

// Подкласс Triangle, представляющий треугольник
class Triangle extends Shape {
    private double base;
    private double height;

    // Конструктор для инициализации основания и высоты
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    // Реализация метода calculateArea для треугольника
    @Override
    double calculateArea() {
        return 0.5 * base * height;
    }
}

// Главный класс для тестирования полиморфизма
public class PolymorphismExample {
    public static void main(String[] args) {
        // Создание массива фигур
        Shape[] shapes = new Shape[3];

        // Инициализация массива различными фигурами
        shapes[0] = new Circle(5);
        shapes[1] = new Rectangle(4, 6);
        shapes[2] = new Triangle(3, 4);

        // Проход по массиву и вычисление площади каждой фигуры
        for (Shape shape : shapes) {
            System.out.println("Площадь фигуры: " + shape.calculateArea());
        }
    }
}
