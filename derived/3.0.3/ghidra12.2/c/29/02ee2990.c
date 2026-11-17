
undefined8 FUN_02ee2990(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x210);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(lVar3 + 0x570) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x570) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar3 + 0x578) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x578) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar3 + 0x580) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x580) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar3 + 0x588) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x588) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar3 + 0x590) == 0) ||
     ((plVar1 = *(long **)(*(long *)(lVar3 + 0x590) + 0x1b0), plVar1 != (long *)0x0 &&
      (uVar2 = (**(code **)(*plVar1 + 0x48))(), (uVar2 & 1) == 0)))) {
    return 0;
  }
  return 1;
}

