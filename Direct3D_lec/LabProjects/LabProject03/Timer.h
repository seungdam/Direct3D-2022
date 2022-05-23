#pragma once

//������ ����Ʈ(Frame Rate)�� ����� ������ Ƚ�� ���� �� �������� �������ϴ� �ð��� 
//����Ͽ� ����Ѵ�.�� Ƚ���� ��Ÿ���� ����� �����Ѵ�

const ULONG MAX_SAMPLE_COUNT = 50; // 50ȸ�� ������ ó���ð��� �����Ͽ� ����Ѵ�.

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
	// �����ڿ� �Ҹ��� �ۼ�
	CGameTimer();
	virtual ~CGameTimer();

	// ��� �Լ�
	void Start() { };
	void Stop() { };
	void Reset();
	
	void Tick(float fLockFPS = 0.0f); 
	// Ÿ�̸��� �ð��� ���� 
	
	unsigned long GetFrameRate(LPCSTR lpszString = NULL, int nCharacters = 0); // 
	// ������ ����Ʈ ��ȯ

	float GetTimeElapsed();
	// �������� ��� ��� �ð��� ��ȯ.
};

