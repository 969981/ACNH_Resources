
void FUN_039bb95c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long local_ca8;
  undefined8 local_ca0;
  long local_890;
  undefined8 local_888;
  undefined **local_478;
  undefined1 *local_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 8) = param_3;
  puVar1 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar5 = malloc(0x38);
  }
  else {
    plVar5 = param_5;
    if (param_5 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_039bb9f8;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
  }
LAB_039bb9f8:
  plVar5[6] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  bVar8 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  puVar2 = PTR_DAT_04bb2cc8;
  *plVar5 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar7 = param_5;
  if (param_5 == (long *)0x0) {
    lVar4 = *(long *)puVar1;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar4 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    bVar8 = *(byte *)(plVar5 + 5) & 0xfe;
  }
  plVar5[6] = 0;
  *plVar12 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  puVar3 = PTR_DAT_04bd0fa8;
  uVar6 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(plVar5 + 5) = bVar8;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  FUN_038f8590(uVar6,plVar5,plVar7,0x800,0x40,1);
  lVar11 = plVar5[3];
  *(undefined2 *)((long)plVar5 + 0x2a) = 1;
  iVar9 = 0;
  if (plVar5[4] != 0) {
    iVar9 = (int)*plVar12 - *(int *)(plVar5[4] + 0x10);
  }
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(lVar11 + 0x104);
  }
  *(long *)(param_1 + 0x38) = lVar11;
  *(long **)(param_1 + 0x40) = plVar5;
  lVar11 = *(long *)puVar1;
  *(int *)(param_1 + 0x30) = iVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  if (lVar11 == 0) {
    plVar5 = malloc(0x38);
  }
  else {
    plVar5 = param_5;
    if (param_5 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
  }
  plVar5[6] = 0;
  bVar8 = 0;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar7 = param_5;
  if (param_5 == (long *)0x0) {
    lVar4 = *(long *)puVar1;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar4 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    bVar8 = *(byte *)(plVar5 + 5) & 0xfe;
  }
  uVar6 = *(undefined8 *)puVar3;
  plVar5[6] = 0;
  *plVar12 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(byte *)(plVar5 + 5) = bVar8;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  FUN_038f8590(uVar6,plVar5,plVar7,0x800,0x40,1);
  lVar11 = plVar5[3];
  *(undefined2 *)((long)plVar5 + 0x2a) = 1;
  iVar9 = 0;
  if (plVar5[4] != 0) {
    iVar9 = (int)*plVar12 - *(int *)(plVar5[4] + 0x10);
  }
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(lVar11 + 0x104);
  }
  *(long *)(param_1 + 0x68) = lVar11;
  *(long **)(param_1 + 0x70) = plVar5;
  lVar11 = *(long *)puVar1;
  *(int *)(param_1 + 0x60) = iVar9;
  *(undefined4 *)(param_1 + 100) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
  if (lVar11 == 0) {
    plVar5 = malloc(0x38);
  }
  else {
    plVar5 = param_5;
    if (param_5 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
  }
  plVar5[6] = 0;
  bVar8 = 0;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  if (param_5 == (long *)0x0) {
    lVar4 = *(long *)puVar1;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_5 = (long *)(lVar4 + 8);
    if (lVar11 != 0) {
      param_5 = (long *)(lVar11 + 0xa8);
    }
    param_5 = (long *)*param_5;
    bVar8 = *(byte *)(plVar5 + 5) & 0xfe;
  }
  uVar6 = *(undefined8 *)puVar3;
  plVar5[6] = 0;
  *plVar7 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(byte *)(plVar5 + 5) = bVar8;
  *(undefined2 *)((long)plVar5 + 0x2a) = 0;
  FUN_038f8590(uVar6,plVar5,param_5,0x800,0x40,1);
  lVar11 = plVar5[3];
  *(undefined2 *)((long)plVar5 + 0x2a) = 1;
  iVar9 = 0;
  if (plVar5[4] != 0) {
    iVar9 = (int)*plVar7 - *(int *)(plVar5[4] + 0x10);
  }
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(lVar11 + 0x104);
  }
  *(int *)(param_1 + 0x90) = iVar9;
  *(undefined4 *)(param_1 + 0x94) = uVar10;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 0x98) = lVar11;
  *(long **)(param_1 + 0xa0) = plVar5;
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x88) = uVar10;
  *(undefined4 *)(param_1 + 0x8c) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  if (param_6 != 0) {
    FUN_006e9454(&local_ca8,"%s_%s","detail","setting");
    local_65 = 0;
    local_470 = local_464;
    local_468 = 0x400;
    local_464[0] = 0;
    local_478 = &PTR_LAB_048fcfa0;
    (**(code **)(local_ca8 + 0x18))(&local_ca8);
    FUN_006e9454(&local_890,"%s\\%s","detail",local_ca0);
    (**(code **)(local_890 + 0x18))(&local_890);
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_888);
  }
  return;
}

