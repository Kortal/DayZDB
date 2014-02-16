			// *** test
			
			_maxh = 16;
			_maxmin = 50;
			_minh = 7;
			_minmin = 15;
			
			_ctime = getSystemTime;
			_htime = _ctime select 3;
			_mtime = _ctime select 4;
			//diag_log format["*** test ***syst time %1", _c2time];
			//diag_log format["*** test *** heure %1, min %2", _htime, _mtime];
			
			_setmax = 0;
			_setmin = 0;
			
			if (_htime > _maxh) then {_setmax = 1};
			if ((_htime == _maxh) and (_mtime > _maxmin)) then {_setmax = 1};
			
			if (_htime < _minh) then {_setmin = 1};
			if ((_htime == _minh) and (_mtime > _minmin)) then {_setmin = 1};
			
			//default: using system time
			setDate getSystemTime;
			diag_log format["*** test *** using server time %1", _ctime];

			if (_setmax == 1) then
				{
				setDate [2014, 1, 1, _maxh, _maxmin];
				diag_log format["*** test *** time set to 16h50 %1", _ctime];
				};

			if (_setmin == 1) then
				{
				setDate [2014, 1, 1,_minh, _minmin];
				diag_log format["*** test *** time set to 07h15 %1", _ctime];
				};
			//output: "*** test *** [2014,2,15,21,18] "
			// *** end test
		
