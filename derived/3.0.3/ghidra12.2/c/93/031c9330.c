
void FUN_031c9330(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04b0a978;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_04bb3350;
  param_1[8] = 0;
  if (lVar10 == 0) {
    puVar7 = malloc(0xa8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar7,3);
  *puVar7 = &PTR_FUN_04b0aa50;
  puVar7[0x11] = &PTR_LAB_04b0aaf8;
  local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
  *(undefined2 *)(puVar7 + 4) = 1;
  *(undefined4 *)((long)puVar7 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_03c5bcd4(puVar7);
  if ((undefined8 *)puVar7[10] != puVar7 + 9) {
    lVar10 = (long)*(int *)((long)puVar7 + 0x5c);
    puVar11 = (undefined8 *)((long)puVar7[10] - lVar10);
    do {
      (**(code **)*puVar11)(puVar11,*(undefined4 *)((long)puVar7 + 0x24));
      puVar11 = (undefined8 *)(*(long *)((long)puVar11 + lVar10 + 8) - lVar10);
    } while (puVar11 != (undefined8 *)((long)(puVar7 + 9) - lVar10));
  }
  lVar10 = *(long *)(param_2 + 0x18);
  plVar9 = (long *)(lVar10 + 0x60);
  lVar5 = *plVar9;
  plVar6 = (long *)((long)*(int *)(lVar10 + 0x74) + (long)puVar7);
  *plVar9 = (long)plVar6;
  *plVar6 = lVar5;
  plVar6[1] = (long)plVar9;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar6;
  }
  lVar5 = *(long *)puVar4;
  *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + 1;
  if (lVar5 == 0) {
    plVar6 = malloc(0x10);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar6 = (long *)(lVar5 + 8);
    if (lVar10 != 0) {
      plVar6 = (long *)(lVar10 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x10,0xfffffffc);
    }
  }
  *plVar6 = param_2;
  puVar3 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2020;
  puVar7[3] = *(undefined8 *)(param_2 + 0x18);
  plVar6[1] = (long)puVar7;
  puVar1 = puVar2 + 0x10;
  *(long **)(param_2 + 0x20) = plVar6;
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = &DAT_040a4215;
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar6,0,1,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = &DAT_040f4d8c;
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar6,0,2,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = &DAT_0406ffa2;
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar6,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_98 = (undefined *)0x0;
  local_6e = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = &DAT_0406ffa2;
  pcStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar6,2,0,&local_98);
  lVar5 = plVar6[1];
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
    free(plVar6);
  }
  else {
    plVar9 = (long *)FUN_038cb610(lVar10,plVar6);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,plVar6);
    }
  }
  local_a8 = puVar2 + 0x10;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[4] = lVar5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pcStack_90 = "*InEffect";
  puStack_a0 = &DAT_0407ebb1;
  local_98 = local_a8;
  uVar8 = FUN_03c68d44(param_2,&local_98,&local_a8);
  param_1[8] = uVar8;
  return;
}

