
void FUN_03c5dcc0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x158) != param_1 + 0x150) {
    lVar2 = (long)*(int *)(param_1 + 0x164);
    plVar1 = (long *)(*(long *)(param_1 + 0x158) - lVar2);
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
    } while (plVar1 != (long *)((param_1 + 0x150) - lVar2));
  }
  lVar2 = *(long *)(param_1 + 0x168);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar3 = (long)*(int *)(lVar2 + 0x14);
    plVar1 = (long *)(*(long *)(lVar2 + 8) - lVar3);
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar3 + 8) - lVar3);
    } while (plVar1 != (long *)(lVar2 - lVar3));
  }
  lVar2 = *(long *)(param_1 + 0x170);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar3 = (long)*(int *)(lVar2 + 0x14);
    plVar1 = (long *)(*(long *)(lVar2 + 8) - lVar3);
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar3 + 8) - lVar3);
    } while (plVar1 != (long *)(lVar2 - lVar3));
  }
  if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
    lVar3 = (long)*(int *)(param_1 + 0x4c);
    lVar2 = *(long *)(param_1 + 0x40) - lVar3;
    do {
      FUN_03c5dcc0(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (param_1 + 0x38) - lVar3);
  }
  return;
}

