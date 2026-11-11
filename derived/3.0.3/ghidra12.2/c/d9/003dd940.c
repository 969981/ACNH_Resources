
undefined8 FUN_003dd940(long param_1,undefined4 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18) + (ulong)param_3 * 0x14;
  *param_2 = *(undefined4 *)(lVar1 + 4);
  param_2[1] = *(undefined4 *)(lVar1 + 8);
  FUN_003ddae8();
  uVar2 = FUN_003ddaf4();
  *(undefined8 *)(param_2 + 2) = uVar2;
  return 1;
}

