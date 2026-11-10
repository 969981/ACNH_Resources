
undefined4 FUN_0029da74(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(param_1 + 0xf0) != 0) && (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8)))
  {
    plVar2 = *(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x162) * 8 + 0x168);
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0xe0))();
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0x100))) {
        return 0;
      }
      plVar2 = *(long **)(param_1 + (ulong)(*(char *)(param_1 + 0x162) == '\0') * 8 + 0x168);
      uVar1 = 0;
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0xe0))();
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        uVar1 = *(undefined4 *)(param_1 + (ulong)(*(char *)(param_1 + 0x162) == '\0') * 4 + 400);
      }
    }
  }
  return uVar1;
}

