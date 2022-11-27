while True:
    check_find =0 #검색하려는 종목을 주가 데이터베이스에서 찾았는지 확인하는 변수
    check_to_contin_search=0 #계속 검색할 것인지 확인하는 변수
    search_stock = input("국내 주식 중에서 주가를 알고 싶은 종목을 입력하세요.(ex.삼성전자):")

    with open('today_stock.txt', "r", encoding="utf-8") as f:
        while True:
            line = f.readline()
            if line =="":
                print("입력하신 종목은 존재하지 않거나 국내 주식이 아닙니다.")
                break
            else:
                for i in range(len(line)-len(search_stock)):
                    if search_stock == line[i:i+len(search_stock)]:
                        for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기
                            if line[j]==" ":
                                stock_price = line[j+1:]
                                stock_price= stock_price.replace("\n","")
                        print("검색하신 [{}]의 주가는 {}원입니다.".format(search_stock,stock_price))
                        check_find=1
                        break
            if check_find==1:
                break     
        f.close()
    check_to_contin_search = input("계속해서 주가를 검색하시려면 Enter를 눌러주시고, 종료하시려면 1을 입력하세요.")
    try:
        if int(check_to_contin_search)==1:
            break
    except:
        pass
    print("")