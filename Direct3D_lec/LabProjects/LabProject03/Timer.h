#pragma once
//프레임 레이트(Frame Rate)의 계산은 일정한 횟수 동안 각 프레임을 렌더링하는 시간을 
//평균하여 계산한다.이 횟수를 나타내는 상수를 정의한다

class CGameTimer {
public:
	CGameTimer();
	virtual ~CGameTimer();
};

