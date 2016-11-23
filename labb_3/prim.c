#pragma once
//tillåter oss att använda sqrt()

int prim(int svar)
{
	int ret, a, b, i = 0, res = 0;
	int lista[10000] = { 0 };

	for (a = svar - 1; 1 < sqrt(a); a--)
	{
		if (svar % a == 0)
		{
			lista[i] = a;
			i++;
		}
	}
	for (i; i >= 0; i--)
	{
		res += lista[i];
		// lista[i] = 0; 
	}
	res++;
	if (res != 1 && res>0 && res == svar)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return ret;
	//lyckas bara crusha till det 6:e perfekta talet//
}