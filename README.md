Важно учитывать при реализации 
● Работать необходимо с динамическим выделением памяти. 
● Не использовать STL контейнеры для реализации программы. 
● Реализовать полное пользовательское меню согласно заданию. Не должно 
быть аргументов, которые явно задаются в исходном коде, пользователь 
имеет максимальные возможности при работе с программой, все 
параметры, которые могут быть введены пользователем, вводятся с 
клавиатуры. 
● Создать все конструкторы (с параметрами, без параметров и копирования) 
и деструктор, использовать переопределение операторов. Каждый вызов 
конструктора и деструктора должен сопровождаться выводом этой 
информации пользователю (какой объект, какой конструктор или 
деструктор вызван).  
● Определить в классе методы для просмотра и установки значений (set и get 
функции). 
● Определить исключения (exceptions) и применить в программе. Каждое 
исключение должно сопровождаться текстом, поясняющим возникшую 
исключительную ситуацию. 
● Классы-наследники от базового класса должны определять свою сущность 
по переменным и методам для работы с ними.  
● По списку студент определяет свой порядковый номер и этому номеру 
соответствует номер задания в таблице. Общее задание расположено перед 
таблицей. 
●  Необходимо выполнить разделение на h и cpp файлы для каждого класса. h файлы содержат определение, cpp файлы содержат реализацию. 
Функция main обязана располагаться в отдельном cpp файле. 

Меню пользователя должно содержать возможность 
редактирования любой записи любого объекта, удаление любого 
объекта, добавления нового объекта на любую позицию. 

1. Стандартные потоки 
Определить класс с именем NОТЕ, содержащий следующие поля: 
● фамилия, имя; 
● номер телефона; 
● день рождения (массив из трех чисел). 
Определить методы доступа к этим полям и перегруженные операции 
извлечения и вставки для объектов типа NОТЕ. 
Заранее число объектов не известно. 
Написать программу, выполняющую следующие действия: 
● записи должны быть упорядочены по датам дней рождения; 
● вывод на экран информации о человеке, номер телефона которого 
введен с клавиатуры; 
● если такого нет, выдать на дисплей соответствующее сообщение. 
2. Файловые и строковые потоки 
С использованием файловых и строковых потоков написать программу, 
которая считывает текст из файла и выводит на экран только предложения, 
начинающиеся с тире, перед которым могут следовать только пробельные 
символы. 
