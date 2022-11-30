while True: #계속해서 주가를 검색할 수 있게 하기 위해 설정한 무한루프문. #첫번째 while True문
    check_find =0 #검색하려는 종목을 주가 데이터베이스에서 찾았는지 확인하는 변수
    check_to_contin_search=0 #계속 검색할 것인지 확인하는 변수
    back_to_search =0 #search_stock이 포함된 종목명이 여러개일 때 다시 입력하기를 요청하는 변수
    coincide = "" #search_stock이 포함된 종목명이 여러개이지만 그 중에서 search_stock과 동일한 이름의 종목이 있을 경우 그 주가를 저장하는 변수
    are_you_finding = '' #search_stock이 포함된 종목명이 여러개이지만 그 중에서 search_stock과 동일한 이름의 종목이 있을 경우 그것을 찾는 것이 맞냐 물어보는 변수
    #ex) lg를 검색한 경우, lg화학, lg에너지솔루션등을 검색하려고 하는 것이냐 하는 메시지가 뜸. 근데 lg라는 종목도 있기 때문에 lg라는 이름의 종목의 주가를 찾아주기 위한 기능
    search_stock = input("국내 주식 중에서 주가를 알고 싶은 종목을 입력하세요.(ex.삼성전자): ") #search_stock :찾기 위해 입력된 문자열
    search_stock = search_stock.upper() #거의 대부분의 종목은 영어가 포함된 경우, 그 영어가 모두 대문자이다. 따라서 입력한 문자를 대문자화한다.

    with open('today_stock.txt', "r", encoding="utf-8") as f: #stock_creawl_1.py에서 만들어진 국내 주식 모음 today_stock.txt 열기. 이때 종목들은 한글과 영어로 구성되어있으므로 인코딩을 utf-8로 하여 읽는다. 
        while True: #두번째 while True문
            line = f.readline() #today_stock.txt 한 줄씩 읽기
            if line =="": #today_stock.txt를 끝까지 다 읽었는 데에도 찾는 종목이 없을 경우.
                print("입력하신 종목은 존재하지 않거나 국내 주식이 아닙니다.")
                break
            else:
                for i in range(len(line)-len(search_stock)):
                    if search_stock == line[i:i+len(search_stock)]: #전체 종목 중 입력된 값을 찾았다면
                        if (line[i-1] != "_") and (line[i+len(search_stock)]=="_"): # 입력된 값과 그 종목명이 일치한다면
                            for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기  
                                if line[j]=="_": # _는 종목명과 주가를 구분하는 문자
                                    stock_price = line[j+1:] # stock_price : 주가
                                    stock_price= stock_price.replace("\n","")
                            print("검색하신 [{}]의 주가는 {}원입니다.".format(search_stock,stock_price))
                            check_find=1 #검색하려는 종목을 주가 데이터베이스에서 찾았으니 check_find=1이 되고 첫번째 while True문을 빠져나올 수 있게 된다.
                            break
                        else: #전체 종목 중 입력한 값을 찾긴 찾았는데, 입력한 값과 그 종목명이 일치하지 않고 종목명에 입력한 값이 포함되어있을 때.
                            #ex) 입력한 값이 lg인데 lg가 포함된 종목은 LG, LG화학, LG에너지솔루션 등등이 있음.
                            same_list = [] #입력한 값이 포함된 종목들의 리스트
                            for j in range(len(line)):
                                if line[j]=="_":
                                    real_name = line[:j] #입력한 값이 포함된 종목을 real_name에 저장
                                    if real_name == search_stock: #입력된 값이 포함된 종목이 입력된 값과 일치할 때. ex)LG 입력했는데 LG라는 이름의 종목도 존재.
                                        coincide = line[j+1:]
                                        coincide= coincide.replace("\n","") #coincide에 입력된 값의 주가 저장.
                                    same_list.append(real_name) #same_list에 real_name 추가
                                    break
                                
                            while True: #계속해서 same_list에 real_name 추가
                                line = f.readline()
                                if line =="": #today_stock.txt를 끝까지 다 읽었는데, 이제 더이상 입력된 값을 포함하는 종목이 없는 경우
                                    break #멈춘다.
                                else:
                                    for k in range(len(line)-len(search_stock)): #위와 동일한 구조
                                        if search_stock == line[k:k+len(search_stock)]:
                                            for j in range(len(line)): #데이터베이스에서 해당 종목의 주가 찾기
                                                if line[j]=="_":
                                                    real_name = line[:j]
                                                    if real_name == search_stock:
                                                        coincide = line[j+1:]
                                                        coincide= coincide.replace("\n","")
                                                    break
                                            same_list.append(real_name)
                                            break
                            print("\n입력하신 \"{}\"이 포함된 종목은 ".format(search_stock),end='')
                            for l in range(len(same_list)-1):
                                print("[{}], ".format(same_list[l]),end='')
                            print("[{}]".format(same_list[len(same_list)-1]),end='')
                            print("입니다.")

                            if coincide !="": #concide가 초기값인 ""가 아니라는 것은 coincide에 어떤 값이 저장되어있다는 것. 즉 입력된 값을 포함하는 종목도 여러개이고, 입력된 값과 일치하는 종목도 존재함.
                                print("\n혹시 [{}]라는 종목을 찾으시나요?".format(search_stock))
                                are_you_finding= input("맞다면 1, 아니라면 0을 입력하세요: ")
                                if are_you_finding=='1': #search_stock이라는 종목을 찾는 것이 맞다면
                                    print("검색하신 [{}]의 주가는 {}원입니다.".format(search_stock, coincide))
                                    check_find=1
                                    break
                                else: #search_stock이라는 종목을 찾는 것이 아니라면 
                                    print("정확한 종목명으로 다시 입력해주세요.")
                                    print("")
                                    check_find=1
                                    back_to_search =1
                                    break
                            else: #입력된 값을 포함하는 종목들이 여러개지만 입력된 값과 일치하는 종목은 없을 때 
                                print("정확한 종목명으로 다시 입력해주세요.")
                                print("")
                                check_find=1
                                back_to_search =1
                                break
       
            if check_find==1: #두번째 while True문을 탈출하게 해주는 장치
                break     
        f.close()
    if back_to_search==1: #입력된 값을 포함하는 종목들이 여러개인 경우 중에서 입력된 값과 일치하는 종목이 있지만 그 종목을 검색하려는 것이 아닐 때, 입력된 값과 일치하는 종목이 없을 때
        continue #계속해서 주가 검색
    check_to_contin_search = input("\n계속해서 주가를 검색하시려면 Enter를 눌러주시고, 종료하시려면 1을 입력하세요.") #계속해서 주가를 검색할 것인지 묻는 부분
    try: #check_to_contin_search가 문자인 경우 int(check_to_contin_search) 를 하면 오류가 나기 때문에 오류 처리를 해주었다.
        if int(check_to_contin_search)==1:
            break #주가 검색 기능 종료
    except:
        pass
    print("")