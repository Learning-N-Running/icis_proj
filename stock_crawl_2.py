#어제와 오늘의 kospi200, kosdaq 지수 가져오기
import requests
from bs4 import BeautifulSoup
import os

if os.path.isfile('economic_ind.txt'): 
        os.remove('economic_ind.txt') #economic_ind.txt 라는 파일이 이미 있으면 지우기(새로운 주식 데이터베이스를 구축하기 위함.)

f = open('economic_ind.txt','w',encoding="utf-8") 

def return_value(address,classnum):
    res = requests.get(address)
    soup = BeautifulSoup(res.content, 'html.parser')
    item = soup.find_all("span",class_= classnum)
    return item
    
basic_url = "https://finance.naver.com/sise/"

now_item = return_value(basic_url,"num")
now_kospi200 = now_item[3].string
now_kosdaq = now_item[2].string

change_item = return_value(basic_url,"num_s")

change_kospi200 = change_item[2].text #\n이 앞,뒤에 붙어있음
change_kospi200_num = change_kospi200[1:5]
change_kospi200_up_do = change_kospi200[6:7]
change_kospi200_per = change_kospi200[7:12]

change_kosdaq = change_item[1].text
change_kosdaq_num = change_kosdaq[1:5]
change_kosdaq_up_do = change_kosdaq[6:7]
change_kosdaq_per = change_kosdaq[7:12]


# f.write("now_kospi200 "+now_kospi200+"\n")
# f.write("now_kosdaq " + now_kosdaq+"\n")
# f.write("change_kospi200 " + change_kospi200)
# f.write("change_kosdaq " + change_kosdaq)


f.write("현재 코스피200은 "+now_kospi200+" 입니다."+"\n")
f.write("현재 코스닥은 "+now_kosdaq+" 입니다."+"\n")

f.write("코스피200은 "+change_kospi200_num)
f.write("("+change_kospi200_up_do+change_kospi200_per+")")
if change_kospi200_up_do=="+":
    f.write("상승하였습니다.")
elif change_kospi200_up_do=="-":
    f.write("하락하였습니다.\n")

f.write("코스닥은 "+change_kosdaq_num)
f.write("("+change_kosdaq_up_do+change_kosdaq_per+")")
if change_kosdaq_up_do=="+":
    f.write("상승하였습니다.")
elif change_kosdaq_up_do=="-":
    f.write("하락하였습니다.")

f.close()