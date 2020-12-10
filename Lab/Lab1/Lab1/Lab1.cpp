#include <iostream>
#include <string>
#include <json.hpp>
#include <cpp_httplib/httplib.h>
#include "Lab1.h"
using namespace httplib;
using json = nlohmann::json;
using namespace std;

// В этой функции формируем ответ сервера на запрос
/*void gen_response(const Request& req, Response& res) {
	
	
	// Команда set_content задаёт ответ сервера и тип ответа:
	// Hello, World! - тело ответа
	// text/plain - MIME тип ответа (в данном случае обычный текст)
	res.set_content("Hello, World!", "text/plain");
}*/

void time(const Request& req, Response& res) {
	// Создаём клиент и привязываем к домену. Туда пойдут наши запросы
	Client cli("http://worldtimeapi.org");
	// Отправляем get-запрос и ждём ответ, который сохраняется в переменной res
	auto res = cli.Get("/api/timezone/Europe/Simferopol");
	// res преобразуется в true, если запрос-ответ прошли без ошибок
	if (res) {
		// Проверяем статус ответа, т.к. может быть 404 и другие
		if (res->status == 200) {
			// В res->body лежит string с ответом сервера
			//std::cout << res->body << std::endl;
			res.set_content(res->body,"text/plain")
		}
		else {
			std::cout << "Status code: " << res->status << std::endl;
		}
	}
	else {
		auto err = res.error();
		std::cout << "Error code: " << err << std::endl;
	}
}


int main() {
	Server svr;                    // Создаём сервер (пока-что не запущен)
	svr.Get("/", time);    // Вызвать функцию gen_response если кто-то обратиться к корню "сайта"
	std::cout << "Start server... OK\n";
	svr.listen("localhost", 3000); // Запускаем сервер на localhost и порту 1234
}
