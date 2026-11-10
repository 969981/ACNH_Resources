
undefined4 FUN_002e9ab0(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 4) && (*(long *)(param_1 + 0x2c8) != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x2c8) + (ulong)param_2 * 0x648 + 0x10);
  }
  return uVar1;
}

