
void FUN_004b0c20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_04868010;
  param_1[1] = &PTR_LAB_04868098;
  FUN_004bcab0(param_1 + 0x8f);
  FUN_0043d280(param_1 + 0x8d);
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x8c);
  if (0 < iVar3) {
    lVar2 = param_1[0x8b] + (long)iVar3 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x464)) && (param_1[0x8b] != 0)) {
    FUN_00421f90(puVar1,param_1[0x8b],0x10,*(uint *)((long)param_1 + 0x464) & 0x3fffffff);
  }
  param_1[0x8b] = 0;
  *(undefined4 *)((long)param_1 + 0x464) = 0x80000000;
  if (param_1[0x89] != 0) {
    FUN_004435c0();
  }
  FUN_0043d280(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x434)) && (param_1[0x85] != 0)) {
    FUN_00421f90(puVar1,param_1[0x85],0x10,*(uint *)((long)param_1 + 0x434) & 0x3fffffff);
  }
  param_1[0x85] = 0;
  *(undefined4 *)((long)param_1 + 0x434) = 0x80000000;
  FUN_0043d280(param_1 + 0x83);
  *(undefined4 *)(param_1 + 0x82) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x414)) && (param_1[0x81] != 0)) {
    FUN_00421f90(puVar1,param_1[0x81],0x10,*(uint *)((long)param_1 + 0x414) & 0x3fffffff);
  }
  param_1[0x81] = 0;
  *(undefined4 *)((long)param_1 + 0x414) = 0x80000000;
  FUN_0043d280(param_1 + 0x7f);
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3f4)) && (param_1[0x7d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x7d],0x10,*(uint *)((long)param_1 + 0x3f4) & 0x3fffffff);
  }
  param_1[0x7d] = 0;
  *(undefined4 *)((long)param_1 + 0x3f4) = 0x80000000;
  FUN_004bc890(param_1 + 0x59);
  FUN_004617b0(param_1 + 0x4b);
  thunk_FUN_0043f070(param_1 + 0x48);
  FUN_0043f070(param_1 + 0x42);
  FUN_0043d280(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1fc)) && (param_1[0x3e] != 0)) {
    FUN_00421f90(puVar1,param_1[0x3e],0x10,*(uint *)((long)param_1 + 0x1fc) & 0x3fffffff);
  }
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0x80000000;
  FUN_0043f070(param_1 + 0x3b);
  FUN_0043d280(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c4)) && (param_1[0x37] != 0)) {
    FUN_00421f90(puVar1,param_1[0x37],0x10,*(uint *)((long)param_1 + 0x1c4) & 0x3fffffff);
  }
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0x80000000;
  FUN_0043d280(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1a4)) && (param_1[0x33] != 0)) {
    FUN_00421f90(puVar1,param_1[0x33],0x10,*(uint *)((long)param_1 + 0x1a4) & 0x3fffffff);
  }
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0x80000000;
  FUN_00454810(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x27);
  if (0 < iVar3) {
    plVar4 = (long *)(param_1[0x26] + (long)iVar3 * 8);
    do {
      plVar4 = plVar4 + -1;
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_004c1e10(lVar2);
        FUN_00438870(lVar2,200);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    FUN_00421f90(puVar1,param_1[0x26],8,*(uint *)((long)param_1 + 0x13c) & 0x3fffffff);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  FUN_0043d280(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x23);
  if (0 < iVar3) {
    plVar4 = (long *)(param_1[0x22] + (long)iVar3 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar4 + 0xc)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar1,*plVar4,4,*(uint *)((long)plVar4 + 0xc) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar4 + 0xc) = 0x80000000;
      plVar4 = plVar4 + -3;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    FUN_00421f90(puVar1,param_1[0x22],0x18,*(uint *)((long)param_1 + 0x11c) & 0x3fffffff);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  FUN_0043d280(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1e],8,*(uint *)((long)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1b],8,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    FUN_00421f90(puVar1,param_1[0x18],8,*(uint *)((long)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  FUN_0043d280(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    FUN_00421f90(puVar1,param_1[0x14],8,*(uint *)((long)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  FUN_0043d280(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_00421f90(puVar1,param_1[0x10],8,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  FUN_0043d280(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_00421f90(puVar1,param_1[0xc],0x10,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  FUN_0043d280(param_1 + 10);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],0x10,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  FUN_0043d280(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],0x10,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}

