import math
import pygame
import random
import time
import os
import pygame as pg
import sys
import json
import socket






def bot(rand_piece):
	global r
	global COORDS_fishek
	global COORDS
	global distance
	global bot_coords
	global win_red
	global hod
	global hod_value
	global arr
	global kk
	global blok_piece
	global nn


	
	if(hod[0]):
		hod_value = 25
		nn = True


	elif(hod[1]):
		hod_value = 26
		nn = True


	elif(hod[2]):
		hod_value = 27
		nn = True


	elif(hod[3]):
		hod_value = 8
		nn = True


	elif(hod[4]):
		hod_value = 16
		nn = True


	elif(hod[5]):
		hod_value = 28
		nn = True

	else:
		nn = False




	if(nn):
		i = 0
		while(i < len(COORDS)):
			
			y = (((((COORDS_fishek[rand_piece][0] - (COORDS[i][0])) ** 2 + (COORDS_fishek[rand_piece][1] - (COORDS[i][1])) ** 2)) ** 0.5))

			bot_append = True
			m = 0
			while(m < 12):
				if(i == arr[m]):
					bot_append = False
				m = m + 1

			if((y <= (R+r)) and (y >= 2*r) and bot_append):
				bot_coords.append(COORDS[i])

			i = i + 1

		if(len(bot_coords) > 0):
			i = 0
			while(i < len(bot_coords)):
				l = ((((COORDS[hod_value][0]-(bot_coords[i][0])) ** 2 + (COORDS[hod_value][1] - (bot_coords[i][1])) ** 2)) ** 0.5)
				distance.append(l)
				i = i + 1

			min_idx = distance.index(min(distance))

			return min_idx

		else:
			return 1000000





bot_coords = []
distance = []


red_bot = True


colosia = False
hod = [True, False, False, False, False, False]
hod_value = 0

blok_piece = [False, False, False, False, False, True]

kk = 0
nn = False
mm = False

win_red = [25, 26, 27, 8, 16, 28]#[55, 26, 25, 8, 7, 13]
win_yellow = [29, 14, 30, 31, 32, 3]#[17, 6, 48, 58, 53, 11]
win_green = [33, 34, 6, 35, 36, 5]#[15, 39, 9, 56, 40, 10]






green_ = 0
red_ = 1
yellow_ = 0

win_red_value = 0
win_yellow_value = 0
win_green_value = 0

paint = False
start_button = False
one_players = False
two_players = 0
three_players = False
b_aggain = False

final = False

win_red_final = False
win_yellow_final = False
win_green_final = False

n = 6
R = 100
r = R / 5
f = [False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False]
u = [False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False]
COORDS = []
COORDS_fishek = []
COORDS_1 = []
#arr = [57, 46, 47, 11, 16, 10, 9, 14, 8, 32, 33, 54, 59, 18, 6, 12, 7, 19]
arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17]

arr_1 = [57, 46, 47, 11, 16, 10, 9, 14, 8, 32, 33, 54, 59, 18, 6, 12, 7, 19, 4, 5, 0, 1, 2, 3, 60, 55, 26, 25, 13, 17, 48, 58, 53, 15, 39, 56, 40]



WHITE_polygon = []

counting = True

width = 800
height = 780

FPS = 60

x0 = width/2
y0 = height/2

# Задаем цвета 
WHITE = (255, 255, 255)
YELLOW = (255, 255, 0)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
BLUE_1 = (63, 72, 204)


class piece_red(pygame.sprite.Sprite):
	def __init__(self, q):
		pygame.sprite.Sprite.__init__(self)
		self.image = piece_red_img
		self.image.set_colorkey(WHITE)
		self.rect = self.image.get_rect()
		self.rect.center = (COORDS_fishek[q][0], COORDS_fishek[q][1])
	def update(self, position, q):
		global f
		global u
		global red_
		global green_
		global yellow_
		global bot_coords
		global distance
		global red_bot
		global R
		global r
		global COORDS_fishek
		global COORDS
		global win_red
		global hod
		global hod_value
		global arr
		global kk
		global blok_piece
		global nn
		global mm

		mm = False
		if(red_bot):
			if(red_):

				q = bot(position)

				if(not((q == 1000000) or (q == None))):


					i = 0
					while(i < len(COORDS)):
						
						#print(COORDS[i], bot_coords[q])
						if(bot_coords[q] == COORDS[i]):
								mm = True
								#print(i, arr)
								#print(1)


						if(mm):

							time.sleep(0.5)
							#print(i)
							self.rect.center = (COORDS[i][0]+(r/2), COORDS[i][1]+(r/2))
							COORDS_fishek[position] = (COORDS[i][0]+(r/2), COORDS[i][1]+(r/2))
							arr[position] = i

							#print(arr)
							#print("red", i)

							u[position] = False
							f[position] = False


							nn = False


							if(hod[kk]):
								j = 0
								while(j < 6):
									if(win_red[kk] == arr[j]):
										blok_piece[j] = False
										hod[kk] = False
										#print(1)

										if(j > 0):
											blok_piece[j - 1] = True

										if(kk < 5):
											
											hod[kk + 1] = True
											kk = kk + 1
									j = j + 1

							
							red_ = abs(red_ - 1)
							if(two_players):
								yellow_ = abs(yellow_ - 1)
							if(three_players):
								green_ = abs(green_ - 1)
								

							


							break
					
						else:
							i = i + 1

			bot_coords.clear()
			distance.clear()


		else:

			if(red_):
				if(u[position]):
					if(event.type == pygame.MOUSEBUTTONDOWN):
						if event.button == 3:
							a = event.pos

				
							try:
								sock = socket.socket()
								sock.connect(('127.0.0.1', 1111))

							except ConnectionRefusedError:
								print("Сервер не работает")
							else:
								value_1 = a[0]
								value_2 = a[1]
								value_3 = q
								value_4 = position


								sock.send(bytes(str(value_1)+ '\0', 'utf-8'))
								time.sleep(0.1)
								print(value_1)


								sock.send(bytes(str(value_2) + '\0', 'utf-8'))
								time.sleep(0.1)
								print(value_2)


								sock.send(bytes(str(value_3) + '\0', 'utf-8'))
								time.sleep(0.1)
								print(value_3)


								sock.send(bytes(str(value_4) + '\0', 'utf-8'))
								time.sleep(0.1)
								print(value_4)

								print((((((COORDS_fishek[q][0]-(a[0])) ** 2 + (COORDS_fishek[q][1] - (a[1])) ** 2)) ** 0.5) - r))
								
								data = sock.recv(1024)
								data = data.decode(encoding="utf-8", errors="ignore")
								data1 = data.rsplit(' ', 2)
								#data = data[0]


								print(data1)
								print(data1[0])
								

								data = data1[0]
								
								if(not(data[0] == 'a')):
									data = int(data)

								sock.close()


								if(data == "again"):
									self.rect.center = COORDS_fishek[q]

								else:
									arr[position] = data

									self.rect.center = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
									COORDS_fishek[q] = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
									arr[position] = data

									red_ = abs(red_ - 1)
									if(two_players):
										yellow_ = abs(yellow_ - 1)
									if(three_players):
										green_ = abs(green_ - 1)

								u[position] = False
								f[position] = False


				else:
					if(event.type == pygame.MOUSEBUTTONDOWN):
						if event.button == 1:
							a = event.pos
							if((COORDS_fishek[q][0] < (a[0] + r)) and (COORDS_fishek[q][1] < (a[1] + r)) and (COORDS_fishek[q][0] > (a[0] - r)) and (COORDS_fishek[q][1] > (a[1] - r))):
								f[position] = True

			if(f[position]):
				self.rect.center = pygame.mouse.get_pos()
				u[position] = True
			else:
				self.rect.center = COORDS_fishek[position]


class piece_yellow(pygame.sprite.Sprite):
	def __init__(self, q):
		pygame.sprite.Sprite.__init__(self)
		self.image = piece_yellow_img
		self.image.set_colorkey(WHITE)
		self.rect = self.image.get_rect()
		self.rect.center = (COORDS_fishek[q][0], COORDS_fishek[q][1])
	def update(self, position, q):
		global f
		global u
		global yellow_
		global red_
		global R
		global r


		if(yellow_):
			if(u[position]):
				if(event.type == pygame.MOUSEBUTTONDOWN):
					if event.button == 3:
						a = event.pos

				
						try:
							sock = socket.socket()
							sock.connect(('127.0.0.1', 1111))

						except ConnectionRefusedError:
							print("Сервер не работает")
						else:
							value_1 = a[0]
							value_2 = a[1]
							value_3 = q
							value_4 = position


							sock.send(bytes(str(value_1)+ '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_1)


							sock.send(bytes(str(value_2) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_2)


							sock.send(bytes(str(value_3) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_3)


							sock.send(bytes(str(value_4) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_4)

							print((((((COORDS_fishek[q][0]-(a[0])) ** 2 + (COORDS_fishek[q][1] - (a[1])) ** 2)) ** 0.5) - r))
							
							data = sock.recv(1024)
							data = data.decode(encoding="utf-8", errors="ignore")
							data1 = data.rsplit(' ', 2)
							#data = data[0]


							print(data1)
							print(data1[0])
							

							data = data1[0]
							if(len(data) > 0):
								if(not(data[0] == 'a')):
									data = int(data)
							else:
								data = int(data)

							sock.close()


							if(data == "again"):
								self.rect.center = COORDS_fishek[q]

							else:
								arr[position] = data

								self.rect.center = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
								COORDS_fishek[q] = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
								arr[position] = data

								yellow_ = abs(yellow_ - 1)
								red_ = abs(red_ - 1)

							u[position] = False
							f[position] = False


			else:
				if(event.type == pygame.MOUSEBUTTONDOWN):
					if event.button == 1:
						a = event.pos
						if((COORDS_fishek[q][0] < (a[0] + r)) and (COORDS_fishek[q][1] < (a[1] + r)) and (COORDS_fishek[q][0] > (a[0] - r)) and (COORDS_fishek[q][1] > (a[1] - r))):
							f[position] = True

		if(f[position]):
			self.rect.center = pygame.mouse.get_pos()
			u[position] = True
		else:
			self.rect.center = COORDS_fishek[position]


class piece_green(pygame.sprite.Sprite):
	def __init__(self, q):
		pygame.sprite.Sprite.__init__(self)
		self.image = piece_green_img
		self.image.set_colorkey(WHITE)
		self.rect = self.image.get_rect()
		self.rect.center = (COORDS_fishek[q][0], COORDS_fishek[q][1])
	def update(self, position, q):
		global f
		global u
		global green_
		global yellow_
		global R
		global r

		if(green_):
			if(u[position]):
				if(event.type == pygame.MOUSEBUTTONDOWN):
					if event.button == 3:
						a = event.pos

				
						try:
							sock = socket.socket()
							sock.connect(('127.0.0.1', 1111))

						except ConnectionRefusedError:
							print("Сервер не работает")
						else:
							value_1 = a[0]
							value_2 = a[1]
							value_3 = q
							value_4 = position


							sock.send(bytes(str(value_1)+ '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_1)


							sock.send(bytes(str(value_2) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_2)


							sock.send(bytes(str(value_3) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_3)


							sock.send(bytes(str(value_4) + '\0', 'utf-8'))
							time.sleep(0.1)
							print(value_4)

							print((((((COORDS_fishek[q][0]-(a[0])) ** 2 + (COORDS_fishek[q][1] - (a[1])) ** 2)) ** 0.5) - r))
							
							data = sock.recv(1024)
							data = data.decode(encoding="utf-8", errors="ignore")
							data1 = data.rsplit(' ', 2)
							#data = data[0]


							print(data1)
							print(data1[0])
							

							data = data1[0]
							
							if(not(data[0] == 'a')):
								data = int(data)

							sock.close()


							if(data == "again"):
								self.rect.center = COORDS_fishek[q]

							else:
								arr[position] = data

								self.rect.center = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
								COORDS_fishek[q] = (COORDS_1[data][0]+(r/2), COORDS_1[data][1]+(r/2))
								arr[position] = data

								green_ = abs(green_ - 1)
								yellow_ = abs(yellow_ - 1)

							u[position] = False
							f[position] = False


			else:
				if(event.type == pygame.MOUSEBUTTONDOWN):
					if event.button == 1:
						a = event.pos
						if((COORDS_fishek[q][0] < (a[0] + r)) and (COORDS_fishek[q][1] < (a[1] + r)) and (COORDS_fishek[q][0] > (a[0] - r)) and (COORDS_fishek[q][1] > (a[1] - r))):
							f[position] = True

		if(f[position]):
			self.rect.center = pygame.mouse.get_pos()
			u[position] = True
		else:
			self.rect.center = COORDS_fishek[position]



class Button(pygame.sprite.Sprite):
	def __init__(self):
		pygame.sprite.Sprite.__init__(self)
		self.image = button_img
		self.image.set_colorkey(BLUE_1)
		self.rect = self.image.get_rect()
		self.rect.center = (400, 400)
	def update(self):
		global paint
		global start_button
		global two_players
		global three_players
		global red_bot
		global one_players

		if(event.type == pygame.MOUSEBUTTONDOWN):
			a = event.pos
			if(a[1] > 230):
				if(a[1] > 500):
					if(a[0] < x0):
						start_button = True
						two_players = 1
						three_players = False
						one_players = False
						red_bot = False

					elif(a[0] > x0):
						start_button = True
						three_players = True
						two_players = 0
						one_players = False
						red_bot = False

				else:
					start_button = True
					two_players = 0
					three_players = False
					one_players = True
					red_bot = True


		if(start_button):
			if(event.type == pygame.MOUSEBUTTONDOWN):
				a = event.pos
				if(a[1] < 230):
					paint = True
					button.kill()


	# Высчитывание координат

	if (counting == True):
		counting = False
		COORDS.clear()
		i=0
		while(i<n):
			x = x0 + R * math.cos(2 * math.pi * i / n)
			y = y0 + R * math.sin(2 * math.pi * i / n)
			COORDS.append([x, y])
			i=i+1

		i=0
		while(i<n):
			x = x0 + 2 * R * math.cos(2 * math.pi * i / n)
			y = y0 + 2 * R * math.sin(2 * math.pi * i / n)
			COORDS.append([x, y])
			i=i+1

		i=6
		while(i<11):
			x = (COORDS[i][0]+COORDS[i+1][0])/2
			y = (COORDS[i][1]+COORDS[i+1][1])/2
			COORDS.append([x, y])
			i=i+1

		COORDS.append([(COORDS[11][0]+COORDS[6][0])/2, (COORDS[11][1]+COORDS[6][1])/2])
		
		j=12
		while(j<18):
			i=0
			while(i<n):
				x = COORDS[j][0] + R * math.cos(2 * math.pi * i / n)
				y = COORDS[j][1] + R * math.sin(2 * math.pi * i / n)
				COORDS.append([x, y])
				i=i+1
			j=j+1

		COORDS.append([(2*COORDS[32][0]-COORDS[8][0]), (2*COORDS[32][1]-COORDS[8][1])])
		COORDS.append([(2*COORDS[26][0]-COORDS[8][0]), (2*COORDS[26][1]-COORDS[8][1])])
		COORDS.append([(2*COORDS[40][0]-COORDS[10][0]), (2*COORDS[40][1]-COORDS[10][1])])
		COORDS.append([(2*COORDS[46][0]-COORDS[10][0]), (2*COORDS[46][1]-COORDS[10][1])])
		COORDS.append([(2*COORDS[48][0]-COORDS[6][0]), (2*COORDS[48][1]-COORDS[6][1])])
		COORDS.append([(2*COORDS[18][0]-COORDS[6][0]), (2*COORDS[18][1]-COORDS[6][1])])

		COORDS.append([x0, y0])


		i = 0
		while(i < len(arr_1)):
			COORDS_1.append(COORDS[arr_1[i]])
			#print(arr_1[i], i)
			#print(COORDS_1[i])
			i = i + 1

		COORDS.clear()

		i = 0
		while(i < len(COORDS_1)):
			COORDS.append(COORDS_1[i])
			i = i + 1


		g = 0
		while(g < 18):
			COORDS_fishek.append([COORDS[g][0]+(r/2), COORDS[g][1]+(r/2)])
			g = g + 1


		WHITE_polygon.append([COORDS[14][0]+(r/2), COORDS[14][1]+(r/2)])
		WHITE_polygon.append([COORDS[16][0]+(r/2), COORDS[16][1]+(r/2)])
		WHITE_polygon.append([COORDS[8][0]+(r/2), COORDS[8][1]+(r/2)])
		WHITE_polygon.append([COORDS[6][0]+(r/2), COORDS[6][1]+(r/2)])
		WHITE_polygon.append([COORDS[5][0]+(r/2), COORDS[5][1]+(r/2)])
		WHITE_polygon.append([COORDS[3][0]+(r/2), COORDS[3][1]+(r/2)])


		# Координаты получены

icon_img = pygame.image.load('icon.png')
icon_img.set_colorkey(WHITE)

# Создаем игру и окно
pygame.init()
pygame.mixer.init()
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Китайские шашки")
pygame.display.set_icon(icon_img)
clock = pygame.time.Clock()


piece_red_img = pygame.image.load('red.png').convert()
piece_red_img = pygame.transform.scale(piece_red_img, (int(2.5 * r), int(2.5 * r)))

piece_yellow_img = pygame.image.load('yellow.png').convert()
piece_yellow_img = pygame.transform.scale(piece_yellow_img, (int(2.5 * r), int(2.5 * r)))

piece_green_img = pygame.image.load('green.png').convert()
piece_green_img = pygame.transform.scale(piece_green_img, (int(2.5 * r), int(2.5 * r)))


piece_red_img_ = pygame.image.load('red.png').convert()
piece_red_img_ = pygame.transform.scale(piece_red_img_, (int(5 * r), int(5 * r)))
piece_red_img_.set_colorkey(WHITE)

piece_yellow_img_ = pygame.image.load('yellow.png').convert()
piece_yellow_img_ = pygame.transform.scale(piece_yellow_img_, (int(5 * r), int(5 * r)))
piece_yellow_img_.set_colorkey(WHITE)

piece_green_img_ = pygame.image.load('green.png').convert()
piece_green_img_ = pygame.transform.scale(piece_green_img_, (int(5 * r), int(5 * r)))
piece_green_img_.set_colorkey(WHITE)



krug = pygame.image.load('krug.png').convert()
krug = pygame.transform.scale(krug, (int(3 * r), int(3 * r)))
krug.set_colorkey(WHITE)


button_img = pygame.image.load('button.png').convert()

button_two_players_img = pygame.image.load('button_two_players.png').convert()
button_three_players_img = pygame.image.load('button_three_players.png').convert()
button_one_players_img = pygame.image.load('button_one_players.png').convert()
button_b_img = pygame.image.load('button_b.png').convert()

red_won_img = pygame.image.load('red_won.png').convert()
red_won_img.set_colorkey(WHITE)

yellow_won_img = pygame.image.load('yellow_won.png').convert()
yellow_won_img.set_colorkey(WHITE)

green_won_img = pygame.image.load('green_won.png').convert()
green_won_img.set_colorkey(WHITE)

stol_img = pygame.image.load('stol.jpg').convert()


all_sprites = pygame.sprite.Group()

piece_red_1 = piece_red(0)
piece_red_2 = piece_red(1)
piece_red_3 = piece_red(2)
piece_red_4 = piece_red(3)
piece_red_5 = piece_red(4)
piece_red_6 = piece_red(5)

piece_yellow_1 = piece_yellow(6)
piece_yellow_2 = piece_yellow(7)
piece_yellow_3 = piece_yellow(8)
piece_yellow_4 = piece_yellow(9)
piece_yellow_5 = piece_yellow(10)
piece_yellow_6 = piece_yellow(11)

piece_green_1 = piece_green(12)
piece_green_2 = piece_green(13)
piece_green_3 = piece_green(14)
piece_green_4 = piece_green(15)
piece_green_5 = piece_green(16)
piece_green_6 = piece_green(17)

button = Button()

all_sprites.add(button)


# Цикл игры
running = True
while running:
	# Держим цикл на правильной скорости
	clock.tick(FPS)
	# Ввод процесса (события)
	for event in pygame.event.get():
		# Условия закрытия
		if event.type == pygame.QUIT:
			running = False
		if event.type == pygame.KEYDOWN and event.key == 27:
			running = False

	if(final == False):

		if((paint) and (start_button == 1)):
			time.sleep(0)
			start_button = start_button + 1


		if(paint):

			all_sprites.add(piece_red_1)
			all_sprites.add(piece_red_2)
			all_sprites.add(piece_red_3)
			all_sprites.add(piece_red_4)
			all_sprites.add(piece_red_5)
			all_sprites.add(piece_red_6)

			all_sprites.add(piece_yellow_1)
			all_sprites.add(piece_yellow_2)
			all_sprites.add(piece_yellow_3)
			all_sprites.add(piece_yellow_4)
			all_sprites.add(piece_yellow_5)
			all_sprites.add(piece_yellow_6)


			if(three_players):
				all_sprites.add(piece_green_1)
				all_sprites.add(piece_green_2)
				all_sprites.add(piece_green_3)
				all_sprites.add(piece_green_4)
				all_sprites.add(piece_green_5)
				all_sprites.add(piece_green_6)

		if(paint):
			if(two_players):
				i = 12
				while(i<18):
					COORDS_fishek[i] = [0, 0]
					i = i + 1


	# Обновление

	pygame.display.update()


	if(final == False):
		if(paint):
			if(red_bot):
			
				if(blok_piece[0]):
					piece_red_1.update(0, 0)
				if(blok_piece[1]):
					piece_red_2.update(1, 1)
				if(blok_piece[2]):
					piece_red_3.update(2, 2)
				if(blok_piece[3]):
					piece_red_4.update(3, 3)
				if(blok_piece[4]):
					piece_red_5.update(4, 4)
				if(blok_piece[5]):
					piece_red_6.update(5, 5)

			else:
				piece_red_1.update(0, 0)
				piece_red_2.update(1, 1)
				piece_red_3.update(2, 2)
				piece_red_4.update(3, 3)
				piece_red_5.update(4, 4)
				piece_red_6.update(5, 5)


			piece_yellow_1.update(6, 6)
			piece_yellow_2.update(7, 7)
			piece_yellow_3.update(8, 8)
			piece_yellow_4.update(9, 9)
			piece_yellow_5.update(10, 10)
			piece_yellow_6.update(11, 11)

			if(three_players):
				piece_green_1.update(12, 12)
				piece_green_2.update(13, 13)
				piece_green_3.update(14, 14)
				piece_green_4.update(15, 15)
				piece_green_5.update(16, 16)
				piece_green_6.update(17, 17)


		if(paint == False):
			button.update()
			
	# Рендеринг
	screen.fill(WHITE)
	screen.blit(stol_img, (0, 0))


	pygame.display.set_mode.__doc__

	if(final == False):
		if(paint == False):
			if(one_players):
				two_players = 2
				screen.blit(button_one_players_img, (-2, -2))

			elif(two_players == 1):
				screen.blit(button_two_players_img, (-2, -2))

			elif(three_players):
				screen.blit(button_three_players_img, (-2, -2))
			
			else:
				screen.blit(button_b_img, (-2, -2))

		if(paint):

			pointlist_1 = [[COORDS[14][0]+r/2, COORDS[14][1]+r/2], [COORDS[16][0]+r/2, COORDS[16][1]+r/2], [COORDS[12][0]+r/2, COORDS[12][1]+r/2]]
			pointlist_2 = [[COORDS[35][0]+r/2, COORDS[35][1]+r/2], [COORDS[6][0]+r/2, COORDS[6][1]+r/2], [COORDS[5][0]+r/2, COORDS[5][1]+r/2]]

			pointlist_3 = [[COORDS[6][0]+r/2, COORDS[6][1]+r/2], [COORDS[8][0]+r/2, COORDS[8][1]+r/2], [COORDS[11][0]+r/2, COORDS[11][1]+r/2]]
			pointlist_4 = [[COORDS[31][0]+r/2, COORDS[31][1]+r/2], [COORDS[3][0]+r/2, COORDS[3][1]+r/2], [COORDS[14][0]+r/2, COORDS[14][1]+r/2]]
			
			pointlist_5 = [[COORDS[5][0]+r/2, COORDS[5][1]+r/2], [COORDS[3][0]+r/2, COORDS[3][1]+r/2], [COORDS[0][0]+r/2, COORDS[0][1]+r/2]]
			pointlist_6 = [[COORDS[25][0]+r/2, COORDS[25][1]+r/2], [COORDS[16][0]+r/2, COORDS[16][1]+r/2], [COORDS[8][0]+r/2, COORDS[8][1]+r/2]]



			pygame.draw.polygon(screen, GREEN, pointlist_1, width=0)
			pygame.draw.polygon(screen, GREEN, pointlist_2, width=0)

			pygame.draw.polygon(screen, YELLOW, pointlist_3, width=0)
			pygame.draw.polygon(screen, YELLOW, pointlist_4, width=0)

			pygame.draw.polygon(screen, RED, pointlist_5, width=0)
			pygame.draw.polygon(screen, RED, pointlist_6, width=0)

			pygame.draw.polygon(screen, WHITE, WHITE_polygon, width=0)


			i=0
			while(i < len(COORDS)):
				j=0

				while(j < len(COORDS)):
					yy = (((((COORDS[i][0]-(COORDS[j][0])) ** 2 + (COORDS[i][1] - (COORDS[j][1])) ** 2)) ** 0.5) - r)
					if(yy <= R):
						pygame.draw.line(screen, BLUE, (COORDS[i][0] + (r/2), COORDS[i][1] + (r/2)), (COORDS[j][0] + (r/2), COORDS[j][1] + (r/2)), int(r/2))
					j = j + 1
				i = i + 1


			# Вставляем круги
			i = 0
			while(i < len(COORDS)):
				screen.blit(krug, (COORDS[i][0] - (r), COORDS[i][1] - (r)))
				i = i +1	


			if(red_):
				screen.blit(piece_red_img_, (50, 50))

			if(yellow_):
				screen.blit(piece_yellow_img_, (50, 50))

			if(three_players):
				if(green_):
					screen.blit(piece_green_img_, (50, 50))


			i = 0
			while(i < 6):
				j = 0
				while(j < 6):
					if(win_red[i] == arr[j]):
						win_red_value = win_red_value + 1
					j = j + 1
				i = i + 1

			if(win_red_value == 6):
				win_red_final = True
				
				piece_red_1.kill()
				piece_red_2.kill()
				piece_red_3.kill()
				piece_red_4.kill()
				piece_red_5.kill()
				piece_red_6.kill()

				piece_yellow_1.kill()
				piece_yellow_2.kill()
				piece_yellow_3.kill()
				piece_yellow_4.kill()
				piece_yellow_5.kill()
				piece_yellow_6.kill()

				piece_green_1.kill()
				piece_green_2.kill()
				piece_green_3.kill()
				piece_green_4.kill()
				piece_green_5.kill()
				piece_green_6.kill()


				final = True

			else:
				win_red_value = 0


			i = 0
			while(i < 6):
				j = 6
				while(j < 12):
					if(win_yellow[i] == arr[j]):
						win_yellow_value = win_yellow_value + 1
					j = j + 1
				i = i + 1

			if(win_yellow_value == 6):
				win_yellow_final = True

				piece_red_1.kill()
				piece_red_2.kill()
				piece_red_3.kill()
				piece_red_4.kill()
				piece_red_5.kill()
				piece_red_6.kill()

				piece_yellow_1.kill()
				piece_yellow_2.kill()
				piece_yellow_3.kill()
				piece_yellow_4.kill()
				piece_yellow_5.kill()
				piece_yellow_6.kill()

				piece_green_1.kill()
				piece_green_2.kill()
				piece_green_3.kill()
				piece_green_4.kill()
				piece_green_5.kill()
				piece_green_6.kill()

				but_aggain.kill()

				final = True

			else:
				win_yellow_value =0


			i = 0
			while(i < 6):
				j = 12
				while(j < 18):
					if(win_green[i] == arr[j]):
						win_green_value = win_green_value + 1
					j = j + 1
				i = i + 1

			if(win_green_value == 6):
				win_green_final = True

				piece_red_1.kill()
				piece_red_2.kill()
				piece_red_3.kill()
				piece_red_4.kill()
				piece_red_5.kill()
				piece_red_6.kill()

				piece_yellow_1.kill()
				piece_yellow_2.kill()
				piece_yellow_3.kill()
				piece_yellow_4.kill()
				piece_yellow_5.kill()
				piece_yellow_6.kill()

				piece_green_1.kill()
				piece_green_2.kill()
				piece_green_3.kill()
				piece_green_4.kill()
				piece_green_5.kill()
				piece_green_6.kill()

				but_aggain.kill()

				final = True

			else:
				win_green_value =0

	if(final):
		if(win_red_final):
			screen.blit(red_won_img, (0, 0))
		if(win_yellow_final):
			screen.blit(yellow_won_img, (0, 0))
		if(win_green_final):
			screen.blit(green_won_img, (0, 0))


	all_sprites.draw(screen)
	# После отрисовки всего, переворачиваем экран
	pygame.display.flip()

pygame.quit()