
void FUN_00444ca0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((undefined8 *)param_1[3] != param_1) {
    local_70 = *param_1;
    local_68 = 5;
    local_66 = 0;
    local_64 = 0;
    local_60 = nn::os::GetCurrentThread();
    uStack_58 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_67 = 0xff;
    local_50 = 0;
    uStack_48 = 0;
    if (*(int *)(param_1 + 7) != 0) {
      plVar3 = (long *)param_1[6];
      lVar4 = (long)*(int *)(param_1 + 7) << 3;
      do {
        plVar1 = (long *)*plVar3;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,&local_70);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    FUN_0043c4a0(*(undefined2 *)PTR_DAT_04bd61c0,param_1[3]);
    FUN_0043be10(&uStack_58);
  }
  iVar2 = *(int *)(param_1 + 7);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[6] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  return;
}

