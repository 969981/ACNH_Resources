
/* WARNING: Removing unreachable block (ram,0x03d6d9c4) */
/* WARNING: Removing unreachable block (ram,0x03d6d97c) */
/* WARNING: Removing unreachable block (ram,0x03d6d93c) */
/* WARNING: Removing unreachable block (ram,0x03d6d8fc) */
/* WARNING: Removing unreachable block (ram,0x03d6d8dc) */
/* WARNING: Removing unreachable block (ram,0x03d6d91c) */
/* WARNING: Removing unreachable block (ram,0x03d6d95c) */
/* WARNING: Removing unreachable block (ram,0x03d6d99c) */
/* WARNING: Removing unreachable block (ram,0x03d6d9f0) */

void FUN_03d6d790(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *local_98;
  char *pcStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar8 = malloc(400);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,400,8);
    }
  }
  *(undefined2 *)(plVar8 + 7) = 0;
  plVar8[3] = 0;
  plVar8[4] = -0x200000000;
  *(undefined4 *)((long)plVar8 + 0x3b) = 0x1010000;
  *(undefined2 *)((long)plVar8 + 0x3f) = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  memset(plVar8 + 10,0,0x118);
  puVar1 = PTR_DAT_04bd4550;
  puVar4 = PTR_DAT_04bd4540;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  *(undefined4 *)(plVar8 + 0x31) = 0;
  plVar8[0x2d] = 0;
  plVar8[0x2e] = 0x400000000;
  puVar1 = puVar1 + 0x10;
  plVar8[9] = (long)puVar1;
  plVar8[0xd] = (long)puVar1;
  plVar8[0x11] = (long)puVar1;
  plVar8[0x15] = (long)puVar1;
  plVar8[0x19] = (long)puVar1;
  plVar8[0x1d] = (long)puVar1;
  plVar8[0x21] = (long)puVar1;
  plVar8[0x25] = (long)puVar1;
  plVar8[0x29] = (long)puVar1;
  *plVar8 = (long)(puVar4 + 0x10);
  *(long **)(param_1 + 0x250) = plVar8;
  *(undefined1 *)((long)plVar8 + 0x3a) = 0;
  plVar8[0xb] = (long)FUN_03d6de88;
  plVar8[0xc] = 0;
  plVar8[9] = (long)&PTR_LAB_04b90bd8;
  plVar8[10] = param_1;
  plVar8[0xf] = (long)FUN_03d6de88;
  plVar8[0x10] = 0;
  plVar8[0xd] = (long)&PTR_LAB_04b90bd8;
  plVar8[0xe] = param_1;
  plVar8[0x13] = (long)FUN_03d6de88;
  plVar8[0x14] = 0;
  plVar8[0x11] = (long)&PTR_LAB_04b90bd8;
  plVar8[0x12] = param_1;
  plVar8[0x17] = (long)FUN_03d6de88;
  plVar8[0x18] = 0;
  plVar8[0x15] = (long)&PTR_LAB_04b90bd8;
  plVar8[0x16] = param_1;
  plVar8[0x1b] = (long)FUN_03d6de88;
  plVar8[0x1c] = 0;
  plVar8[0x19] = (long)&PTR_LAB_04b90bd8;
  plVar8[0x1a] = param_1;
  plVar8[0x1f] = (long)FUN_03d6de88;
  plVar8[0x20] = 0;
  plVar8[0x1d] = (long)&PTR_LAB_04b90bd8;
  plVar8[0x1e] = param_1;
  plVar8[0x23] = (long)FUN_03d6de88;
  plVar8[0x24] = 0;
  plVar8[0x21] = (long)&PTR_LAB_04b90bd8;
  plVar8[0x22] = param_1;
  lVar13 = *(long *)(param_1 + 0x250);
  *(code **)(lVar13 + 0x138) = FUN_03d6de88;
  *(undefined8 *)(lVar13 + 0x140) = 0;
  *(undefined ***)(lVar13 + 0x128) = &PTR_LAB_04b90bd8;
  *(long *)(lVar13 + 0x130) = param_1;
  local_98 = PTR_DAT_04bb2020;
  lVar13 = *(long *)(param_1 + 0x250);
  *(code **)(lVar13 + 0x158) = FUN_03d6de88;
  *(undefined8 *)(lVar13 + 0x160) = 0;
  local_98 = local_98 + 0x10;
  *(undefined ***)(lVar13 + 0x148) = &PTR_LAB_04b90bd8;
  *(long *)(lVar13 + 0x150) = param_1;
  pcStack_90 = "*CaptureTarget";
  uVar9 = FUN_03c688b0(param_2,&local_98);
  *(undefined8 *)(param_1 + 0x2b8) = uVar9;
  FUN_03d6627c(param_1,param_2,param_3);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    puVar10 = malloc(0x28);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x28,8);
    }
  }
  *(undefined1 *)(puVar10 + 3) = 0;
  *puVar10 = &PTR_LAB_04b90b00;
  lVar13 = *(long *)puVar3;
  puVar10[1] = 0;
  puVar10[2] = 0;
  if (lVar13 == 0) {
    puVar11 = malloc(0xa8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar11,5);
  *puVar11 = &PTR_FUN_04b90c28;
  puVar11[0x11] = &PTR_LAB_04b90cd0;
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  *(undefined2 *)(puVar11 + 4) = 1;
  *(undefined4 *)((long)puVar11 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar11 + 8) = 0;
  *(undefined4 *)((long)puVar11 + 0x24) = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  FUN_03c5bcd4(puVar11);
  if ((undefined8 *)puVar11[10] != puVar11 + 9) {
    lVar13 = (long)*(int *)((long)puVar11 + 0x5c);
    puVar14 = (undefined8 *)((long)puVar11[10] - lVar13);
    do {
      (**(code **)*puVar14)(puVar14,*(undefined4 *)((long)puVar11 + 0x24));
      puVar14 = (undefined8 *)(*(long *)((long)puVar14 + lVar13 + 8) - lVar13);
    } while (puVar14 != (undefined8 *)((long)(puVar11 + 9) - lVar13));
  }
  lVar13 = *(long *)(param_2 + 0x18);
  plVar12 = (long *)(lVar13 + 0x60);
  lVar7 = *plVar12;
  plVar8 = (long *)((long)*(int *)(lVar13 + 0x74) + (long)puVar11);
  *plVar12 = (long)plVar8;
  *plVar8 = lVar7;
  plVar8[1] = (long)plVar12;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar8;
  }
  lVar7 = *(long *)puVar3;
  *(int *)(lVar13 + 0x70) = *(int *)(lVar13 + 0x70) + 1;
  if (lVar7 == 0) {
    plVar8 = malloc(0x10);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar7 + 8);
    if (lVar13 != 0) {
      plVar8 = (long *)(lVar13 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,0xfffffffc);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  *plVar8 = param_2;
  puVar1 = PTR_PTR_04bb2238;
  puVar2 = puVar2 + 0x10;
  puVar11[3] = *(undefined8 *)(param_2 + 0x18);
  plVar8[1] = (long)puVar11;
  *(long **)(param_2 + 0x20) = plVar8;
  local_98 = (undefined *)0x0;
  local_70 = 0;
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_88 = "*Drag";
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0;
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,0,1,&local_98);
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*Drop";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*Cancel";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,1,2,&local_98);
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*Into";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,1,3,&local_98);
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*TargetMove";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,0,4,&local_98);
  local_78 = *(undefined8 *)(puVar1 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*TargetDrop";
  pcStack_90 = puVar2;
  puStack_80 = puVar2;
  FUN_03c5cb04(plVar8,4,0,&local_98);
  uVar5 = (**(code **)(*(long *)plVar8[1] + 0x80))((long *)plVar8[1],1);
  uVar6 = (**(code **)(*(long *)plVar8[1] + 0x80))((long *)plVar8[1],2);
  lVar7 = plVar8[1];
  lVar13 = *(long *)(lVar7 + 0x68) + (long)(int)(uVar5 + *(uint *)(lVar7 + 0x60) * uVar6) * 0x18;
  if (*(uint *)(lVar7 + 100) <= uVar6 || *(uint *)(lVar7 + 0x60) <= uVar5) {
    lVar13 = 0;
  }
  if (*(int *)(lVar13 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar13 + 0xc) = 0;
    *(undefined1 *)(lVar13 + 0x14) = 0;
    lVar7 = plVar8[1];
  }
  if (*(long *)puVar3 == 0) {
    free(plVar8);
  }
  else {
    plVar12 = (long *)FUN_038cb610(*(long *)puVar3,plVar8);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12,plVar8);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  puVar10[4] = lVar7;
  *(code **)(lVar7 + 0x98) = FUN_03d6e268;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined ***)(lVar7 + 0x88) = &PTR_LAB_04b90d50;
  *(undefined8 **)(lVar7 + 0x90) = puVar10;
  *(undefined8 **)(param_1 + 0x1b0) = puVar10;
  return;
}

