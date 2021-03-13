<p align="center">МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ<br>
Федеральное государственное автономное образовательное учреждение высшего образования<br>
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"<br>
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ<br>
Кафедра компьютерной инженерии и моделирования</p>
<br>
<h3 align="center">Отчёт по лабораторной работе № 4<br> по дисциплине "Программирование"</h3>
<br><br>
<p>студента 1 курса группы ИВТ-б-о-201(2)<br>
Османова Эскендера Зодиевича<br>
направления подготовки 09.03.01 "Информатика и вычислительная техника"</p>
<br><br>
<table>
<tr><td>Научный руководитель<br> старший преподаватель кафедры<br> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br><br>
<p align="center">Симферополь, 2020</p>
<hr>

<h4>Цель:</h4>
<ul>
<li>Установить фреймворк Qt;</li>
<li>Изучить основные возможности создания и отладки программ в IDE Qt Creator.</li>
</ul>
<h2>Постановка задачи</h2>
Настроить рабочее окружение, для разработки программного обеспечения при помощи Qt и IDE Qt Creator, а также изучить базовые возможности данного фреймворка.

<h2>Выполнение работы</h2>
<h3>Задание 1</h3>
Сначала я скачал с официального сайта Qt и установил. Для проверки нажал на проект <i>Calculator Form Example</i>. Открылись окна справки и настройки проекта.
Затем я заменил в каталоге <i>Формы</i> текст "Input 1", "Input 2", "Output" на "Ввод 1", "Ввод 2" и "Вывод" соответственно.
<center><img src = "![](./image/pic1.png)"></center>
<center>Рис. 1. Приложение <i>Calculator Form Example</i></center>

<h3>Задание 2</h3>
<h4>Вопросы</h4>
<ol>
<li>Как изменить цветовую схему (оформление) среды?</li>
<li>Как закомментировать/раскомментировать блок кода средствами Qt Creator? Имеется ввиду комбинация клавиш или пункт меню.</li>
<li>Как открыть в проводнике Windows папку с проектом средствами Qt Creator?</li>
<li>Какое расширение файла-проекта используется Qt Creator? Может быть несколько ответов.</li>
<li>Как запустить код без отладки?</li>
<li>Как запустить код в режиме отладки?
</li>
<li>Как установить/убрать точку останова (breakpoint)?</li>
</ol>

<h4>Ответы</h4>
<ol>
<li>Находим на панели сверху <i>Инструменты</i> &#8658; <i>Параметры</i> &#8658; <i>Среда</i> и тут уже изменяем оформление среды</li>
<li>Заккоментировать выделенный код можно с помощью сочетания клавишь "<i>Ctrl + /</i>"</li>
<li>Находим на панели сверху <i>Файл</i> &#8658; <i>Открыть файл или проект</i> и выбираем проект. Также это можно сделать сочетанием клавиш "<i>Ctrl + O</i>"</li>
<li><i>.cpp</i> и <i>.pro</i></li>
<li> Нажать <i>Запустить</i> либо <i>"Ctrl + R"</i></li>
<li><i>Начать отладку запускающего проекта</i></li>
<li><i>ЛКМ</i> перед строкой</li>
</ol>

<h3>Задание 3</h3>
<ul>
<li>Строка 6.

d = 7.9037776<sup>-317</sup>

i = 0</li>
<li>Строка 7.

d = 7.9037776<sup>-317</sup>

i = 5</li>
<li>Строка 8.

d = 5

i = 5</li>
</ul>

<h3>Вывод</h3>
Установил фреймворк Qt. Изучил основные возможности создания и отладки программ IDE Qt Creator. Настроил оформление среды. Установил gitignore для Qt.