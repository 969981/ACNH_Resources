
undefined8 FUN_003c90c8(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((*(char *)(param_1 + 0x18) == '\0') || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) ||
     (**(uint **)(param_1 + 8) <= param_2)) {
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar2 + (ulong)param_2 * 8);
  *(undefined8 *)(lVar2 + (ulong)param_2 * 8) = param_3;
  return uVar1;
}

