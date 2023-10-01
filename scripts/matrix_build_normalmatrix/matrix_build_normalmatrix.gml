function matrix_build_normalmatrix(_m)
{
	gml_pragma("forceinline");

	var _m0  = _m[ 0];
	var _m1  = _m[ 1];
	var _m2  = _m[ 2];
	var _m4  = _m[ 4];
	var _m5  = _m[ 5];
	var _m6  = _m[ 6];
	var _m8  = _m[ 8];
	var _m9  = _m[ 9];
	var _m10 = _m[10];

	var _determinant = (0.0
		+ _m0 * ((_m5 * _m10) - (_m6 *  _m9))
		+ _m4 * ((_m9 *  _m2) - (_m1 * _m10))
		+ _m8 * ((_m1 *  _m6) - (_m5 *  _m2)));

	var _s = 1.0 / _determinant;

	var _dest = matrix_build_identity();

	_dest[@ 0]  = _s * ((_m5 * _m10) - (_m6 *  _m9));
	_dest[@ 1]  = _s * ((_m8 *  _m6) - (_m4 * _m10));
	_dest[@ 2]  = _s * ((_m4 *  _m9) - (_m8 *  _m5));
	//_dest[@ 3]  = 0.0;
	_dest[@ 4]  = _s * ((_m9 *  _m2) - (_m1 * _m10));
	_dest[@ 5]  = _s * ((_m0 * _m10) - (_m8 *  _m2));
	_dest[@ 6]  = _s * ((_m1 *  _m8) - (_m0 *  _m9));
	//_dest[@ 7]  = 0.0;
	_dest[@ 8]  = _s * ((_m1 * _m6) - (_m2 * _m5));
	_dest[@ 9]  = _s * ((_m2 * _m4) - (_m0 * _m6));
	_dest[@ 10] = _s * ((_m0 * _m5) - (_m1 * _m4));
	//_dest[@ 11] = 0.0;
	//_dest[@ 12] = 0.0;
	//_dest[@ 13] = 0.0;
	//_dest[@ 14] = 0.0;
	//_dest[@ 15] = 1.0;

	return _dest;
}
