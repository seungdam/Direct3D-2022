#pragma once

//프레임 레이트(Frame Rate)의 계산은 일정한 횟수 동안 각 프레임을 렌더링하는 시간을 
//평균하여 계산한다.이 횟수를 나타내는 상수를 정의한다

const ULONG MAX_SAMPLE_COUNT = 50; // 50회의 프레임 처리시간을 누적하여 평균한다.

class CGameTimer {
private:
private:
	bool m_bHardwareHasPerformanceCounter;
	float m_fTimeScale;
	float m_fTimeElapsed;
	__int64 m_nCurrentTime;
	__int64 m_nLastTime;
	__int64 m_nPerformanceFrequency;
	float m_fFrameTime[MAX_SAMPLE_COUNT];
	ULONG m_nSampleCount;
	unsigned long m_nCurrentFrameRate;
	unsigned long m_nFramesPerSecond;
	float m_fFPSTimeElapsed;
	bool m_bStopped;

public:
	// 생성자와 소멸자 작성
	CGameTimer();
	virtual ~CGameTimer();

	// 멤버 함수
	void Start() { };
	void Stop() { };
	void Reset();
	
	void Tick(float fLockFPS = 0.0f); 
	// 타이머의 시간을 갱신 
	
	unsigned long GetFrameRate(LPCSTR lpszString = NULL, int nCharacters = 0); // 
	// 프레임 레이트 반환

	float GetTimeElapsed();
	// 프레임의 평균 경과 시간을 반환.
};

