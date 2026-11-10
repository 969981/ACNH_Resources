
long FUN_00232c44(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)param_2 & 0xff) * 0x268 + 0x11e8;
  if ((param_2 & 0xfe) != 0) {
    lVar1 = 0;
  }
  return lVar1;
}

