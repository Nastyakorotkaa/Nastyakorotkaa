// Абстрактный класс Meal
abstract class Meal {
    protected int calories;

    // Конструктор для инициализации калорий
    public Meal(int calories) {
        this.calories = calories;
    }

    // Абстрактный метод для получения калорий
    abstract int getCalories();
}

// Подкласс Breakfast, представляющий завтрак
class Breakfast extends Meal {
    private int protein;
    private int carbs;

    // Конструктор для инициализации калорий, белков и углеводов
    public Breakfast(int calories, int protein, int carbs) {
        super(calories);
        this.protein = protein;
        this.carbs = carbs;
    }

    // Реализация метода getCalories для завтрака
    @Override
    int getCalories() {
        return calories + (protein * 4) + (carbs * 4);
    }
}

// Подкласс Lunch, представляющий обед
class Lunch extends Meal {
    private int fat;
    private int fiber;

    // Конструктор для инициализации калорий, жиров и клетчатки
    public Lunch(int calories, int fat, int fiber) {
        super(calories);
        this.fat = fat;
        this.fiber = fiber;
    }

    // Реализация метода getCalories для обеда
    @Override
    int getCalories() {
        return calories + (fat * 9) + (fiber * 2);
    }
}

// Подкласс Dinner, представляющий ужин
class Dinner extends Meal {
    private int protein;
    private int fat;
    private int carbs;

    // Конструктор для инициализации калорий, белков, жиров и углеводов
    public Dinner(int calories, int protein, int fat, int carbs) {
        super(calories);
        this.protein = protein;
        this.fat = fat;
        this.carbs = carbs;
    }

    // Реализация метода getCalories для ужина
    @Override
    int getCalories() {
        return calories + (protein * 4) + (fat * 9) + (carbs * 4);
    }
}

// Главный класс для тестирования полиморфизма
public class PolymorphismExample1 {
    public static void main(String[] args) {
        // Создание массива приемов пищи
        Meal[] meals = new Meal[3];

        // Инициализация массива различными приемами пищи
        meals[0] = new Breakfast(200, 10, 20); // Завтрак: 200 калорий, 10 г белков, 20 г углеводов
        meals[1] = new Lunch(300, 15, 5); // Обед: 300 калорий, 15 г жиров, 5 г клетчатки
        meals[2] = new Dinner(400, 20, 10, 30); // Ужин: 400 калорий, 20 г белков, 10 г жиров, 30 г углеводов

        // Проход по массиву и вывод общего количества калорий для каждого приема пищи
        for (Meal meal : meals) {
            System.out.println("Общее количество калорий: " + meal.getCalories());
        }
    }
}
