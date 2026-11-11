
void FUN_004c7370(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar2 = 0;
    do {
      FUN_004c7620(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x60));
  }
  puVar1 = PTR_DAT_048607b8;
  FUN_00470a90(param_1 + 0x158,PTR_DAT_048607b8);
  FUN_00470430(param_1 + 0x158);
  FUN_00470a90(param_1 + 0x148,puVar1);
  FUN_00470430(param_1 + 0x148);
  FUN_0043d280(param_1 + 0x138);
  iVar3 = *(int *)(param_1 + 0x130);
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x128) + (long)iVar3 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x134)) && (*(long *)(param_1 + 0x128) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x128),0x10,*(uint *)(param_1 + 0x134) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x80000000;
  FUN_00471120(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xf4)) && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0xe8),8,*(uint *)(param_1 + 0xf4) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0xd8) + (long)iVar3 * 0x20;
    do {
      lVar2 = lVar2 + -0x20;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xe4)) && (*(long *)(param_1 + 0xd8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0xd8),0x20,*(uint *)(param_1 + 0xe4) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 200) + (long)iVar3 * 0x20;
    do {
      lVar2 = lVar2 + -0x20;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xd4)) && (*(long *)(param_1 + 200) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 200),0x20,*(uint *)(param_1 + 0xd4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  FUN_00470a90(param_1 + 0xb8,puVar1);
  FUN_00470430(param_1 + 0xb8);
  thunk_FUN_0043ef10(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 0x80);
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x78) + (long)iVar3 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x78),8,*(uint *)(param_1 + 0x84) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  FUN_00470a90(param_1 + 0x68,puVar1);
  FUN_00470430(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x58),8,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_00454810(param_1);
  return;
}

