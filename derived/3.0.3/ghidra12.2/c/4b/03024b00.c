
void FUN_03024b00(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_031098d4(*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x2e0));
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  if (((lVar3 != 0) && (plVar2 = *(long **)(param_1 + 0x2e0), plVar2 != (long *)0x0)) &&
     (1 < *(int *)((long)plVar2 + 0x24))) {
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x2f0) + (ulong)(1 < *(uint *)(lVar3 + 0x2e8)) * 8);
    uVar1 = (**(code **)(*plVar2 + 0xb8))();
    FUN_0344d4a0(uVar4,uVar1,*(undefined4 *)(*(long *)(param_1 + 0x2e0) + 0x20));
  }
  if (((*(long *)(param_1 + 0x868) == 0) ||
      (plVar2 = *(long **)(param_1 + 0x2e0), plVar2 == (long *)0x0)) ||
     (*(int *)((long)plVar2 + 0x24) < 2)) {
    return;
  }
  uVar4 = **(undefined8 **)(*(long *)(param_1 + 0x868) + 0x230);
  uVar1 = (**(code **)(*plVar2 + 0xb8))();
  FUN_0344d4a0(uVar4,uVar1,*(undefined4 *)(*(long *)(param_1 + 0x2e0) + 0x20));
  return;
}

