#pragma once

#include <map>
#include <set>
#include "PaintDevice.h"

class Engine {
public:
	enum class ErrorCode {
		success = 0,
		paint_device_not_ready
	};

	virtual ~Engine() {
	}

	ErrorCode run();

protected:
	void track_key(const int key);

	void untrack_key(const int key);

	PaintDevice &paint_device() { return m_PaintDevice; }

	virtual bool end() const = 0;

	virtual void on_button_press(int button, int time) = 0;

	virtual void update(const int dt) = 0;

	virtual void render(PaintDevice &paintDevice) = 0;

private:
	void updateInput();

	PaintDevice m_PaintDevice;
	std::map<int, int> m_PressedKeys;
	std::set<int> m_TrackedKeys;
};
