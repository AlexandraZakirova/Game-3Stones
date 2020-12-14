#include <iostream>
#include <sstream>
#include <random>
#include <ctime>

int main ()
{
	int min=10, max=20,value,v,nimber_rnd;
	std:: random_device rd; //Датчик случайных чисел
	std:: default_random_engine rnd {rd()};
	std:: uniform_int_distribution <> distN {15, 25};
	value = distN(rnd);
	std::cout << "В куче "<< value <<" камней."<<std::endl;
	while(value>0){
		std::cout <<"Игрок, выбери от 1 до 3 камней"<< std::endl;
		std::string s;
		std::getline(std::cin,s);
		std::stringstream ss(s);
		ss>>v;

		if(ss.fail()){
			v=-1;
		}
					if(std::cin.eof()){
						std::cout<<"Ой"<<std::endl;
						return 1;
					}
					switch(v){
							case 1:{
								value=value-1;
								if(value==0){
									std::cout<<"Ты проиграл!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								nimber_rnd = 1 + gen() % (3-1+1);
								if (value==4) nimber_rnd==3;
								if (value==3) nimber_rnd==2;
								if (value==2) nimber_rnd==1;
								if(nimber_rnd>value){
									nimber_rnd=value;
								}
								value=value-nimber_rnd;
								std::cout<<"-1 камень. Хожу я, беру "<< nimber_rnd <<" камней и в куче осталось всего "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я (компьютер) проиграл!"<<std::endl;
									return 0;
								}

							}break;
							case 2:{
								value=value-2;
								if(value==0){
									std::cout<<"Ты проиграл!!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								nimber_rnd = 1 + gen() % (3-1+1);
								if (value==4) nimber_rnd==3;
								if (value==3) nimber_rnd==2;
								if (value==2) nimber_rnd==1;
								if(nimber_rnd>value){
									nimber_rnd=value;
								}
								value=value-nimber_rnd;
								std::cout<<"-2 камня. Хожу я, беру "<< nimber_rnd <<" камней и в куче осталось всего "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я (компьютер) проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 3:{
								value=value-3;
								if(value==0){
									std::cout<<"Ты проиграл!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								nimber_rnd = 1 + gen() % (3-1+1);
								if (value==4) nimber_rnd==3;
								if (value==3) nimber_rnd==2;
								if (value==2) nimber_rnd==1;
								if(nimber_rnd>value){
									nimber_rnd=value;
								}
								value=value-nimber_rnd;
								std::cout<<"-3 камня. Хожу я, беру "<< nimber_rnd<<" камней и в куче осталось всего "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я (компьютер) проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 0:std::cout<<"До следующей игры"<<std::endl;break;
							default:std::cout<<"Ошибка: Введи число от 1 до 3!"<<std::endl;break;
	}

}return 0;
}


