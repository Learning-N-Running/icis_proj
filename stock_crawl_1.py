# 네이버 코스피, 코스닥 전체 항목 출력하기(우리 나라 모든 주식 출력하기)
# https://appia.tistory.com/733

import requests
from bs4 import BeautifulSoup
import os

if os.path.isfile('today_stock.txt'): 
        os.remove('today_stock.txt') #today_stock.txt 라는 파일이 이미 있으면 지우기(새로운 주식 데이터베이스를 구축하기 위함.)

f = open('today_stock.txt','w',encoding="utf-8") 

def return_value(address):
    res = requests.get(address)
    soup = BeautifulSoup(res.content, 'html.parser')

    section = soup.find('tbody')
    items = section.find_all('tr', onmouseover="mouseOver(this)")
    for item in items:
        basic_info = item.get_text()
        sinfo = basic_info.split("\n")
        f.write(sinfo[2] + "_" + sinfo[3]+"\n") #_는 종목과 주가 사이를 분리하는 문자

#코스피
baseaddress = 'https://finance.naver.com/sise/sise_market_sum.naver?&page='
for i in range(1,35):
    return_value(baseaddress+str(i))

#코스닥
baseaddress = 'https://finance.naver.com/sise/sise_market_sum.naver?sosok=1&page='
for i in range(1,35):
    return_value(baseaddress+str(i))

f.close()