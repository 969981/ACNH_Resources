
void FUN_00490340(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x22];
  *param_1 = &PTR_FUN_04866478;
  if (plVar2 == (long *)0x0) {
    puVar1 = PTR_DAT_048607b8;
  }
  else {
    FUN_0043d280(plVar2 + 2);
    puVar1 = PTR_DAT_048607b8;
    *(undefined4 *)(plVar2 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar2 + 0xc)) && (*plVar2 != 0)) {
      FUN_00421f90(puVar1,*plVar2,4,*(uint *)((long)plVar2 + 0xc) & 0x3fffffff);
    }
    *plVar2 = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0x80000000;
    FUN_00438870(plVar2,0x20);
  }
  FUN_00454810(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_00421f90(puVar1,param_1[0x13],0x10,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],8,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],8,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],8,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],1,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],1,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_004866e0(param_1);
  return;
}

