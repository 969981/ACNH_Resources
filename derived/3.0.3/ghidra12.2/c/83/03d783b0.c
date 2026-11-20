
void FUN_03d783b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(0xa8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar6,4);
  *puVar6 = &PTR_FUN_04b91e88;
  puVar6[0x11] = &PTR_LAB_04b91f30;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar6 + 4) = 1;
  *(undefined4 *)((long)puVar6 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)((long)puVar6 + 0x24) = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_03c5bcd4(puVar6);
  if ((undefined8 *)puVar6[10] != puVar6 + 9) {
    lVar8 = (long)*(int *)((long)puVar6 + 0x5c);
    puVar9 = (undefined8 *)((long)puVar6[10] - lVar8);
    do {
      (**(code **)*puVar9)(puVar9,*(undefined4 *)((long)puVar6 + 0x24));
      puVar9 = (undefined8 *)(*(long *)((long)puVar9 + lVar8 + 8) - lVar8);
    } while (puVar9 != (undefined8 *)((long)(puVar6 + 9) - lVar8));
  }
  lVar8 = *(long *)(param_2 + 0x18);
  plVar7 = (long *)(lVar8 + 0x60);
  lVar4 = *plVar7;
  plVar5 = (long *)((long)*(int *)(lVar8 + 0x74) + (long)puVar6);
  *plVar7 = (long)plVar5;
  *plVar5 = lVar4;
  plVar5[1] = (long)plVar7;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar5;
  }
  lVar4 = *(long *)puVar3;
  *(int *)(lVar8 + 0x70) = *(int *)(lVar8 + 0x70) + 1;
  if (lVar4 == 0) {
    plVar5 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar5 = (long *)(lVar4 + 8);
    if (lVar8 != 0) {
      plVar5 = (long *)(lVar8 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,0xfffffffc);
    }
  }
  *plVar5 = param_2;
  puVar2 = PTR_PTR_04bb2238;
  puVar6[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  plVar5[1] = (long)puVar6;
  *(long **)(param_2 + 0x20) = plVar5;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_6e = 1;
  puVar1 = puVar1 + 0x10;
  local_98 = 0;
  local_88 = "*Select";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,0,1,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*UnSelect;<*Select";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchSelect;*Select";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,0,2,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchUnSelect;<*TouchSelect;*UnSelect;<*Select";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,2,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Invalid";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,0,3,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Valid;<*Invalid";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar5,3,0,&local_98);
  lVar4 = plVar5[1];
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    free(plVar5);
  }
  else {
    plVar7 = (long *)FUN_038cb610(lVar8,plVar5);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7,plVar5);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x280) = lVar4;
  *(undefined1 **)(lVar4 + 0x98) = &LAB_03d78d64;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined ***)(lVar4 + 0x88) = &PTR_LAB_04b91fb0;
  *(long *)(lVar4 + 0x90) = param_1;
  plVar5 = *(long **)(param_1 + 0x280);
  *(undefined2 *)(plVar5 + 4) = 1;
  *(undefined4 *)((long)plVar5 + 0x24) = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)((long)plVar5 + 0x2c) = 0x80000000;
  plVar5[6] = 0;
  plVar5[7] = 0;
  (**(code **)(*plVar5 + 0x28))(plVar5,0);
  if ((long *)plVar5[10] != plVar5 + 9) {
    lVar8 = (long)*(int *)((long)plVar5 + 0x5c);
    puVar6 = (undefined8 *)(plVar5[10] - lVar8);
    do {
      (**(code **)*puVar6)(puVar6,*(undefined4 *)((long)plVar5 + 0x24));
      puVar6 = (undefined8 *)(*(long *)((long)puVar6 + lVar8 + 8) - lVar8);
    } while (puVar6 != (undefined8 *)((long)(plVar5 + 9) - lVar8));
  }
  return;
}

