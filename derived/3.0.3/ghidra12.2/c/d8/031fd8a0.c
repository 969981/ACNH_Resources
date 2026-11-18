
undefined8 FUN_031fd8a0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 7) && (*(long *)(param_1 + 8) != 0)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8);
  }
  return uVar1;
}

