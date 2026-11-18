
undefined2 FUN_03684844(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 8);
  if (0x14 < *(uint *)(param_1 + 8)) {
    uVar1 = 0;
  }
  return *(undefined2 *)(param_2 + uVar1 * 2);
}

