
void FUN_004617b0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  uVar2 = iVar3 - 1;
  if (0 < iVar3) {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x18) + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
      if (lVar5 != 0) {
        FUN_00462390(lVar5);
        FUN_00438870(lVar5,0x28);
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_0043d590(param_1 + 0x28);
  }
  iVar4 = *(int *)(param_1 + 0x40);
  iVar3 = iVar4 + -1;
  if (0 < iVar4) {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 0x18 + 0x10);
      if (lVar5 != 0) {
        FUN_00462390(lVar5);
        FUN_00438870(lVar5,0x28);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_0043d590(param_1 + 0x48);
  }
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x58),0x10,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_0043d280(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x38),0x18,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  FUN_0043d280(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0 < iVar3) {
    plVar6 = (long *)(*(long *)(param_1 + 8) + (long)iVar3 * 8);
    do {
      plVar6 = plVar6 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x10))();
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 8),8,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}

