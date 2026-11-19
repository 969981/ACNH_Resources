
void FUN_03866c70(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_98;
  char *pcStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar3 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "*Decide";
  local_98 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_98,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x200) = uVar4;
  pcStack_90 = "*InvDecide";
  local_98 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_98,puVar3);
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  pcStack_90 = "*NotScroll";
  local_98 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_98,puVar3);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(0xa8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
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
  FUN_03c5ba20(puVar7,2);
  *puVar7 = &PTR_FUN_04b5fa68;
  puVar7[0x11] = &PTR_LAB_04b5fb10;
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  *(undefined2 *)(puVar7 + 4) = 1;
  *(undefined4 *)((long)puVar7 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_03c5bcd4(puVar7);
  if ((undefined8 *)puVar7[10] != puVar7 + 9) {
    lVar9 = (long)*(int *)((long)puVar7 + 0x5c);
    puVar10 = (undefined8 *)((long)puVar7[10] - lVar9);
    do {
      (**(code **)*puVar10)(puVar10,*(undefined4 *)((long)puVar7 + 0x24));
      puVar10 = (undefined8 *)(*(long *)((long)puVar10 + lVar9 + 8) - lVar9);
    } while (puVar10 != (undefined8 *)((long)(puVar7 + 9) - lVar9));
  }
  lVar9 = *(long *)(param_2 + 0x18);
  plVar8 = (long *)(lVar9 + 0x60);
  lVar5 = *plVar8;
  plVar6 = (long *)((long)*(int *)(lVar9 + 0x74) + (long)puVar7);
  *plVar8 = (long)plVar6;
  *plVar6 = lVar5;
  plVar6[1] = (long)plVar8;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar6;
  }
  lVar5 = *(long *)puVar1;
  *(int *)(lVar9 + 0x70) = *(int *)(lVar9 + 0x70) + 1;
  if (lVar5 == 0) {
    plVar6 = malloc(0x10);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar5 + 8);
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x10,0xfffffffc);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  *plVar6 = param_2;
  puVar2 = puVar2 + 0x10;
  puVar7[3] = *(undefined8 *)(param_2 + 0x18);
  plVar6[1] = (long)puVar7;
  *(long **)(param_2 + 0x20) = plVar6;
  local_98 = (undefined *)0x0;
  local_70 = 0;
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*Valid;<*Invalid";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar6,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*Invalid";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar6,0,1,&local_98);
  lVar5 = plVar6[1];
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    free(plVar6);
  }
  else {
    plVar8 = (long *)FUN_038cb610(lVar9,plVar6);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x218) = lVar5;
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}

