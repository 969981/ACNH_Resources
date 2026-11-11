
undefined8 FUN_004c1d60(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  lVar3 = (long)*(int *)(param_1 + 0x30) << 3;
  while (((*(int *)(*plVar2 + 0x1c) != 3 || (*(long *)(*plVar2 + 0x10) == 0)) ||
         (uVar1 = FUN_004c1d60(), (uVar1 & 1) == 0))) {
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -8;
    if (lVar3 == 0) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return 1;
}

