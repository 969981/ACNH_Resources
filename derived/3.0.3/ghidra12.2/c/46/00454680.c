
void FUN_00454680(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(uint *)(param_1 + 0x20) = -(uint)(*(int *)(param_1 + 0x40) < 1);
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar4);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                (*(long **)(param_1 + 0x30),*puVar1,puVar1[1]);
      iVar3 = *(int *)(param_1 + 0x50);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < iVar3);
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar5 = 0;
    do {
      (**(code **)(*plVar2 + 0x18))
                (plVar2,*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar5 * 8),
                 *(undefined8 *)(param_1 + 0x18));
      plVar2 = *(long **)(param_1 + 0x30);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x38),8,*(uint *)(param_1 + 0x44) & 0x3fffffff);
    plVar2 = *(long **)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x48),0x10,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}

