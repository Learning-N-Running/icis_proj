# https://appia.tistory.com/733

import requests
from bs4 import BeautifulSoup
import os

if os.path.isfile('today_stock.txt'):
        os.remove('today_stock.txt')

f = open('today_stock.txt','w',encoding="utf-8")

def return_value(address):
    res = requests.get(address)
    soup = BeautifulSoup(res.content, 'html.parser')

    section = soup.find('tbody')
    items = section.find_all('tr', onmouseover="mouseOver(this)")
    for item in items:
        basic_info = item.get_text()
        sinfo = basic_info.split("\n")
        f.write("\t" + sinfo[1] + "\t\t" + sinfo[2] + "\t\t\t" + sinfo[3]+"\n")


baseaddress = 'https://finance.naver.com/sise/sise_market_sum.naver?&page='
for i in range(1,35):
    return_value(baseaddress+str(i))

f.close()
    
# with open('today_stock.txt','w') as f:
#     id_line = 'id: '+ str(real_userId) + ' \n'
#     pw_line = 'pw: '+ str(login_password) +' \n'
#     f.write(id_line)
#     f.write(pw_line)