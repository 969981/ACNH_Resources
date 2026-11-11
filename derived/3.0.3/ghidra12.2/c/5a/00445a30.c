
void FUN_00445a30(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  
  *param_1 = &PTR_LAB_048612a0;
  uVar3 = *(undefined8 *)PTR_PTR_04bd4d20;
  if (*(int *)(param_1 + 8) != 0) {
    puVar5 = (undefined8 *)param_1[7];
    puVar1 = puVar5 + *(int *)(param_1 + 8);
    do {
      for (plVar4 = *(long **)*puVar5; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0xc]) {
        iVar6 = (int)plVar4[1];
        if (0 < iVar6) {
          plVar7 = (long *)(*plVar4 + (long)iVar6 * 0x10);
          do {
            plVar7 = plVar7 + -2;
            if (*plVar7 != 0) {
              FUN_004435c0();
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        *(undefined4 *)(plVar4 + 1) = 0;
        if (((long *)*plVar4 != plVar4 + 2) && (-1 < *(int *)((long)plVar4 + 0xc))) {
          FUN_00426b50(uVar3,plVar4,0x10,plVar4 + 2,4);
        }
        *(undefined1 *)(plVar4 + 10) = 0;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  DAT_04c6f478._0_4_ = 0;
  if ((-1 < (int)DAT_04c6f478._4_4_) && (DAT_04c6f470 != 0)) {
    FUN_00421f90(uVar3,DAT_04c6f470,4,DAT_04c6f478._4_4_ & 0x3fffffff);
  }
  DAT_04c6f470 = 0;
  DAT_04c6f478._4_4_ = 0x80000000;
  FUN_0043d310(&DAT_04c6f480);
  FUN_00446a70(param_1 + 10);
  FUN_00446a70(param_1 + 9);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(uVar3,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  FUN_0043d280(param_1 + 5);
  iVar6 = *(int *)(param_1 + 4);
  if (0 < iVar6) {
    lVar2 = param_1[3] + (long)iVar6 * 0x10;
    do {
      if (*(long *)(lVar2 + -8) != 0) {
        FUN_004435c0();
      }
      FUN_0043be10(lVar2 + -0x10);
      iVar6 = iVar6 + -1;
      lVar2 = lVar2 + -0x10;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(uVar3,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

