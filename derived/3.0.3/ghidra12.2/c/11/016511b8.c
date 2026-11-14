
long * FUN_016511b8(int *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined *local_68;
  char *local_60;
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
    puVar2 = PTR_DAT_04bb2020;
    local_38 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_60 = *(char **)(param_2 + 8);
    puStack_40 = &DAT_0407ebb1;
    puStack_50 = *(undefined **)(param_2 + 0x18);
    *plVar3 = (long)(PTR_DAT_04bb3050 + 0x10);
    local_68 = puVar1;
    local_58 = puVar1;
    local_48 = puVar1;
    (**(code **)(puVar2 + 0x28))(&local_68);
    plVar3[3] = 0;
    *(undefined1 *)((long)plVar3 + 0x44) = 0;
    *(undefined4 *)(plVar3 + 8) = 0x100;
    *(undefined1 *)((long)plVar3 + 0x143) = 0;
    plVar3[7] = (long)plVar3 + 0x44;
    puVar2 = PTR_DAT_04bb21f8;
    plVar3[1] = (long)local_60;
    plVar3[2] = 0;
    *(undefined1 *)(plVar3 + 0x29) = 0;
    plVar3[0x2a] = (long)plVar3;
    *(undefined4 *)(plVar3 + 4) = local_38;
    plVar3[5] = 0;
    plVar3[6] = (long)(puVar2 + 0x10);
    *plVar3 = (long)&PTR_LAB_049b8af0;
    local_38 = 0;
    local_60 = "mColor";
    puStack_50 = &DAT_04087099;
    puStack_40 = &DAT_0407ebb1;
    local_78 = 0x3f8000003f733333;
    puStack_70 = &DAT_3f8000003f800000;
    local_68 = puVar1;
    local_58 = puVar1;
    local_48 = puVar1;
    FUN_00744b60(plVar3 + 0x2b,&local_68,&local_78,plVar3);
    *plVar3 = (long)&PTR_LAB_049b8988;
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

