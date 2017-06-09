# Obtaining-Wireless-Links-and-Numbers
무선 링크 및 개수 구하기
 구현한 클레스 설명
 - Node 클래스는 노드의 좌표 x,y를 맴버변수로 한다. 
    - 좌표는 100개를 저장하기 위해서 배열로 100를 만든다.
    1. void node_numset(int num)
      - 노드의 좌표를 출력하는 함수이다.
    2. void node_print(int num)
      - 노드를 프린터하는 함수이다.
    3. int nodelinked_num(int num)
      - 전송범위를 설정하고 노드의 링크들의 거리 계산, 
        총 링크의 개수를 출력한다.

■ 구현한 메인한수 설명
   - srand((unsigned)time(NULL));// 시드값을 바꿔준다.
   - 노드의 개수를 입력받아서 함수로 넘겨준다.

■ 실행화면
