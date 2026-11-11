
void FUN_004df520(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  *param_1 = &PTR_LAB_04868d60;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  FUN_004c9960(param_1 + 0x7a);
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x79);
  if (0 < iVar3) {
    puVar5 = (ulong *)(param_1[0x78] + (long)iVar3 * 0x20 + -0x10);
    do {
      if ((*puVar5 & 1) != 0) {
        FUN_0043dd50(*puVar5 & 0xfffffffffffffffe);
      }
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + -4;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x79) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3cc)) && (param_1[0x78] != 0)) {
    FUN_00421f90(puVar1,param_1[0x78],0x20,*(uint *)((long)param_1 + 0x3cc) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x77);
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x80000000;
  param_1[0x78] = 0;
  if (0 < iVar3) {
    puVar5 = (ulong *)(param_1[0x76] + (long)iVar3 * 0x18 + -8);
    do {
      if ((*puVar5 & 1) != 0) {
        FUN_0043dd50(*puVar5 & 0xfffffffffffffffe);
      }
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + -3;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x77) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3bc)) && (param_1[0x76] != 0)) {
    FUN_00421f90(puVar1,param_1[0x76],0x18,*(uint *)((long)param_1 + 0x3bc) & 0x3fffffff);
  }
  param_1[0x76] = 0;
  *(undefined4 *)((long)param_1 + 0x3bc) = 0x80000000;
  FUN_00470a90(param_1 + 0x73,puVar1);
  FUN_00470430(param_1 + 0x73);
  FUN_00454810(param_1 + 0x68);
  FUN_004617b0(param_1 + 0x5b);
  FUN_00470a90(param_1 + 0x59,puVar1);
  FUN_00470430(param_1 + 0x59);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 700)) && (param_1[0x56] != 0)) {
    FUN_00421f90(puVar1,param_1[0x56],4,*(uint *)((long)param_1 + 700) & 0x3fffffff);
  }
  param_1[0x56] = 0;
  *(undefined4 *)((long)param_1 + 700) = 0x80000000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2ac)) && (param_1[0x54] != 0)) {
    FUN_00421f90(puVar1,param_1[0x54],4,*(uint *)((long)param_1 + 0x2ac) & 0x3fffffff);
  }
  param_1[0x54] = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0x80000000;
  FUN_004e2000(param_1 + 0x42);
  iVar3 = *(int *)(param_1 + 0x3f);
  if (0 < iVar3) {
    plVar7 = (long *)(param_1[0x3e] + (long)iVar3 * 0x10);
    do {
      plVar6 = plVar7 + -2;
      *(undefined4 *)(plVar7 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar7 + -4)) && (*plVar6 != 0)) {
        FUN_00421f90(puVar1,*plVar6,0x18,*(uint *)((long)plVar7 + -4) & 0x3fffffff);
      }
      *plVar6 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar7 + -4) = 0x80000000;
      plVar7 = plVar6;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1fc)) && (param_1[0x3e] != 0)) {
    FUN_00421f90(puVar1,param_1[0x3e],0x10,*(uint *)((long)param_1 + 0x1fc) & 0x3fffffff);
  }
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0x80000000;
  thunk_FUN_0043f070(param_1 + 0x3b);
  FUN_004c7370(param_1 + 0xd);
  FUN_00470a90(param_1 + 9,puVar1);
  FUN_00470430(param_1 + 9);
  FUN_0043d280(param_1 + 7);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],8,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 4);
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if (0 < iVar3) {
    iVar4 = 0;
    plVar7 = (long *)(param_1[3] + (long)iVar3 * 0x10);
    do {
      plVar6 = plVar7 + -2;
      iVar8 = (int)plVar7[-1];
      if (0 < iVar8) {
        puVar5 = (ulong *)(*plVar6 + (long)iVar8 * 0x30 + -0x20);
        do {
          while ((puVar5[3] & 1) != 0) {
            FUN_0043dd50(puVar5[3] & 0xfffffffffffffffe);
            uVar2 = *puVar5;
            if ((uVar2 & 1) == 0) goto LAB_004df838;
LAB_004df858:
            FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
            iVar8 = iVar8 + -1;
            puVar5 = puVar5 + -6;
            if (iVar8 == 0) goto LAB_004df86c;
          }
          uVar2 = *puVar5;
          if ((uVar2 & 1) != 0) goto LAB_004df858;
LAB_004df838:
          iVar8 = iVar8 + -1;
          puVar5 = puVar5 + -6;
        } while (iVar8 != 0);
      }
LAB_004df86c:
      *(undefined4 *)(plVar7 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar7 + -4)) && (*plVar6 != 0)) {
        FUN_00421f90(puVar1,*plVar6,0x30,*(uint *)((long)plVar7 + -4) & 0x3fffffff);
      }
      iVar4 = iVar4 + 1;
      plVar7[-2] = 0;
      *(undefined4 *)((long)plVar7 + -4) = 0x80000000;
      plVar7 = plVar6;
    } while (iVar4 != iVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

