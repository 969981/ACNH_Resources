
long * FUN_02062744(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  if (*param_1 < param_1[1]) {
    plVar3 = *(long **)(param_1 + 4);
    if (plVar3 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar3;
    }
    plVar4 = (long *)*param_3;
    *plVar3 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar1 = PTR_DAT_04bb60a0;
    lVar2 = param_2[1];
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[1] = lVar2;
    lVar2 = param_2[6];
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[5] = 0;
    *(int *)(plVar3 + 4) = (int)lVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x140))(plVar4,plVar3);
    }
    puVar1 = PTR_DAT_04bb2020;
    *plVar3 = (long)&PTR_FUN_04a6fae8;
    local_38 = 0;
    local_78 = (undefined1 *)0x0;
    puStack_70 = (undefined1 *)0x3f80000000000000;
    puVar1 = puVar1 + 0x10;
    pcStack_60 = "mNameStrColor";
    puStack_50 = &DAT_0409253f;
    puStack_40 = &DAT_0407ebb1;
    local_68 = puVar1;
    local_58 = puVar1;
    local_48 = puVar1;
    FUN_00744b60(plVar3 + 6,&local_68,&local_78,plVar3);
    local_38 = 0;
    pcStack_60 = "mNameBgColor";
    puStack_50 = &DAT_040b63c5;
    puStack_40 = &DAT_0407ebb1;
    local_78 = &DAT_3f8000003f800000;
    puStack_70 = &DAT_3f8000003f800000;
    local_68 = puVar1;
    local_58 = puVar1;
    local_48 = puVar1;
    FUN_00744b60(plVar3 + 0xe,&local_68,&local_78,plVar3);
    *plVar3 = (long)&PTR_FUN_04a6f988;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar3;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

