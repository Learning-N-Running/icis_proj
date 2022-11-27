while True:
    check_find =0 #검색하려는 종목을 주가 데이터베이스에서 찾았는지 확인하는 변수
    check_to_contin_search=0 #계속 검색할 것인지 확인하는 변수
    back_to_search =0 #search_stock이 포함된 종목명이 여러개일 때 다시 입력하기를 요청하는 변수
    search_stock = input("국내 주식 중에서 주가를 알고 싶은 종목을 입력하세요.(ex.삼성전자): ")
    search_stock = search_stock.upper() #거의 대부분의 종목은 영어가 포함되어있을 때, 그 영어가 모두 대문자이다. 따라서 입력한 문자를 대문자화한다.
    with open('today_stock.txt', "r", encoding="utf-8") as f:
        while True:
            line = f.readline()
            if line =="":
                print("입력하신 종목은 존재하지 않거나 국내 주식이 아닙니다.")
                break
            else:
                for i in range(len(line)-len(search_stock)):
                    if search_stock == line[i:i+len(search_stock)]: #전체 종목 중 찾고자 하는 종목을 찾았다면
                        if (line[i-1] != "_") and (line[i+len(search_stock)]=="_"):
                            for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기
                                if line[j]=="_":
                                    stock_price = line[j+1:]
                                    stock_price= stock_price.replace("\n","")
                            print("검색하신 [{}]의 주가는 {}원입니다.".format(search_stock,stock_price))
                            check_find=1
                            break
                        else:
                            same_list = []
                            for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기
                                if line[j]=="_":
                                    real_name = line[:j]
                                    break
                            same_list.append(real_name)
                            while True:
                                line = f.readline()
                                if line =="":
                                    break
                                else:
                                    for k in range(len(line)-len(search_stock)):
                                        if search_stock == line[k:k+len(search_stock)]:
                                            for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기
                                                if line[j]=="_":
                                                    real_name = line[:j]
                                                    break
                                            same_list.append(real_name)
                                            break
                            print("\n입력하신 \"{}\"이 포함된 종목은 ".format(search_stock),end='')
                            for l in range(len(same_list)-1):
                                print("[{}], ".format(same_list[l]),end='')
                            print("[{}]".format(same_list[len(same_list)-1]),end='')
                            print("입니다.")
                            print("정확한 종목명으로 다시 입력해주세요.")
                            print("")
                            check_find=1
                            back_to_search =1
                            break
            if check_find==1:
                break     
        f.close()
    if back_to_search==1:
        continue
    check_to_contin_search = input("\n계속해서 주가를 검색하시려면 Enter를 눌러주시고, 종료하시려면 1을 입력하세요.")
    try:
        if int(check_to_contin_search)==1:
            break
    except:
        pass
    print("")