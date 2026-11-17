
void FUN_02e78a10(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_98;
  undefined *puStack_90;
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
  *param_1 = &PTR_LAB_04ad96f0;
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar8 = malloc(0xa8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar8,3);
  *puVar8 = &PTR_FUN_04ad97c8;
  puVar8[0x11] = &PTR_LAB_04ad9870;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar8 + 4) = 1;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_03c5bcd4(puVar8);
  if ((undefined8 *)puVar8[10] != puVar8 + 9) {
    lVar10 = (long)*(int *)((long)puVar8 + 0x5c);
    puVar11 = (undefined8 *)((long)puVar8[10] - lVar10);
    do {
      (**(code **)*puVar11)(puVar11,*(undefined4 *)((long)puVar8 + 0x24));
      puVar11 = (undefined8 *)(*(long *)((long)puVar11 + lVar10 + 8) - lVar10);
    } while (puVar11 != (undefined8 *)((long)(puVar8 + 9) - lVar10));
  }
  lVar10 = *(long *)(param_2 + 0x18);
  plVar9 = (long *)(lVar10 + 0x60);
  lVar6 = *plVar9;
  plVar7 = (long *)((long)*(int *)(lVar10 + 0x74) + (long)puVar8);
  *plVar9 = (long)plVar7;
  *plVar7 = lVar6;
  plVar7[1] = (long)plVar9;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar7;
  }
  lVar6 = *(long *)puVar3;
  *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + 1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,0xfffffffc);
    }
  }
  *plVar7 = param_2;
  puVar2 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020;
  puVar8[3] = *(undefined8 *)(param_2 + 0x18);
  plVar7[1] = (long)puVar8;
  puVar1 = puVar1 + 0x10;
  *(long **)(param_2 + 0x20) = plVar7;
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "In";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,2,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "InVisit";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,2,1,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "Out";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,0,2,&local_98);
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],2);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],1);
  lVar6 = plVar7[1];
  lVar10 = *(long *)(lVar6 + 0x68) + (long)(int)(uVar4 + *(uint *)(lVar6 + 0x60) * uVar5) * 0x18;
  if (*(uint *)(lVar6 + 100) <= uVar5 || *(uint *)(lVar6 + 0x60) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 0;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    lVar6 = plVar7[1];
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    free(plVar7);
  }
  else {
    plVar9 = (long *)FUN_038cb610(lVar10,plVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,plVar7);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[4] = lVar6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(code **)(lVar6 + 0x98) = FUN_02e78da4;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined ***)(lVar6 + 0x88) = &PTR_LAB_04ad9898;
  *(undefined8 **)(lVar6 + 0x90) = param_1;
  return;
}

