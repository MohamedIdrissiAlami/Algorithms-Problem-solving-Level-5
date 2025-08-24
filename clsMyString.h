#pragma once
#include "clsMyStack.h"

class clsMyString
{
private:
	clsMyStack <string>_Undo;
	clsMyStack<string>_Redo;
	string _Value = "";
public:
	clsMyString()
	{
		_Undo.Push(_Value);
	}
	void SetValue(string Value)
	{
		_Undo.Push(Value);
		_Value = Value;
		_Redo.Clear();
	}
	string GetValue()
	{
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo()
	{
		if (_Undo.Size() > 1)
		{
			_Redo.Push(_Value);
			_Undo.Pop();
			_Value = _Undo.Top();
		}
	}
	void Redo()
	{
		if (!_Redo.IsEmpty())
		{
			_Undo.Push(_Redo.Top());
			_Value = _Redo.Top();
			_Redo.Pop();
		}
	}

};