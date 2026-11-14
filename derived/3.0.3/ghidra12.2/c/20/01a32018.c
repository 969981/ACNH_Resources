
long * FUN_01a32018(int *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  if (*param_1 < param_1[1]) {
    plVar4 = *(long **)(param_1 + 4);
    if (plVar4 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar4;
    }
    *plVar4 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar1 = PTR_DAT_04bb2020;
    lVar3 = param_2[1];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[1] = lVar3;
    lVar3 = param_2[6];
    puVar1 = puVar1 + 0x10;
    *plVar4 = (long)&PTR_LAB_049fb640;
    pcStack_70 = "mVirtualCameraAngle";
    plVar4[5] = 0;
    puStack_60 = &DAT_0407ebb1;
    *(int *)(plVar4 + 4) = (int)lVar3;
    puVar2 = PTR_DAT_04bb2150;
    local_48 = 8;
    puStack_50 = &DAT_0407ebb1;
    local_78 = puVar1;
    local_68 = puVar1;
    local_58 = puVar1;
    FUN_006fdfc0(plVar4 + 6,&local_78,PTR_DAT_04bb2150,plVar4);
    pcStack_70 = "mOffset";
    local_48 = 8;
    puStack_60 = &DAT_0407ebb1;
    puStack_50 = &DAT_0407ebb1;
    local_78 = puVar1;
    local_68 = puVar1;
    local_58 = puVar1;
    FUN_006fdfc0(plVar4 + 0xd,&local_78,puVar2,plVar4);
    *plVar4 = (long)&PTR_LAB_049fbc00;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar4;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  return plVar4;
}

