
long FUN_02907208(long param_1)

{
  long lVar1;
  
  if (*DAT_04ccdcc0 < 0x10) {
    lVar1 = *(long *)(&DAT_0417bf28 + (long)(int)*DAT_04ccdcc0 * 8);
  }
  else {
    lVar1 = 1;
  }
  return param_1 + lVar1 * 0x2c;
}

