
long * FUN_0192cda0(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  if (*param_1 < param_1[1]) {
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar5;
    }
    plVar7 = (long *)*param_3;
    *plVar5 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = param_2[1];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[1] = lVar4;
    lVar4 = param_2[6];
    *plVar5 = (long)&DAT_04b7e798;
    *(int *)(plVar5 + 4) = (int)lVar4;
    plVar6 = plVar5 + 5;
    *plVar6 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,plVar5);
    }
    plVar5[9] = 0;
    *plVar5 = (long)&PTR_LAB_049dccd0;
    puVar1 = PTR_DAT_04bb6048;
    plVar5[7] = (long)"mItemUniqueID";
    plVar5[8] = 0;
    *(undefined4 *)(plVar5 + 10) = 8;
    plVar5[0xb] = 0;
    plVar5[6] = (long)(puVar1 + 0x10);
    lVar4 = plVar5[5];
    if (plVar5[5] != 0) {
      do {
        lVar3 = lVar4;
        lVar4 = *(long *)(lVar3 + 0x10);
      } while (lVar4 != 0);
      plVar6 = (long *)(lVar3 + 0x10);
    }
    *plVar6 = (long)(plVar5 + 6);
    plVar5[9] = (long)plVar5;
    puVar2 = (undefined2 *)(**(code **)(plVar5[6] + 0xf0))();
    *puVar2 = 0xfffe;
    if ((*(uint *)(plVar5 + 10) >> 7 & 1) == 0) {
      plVar5[0xb] = 0;
      *(undefined2 *)(plVar5 + 0xb) = 0xfffe;
    }
    local_68 = PTR_DAT_04bb2020;
    *(uint *)(plVar5 + 10) = *(uint *)(plVar5 + 10) & 0xfeffffff;
    local_38 = 0;
    local_68 = local_68 + 0x10;
    pcStack_60 = "mIndividualLayoutParamsBuffer";
    puStack_50 = &DAT_040b0be5;
    puStack_40 = &DAT_0407ebb1;
    local_58 = local_68;
    local_48 = local_68;
    FUN_01923c9c(plVar5 + 0xc,&local_68,plVar5);
    *plVar5 = (long)&PTR_LAB_049dcb68;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar5;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  return plVar5;
}

