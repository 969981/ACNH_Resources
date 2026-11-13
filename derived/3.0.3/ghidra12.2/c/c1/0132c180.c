
long FUN_0132c180(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0xf0))();
  lVar1 = lVar2 + 8 + (ulong)param_2 * 0xe;
  if (0xfff < param_2) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}

