#pragma once

#include "imgui.h"
#include "YorkDefine.h"
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <string>
#include <vector>
#include <map>

//using std::string;

namespace YorkWidget
{
	static inline ImVec2 operator+(const ImVec2& lhs, const ImVec2& rhs) { return ImVec2(lhs.x + rhs.x, lhs.y + rhs.y); }
	static inline ImVec2 operator-(const ImVec2& lhs, const ImVec2& rhs) { return ImVec2(lhs.x - rhs.x, lhs.y - rhs.y); }
    
	static int64_t widget_id = 0;
	class YorkWidgets
	{
	public:
        
		/**
		 Draw this widget

		 @param drawList the drawList of imgui
		 @param offset offset of window pos
		 */
		virtual void DrawWidget(ImDrawList* drawList, ImVec2 offset) {}
        
        virtual void SetVisable(bool value){ _visable = value; }
        
        bool GetVisable(){ return _visable; }
        
        ImVec2 GetPosition(){ return _pos; }
        
        ImVec2 GetSize(){ return _size; }

	private:

	protected:
		ImVec2 _pos;
		ImVec2 _size;
		int64_t _id;
        bool    _visable = true;
	};

	
}

