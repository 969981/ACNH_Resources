
ulong * FUN_00426e60(ulong *param_1,uint param_2)

{
  while( true ) {
    if ((*param_1 & (ulong)param_2) != 0) {
      return param_1;
    }
    if ((*param_1 & 1) != 0) break;
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

