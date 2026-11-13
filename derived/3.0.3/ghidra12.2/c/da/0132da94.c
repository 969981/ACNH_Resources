
long FUN_0132da94(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0xf0))();
  lVar1 = lVar2 + 8 + (ulong)param_2 * 0xe;
  if (0x14 < param_2 >> 9) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}

