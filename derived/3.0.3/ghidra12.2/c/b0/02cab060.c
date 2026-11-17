
void FUN_02cab060(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04ab52b8;
  param_1[4] = 0;
  puVar4 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[9] = 0;
  puVar1 = PTR_DAT_04bb3350;
  if (lVar12 == 0) {
    puVar9 = malloc(0xa8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar9,4);
  *puVar9 = &PTR_FUN_04ab53a0;
  puVar9[0x11] = &PTR_LAB_04ab5448;
  local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
  *(undefined2 *)(puVar9 + 4) = 1;
  *(undefined4 *)((long)puVar9 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar9 + 8) = 0;
  *(undefined4 *)((long)puVar9 + 0x24) = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  FUN_03c5bcd4(puVar9);
  if ((undefined8 *)puVar9[10] != puVar9 + 9) {
    lVar12 = (long)*(int *)((long)puVar9 + 0x5c);
    puVar13 = (undefined8 *)((long)puVar9[10] - lVar12);
    do {
      (**(code **)*puVar13)(puVar13,*(undefined4 *)((long)puVar9 + 0x24));
      puVar13 = (undefined8 *)(*(long *)((long)puVar13 + lVar12 + 8) - lVar12);
    } while (puVar13 != (undefined8 *)((long)(puVar9 + 9) - lVar12));
  }
  lVar12 = *(long *)(param_2 + 0x18);
  plVar11 = (long *)(lVar12 + 0x60);
  lVar7 = *plVar11;
  plVar8 = (long *)((long)*(int *)(lVar12 + 0x74) + (long)puVar9);
  *plVar11 = (long)plVar8;
  *plVar8 = lVar7;
  plVar8[1] = (long)plVar11;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar8;
  }
  lVar7 = *(long *)puVar4;
  *(int *)(lVar12 + 0x70) = *(int *)(lVar12 + 0x70) + 1;
  if (lVar7 == 0) {
    plVar8 = malloc(0x10);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar8 = (long *)(lVar7 + 8);
    if (lVar12 != 0) {
      plVar8 = (long *)(lVar12 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,0xfffffffc);
    }
  }
  *plVar8 = param_2;
  puVar3 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2020;
  puVar9[3] = *(undefined8 *)(param_2 + 0x18);
  plVar8[1] = (long)puVar9;
  puVar1 = puVar2 + 0x10;
  *(long **)(param_2 + 0x20) = plVar8;
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "In";
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar8,2,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "InStick";
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar8,2,1,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "Out";
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar8,0,2,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "FastOut";
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar8,0,3,&local_98);
  uVar5 = (**(code **)(*(long *)plVar8[1] + 0x80))((long *)plVar8[1],2);
  uVar6 = (**(code **)(*(long *)plVar8[1] + 0x80))((long *)plVar8[1],1);
  plVar11 = (long *)plVar8[1];
  lVar12 = plVar11[0xd] + (long)(int)(uVar5 + *(uint *)(plVar11 + 0xc) * uVar6) * 0x18;
  if (*(uint *)((long)plVar11 + 100) <= uVar6 || *(uint *)(plVar11 + 0xc) <= uVar5) {
    lVar12 = 0;
  }
  if (*(int *)(lVar12 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar12 + 0xc) = 0;
    *(undefined1 *)(lVar12 + 0x14) = 0;
    plVar11 = (long *)plVar8[1];
  }
  uVar5 = (**(code **)(*plVar11 + 0x80))(plVar11,0);
  uVar6 = (**(code **)(*(long *)plVar8[1] + 0x80))((long *)plVar8[1],3);
  lVar7 = plVar8[1];
  lVar12 = *(long *)(lVar7 + 0x68) + (long)(int)(uVar5 + *(uint *)(lVar7 + 0x60) * uVar6) * 0x18;
  if (*(uint *)(lVar7 + 100) <= uVar6 || *(uint *)(lVar7 + 0x60) <= uVar5) {
    lVar12 = 0;
  }
  if (*(int *)(lVar12 + 0xc) == -0x80000000) {
    *(undefined1 *)(lVar12 + 0x14) = 0;
    *(undefined4 *)(lVar12 + 0xc) = 2;
    lVar7 = plVar8[1];
  }
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) {
    free(plVar8);
  }
  else {
    plVar11 = (long *)FUN_038cb610(lVar12,plVar8);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,plVar8);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[8] = 0;
  param_1[4] = lVar7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(code **)(lVar7 + 0x98) = FUN_02cab4cc;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  local_a8 = puVar2 + 0x10;
  *(undefined ***)(lVar7 + 0x88) = &PTR_LAB_04ab5470;
  *(undefined8 **)(lVar7 + 0x90) = param_1;
  pcStack_90 = "*InEffect";
  puStack_a0 = &DAT_0407ebb1;
  local_98 = local_a8;
  uVar10 = FUN_03c68d44(param_2,&local_98,&local_a8);
  param_1[9] = uVar10;
  return;
}

