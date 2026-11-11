
void FUN_004c1e10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0043d280(param_1 + 0xb8);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0xa8),0xc,*(uint *)(param_1 + 0xb4) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (0 < iVar3) {
    plVar4 = (long *)(*(long *)(param_1 + 0x88) + (long)iVar3 * 8);
    do {
      plVar4 = plVar4 + -1;
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_0043be10(lVar2);
        FUN_00438870(lVar2,8);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x88),8,*(uint *)(param_1 + 0x94) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x78) + (long)iVar3 * 0x28;
    do {
      lVar5 = *(long *)(lVar2 + -0x20);
      if (lVar5 != 0) {
        FUN_004ca7b0(lVar5);
        FUN_00438870(lVar5,0x28);
      }
      FUN_0043be10(lVar2 + -0x28);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x28;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x78),0x28,*(uint *)(param_1 + 0x84) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x68) + (long)iVar3 * 0x28;
    do {
      lVar5 = *(long *)(lVar2 + -0x20);
      if (lVar5 != 0) {
        FUN_004ca7b0(lVar5);
        FUN_00438870(lVar5,0x28);
      }
      FUN_0043be10(lVar2 + -0x28);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x28;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x68),0x28,*(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x58),4,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x38),8,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (0 < iVar3) {
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar3 * 8);
    do {
      plVar4 = plVar4 + -1;
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_004ca7b0(lVar2);
        FUN_00438870(lVar2,0x28);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_0043be10(param_1 + 0x18);
  FUN_0043be10(param_1 + 8);
  return;
}

