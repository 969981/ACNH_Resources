
void FUN_00908fd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  local_100 = PTR_DAT_04bb2020 + 0x10;
  pcStack_f8 = "CharaMakeParamSet";
  uVar9 = FUN_038c9744(0,&local_100,param_2,8,1,0);
  *param_1 = uVar9;
  puVar4 = PTR_DAT_04bb3350;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar2 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  plVar11[2] = (long)puVar1;
  *plVar11 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar7 = PTR_DAT_04bb2d88;
  plVar11[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_049273a0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_049273c8;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar2;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[0x37] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  DAT_04cf00c8 = 1;
  DAT_04cf016c = 0xffffffffffffffff;
  DAT_04cf0174 = 0xffffffff;
  DAT_04cf00cc = 0xffffffffffffffff;
  DAT_04cf00d4 = 0xffffffffffffffff;
  DAT_04cf00dc = 0xffffffffffffffff;
  DAT_04cf00e4 = 0xffffffffffffffff;
  DAT_04cf00ec = 0xffffffffffffffff;
  DAT_04cf00f4 = 0xffffffffffffffff;
  DAT_04cf00fc = 0xffffffffffffffff;
  DAT_04cf0104 = 0xffffffffffffffff;
  DAT_04cf010c = 0xffffffffffffffff;
  DAT_04cf0114 = 0xffffffffffffffff;
  DAT_04cf011c = 0xffffffffffffffff;
  DAT_04cf0124 = 0xffffffffffffffff;
  DAT_04cf012c = 0xffffffffffffffff;
  DAT_04cf0134 = 0xffffffffffffffff;
  DAT_04cf013c = 0xffffffffffffffff;
  DAT_04cf0144 = 0xffffffffffffffff;
  DAT_04cf014c = 0xffffffffffffffff;
  DAT_04cf0154 = 0xffffffffffffffff;
  DAT_04cf015c = 0xffffffffffffffff;
  DAT_04cf0164 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_LAB_049272f0;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_00909fc0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[1] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_049274b8;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_049274e0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf0178 = 1;
  DAT_04cf019c = 0xffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf017c = 0xffffffffffffffff;
  DAT_04cf0184 = 0xffffffffffffffff;
  DAT_04cf018c = 0xffffffffffffffff;
  DAT_04cf0194 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927408;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a0e0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[2] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_049275d0;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_049275f8;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf01a0 = 1;
  DAT_04cf01d4 = 0xffffffffffffffff;
  DAT_04cf01dc = 0xffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf01a4 = 0xffffffffffffffff;
  DAT_04cf01ac = 0xffffffffffffffff;
  DAT_04cf01b4 = 0xffffffffffffffff;
  DAT_04cf01bc = 0xffffffffffffffff;
  DAT_04cf01c4 = 0xffffffffffffffff;
  DAT_04cf01cc = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927520;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a1d0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[3] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_049276e8;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04927710;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf01e0 = 1;
  DAT_04cf01f4 = 0xffffffffffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf01e4 = 0xffffffffffffffff;
  DAT_04cf01ec = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927638;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a2d0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[4] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04927800;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04927828;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf01fc = 1;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf0200 = 0xffffffffffffffff;
  DAT_04cf0208 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927750;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a3d0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[5] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04927918;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04927940;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf0210 = 1;
  DAT_04cf0224 = 0xffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf0214 = 0xffffffffffffffff;
  DAT_04cf021c = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927868;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a4d0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[6] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04927a30;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04927a58;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_04cf0228 = 1;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_04cf022c = 0xffffffffffffffff;
  DAT_04cf0234 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927980;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a5d0;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  param_1[7] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar4 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar4 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(puVar7 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04927b48;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04927b70;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar4 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar4;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  DAT_04cf023c = 1;
  DAT_04cf0240 = 0xffffffffffffffff;
  DAT_04cf0248 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04927a98;
  plVar11[0x37] = 0;
  uVar8 = s_invalid_name_040e8f53._8_4_;
  uVar5 = s_invalid_name_040e8f53._0_8_;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_0090a6d0;
  param_1[8] = plVar11;
  uVar9 = *param_1;
  plVar11 = (long *)param_1[1];
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar9);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[2];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[3];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[4];
  local_f0 = 0x80;
  uVar14 = *param_1;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[5];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[6];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[7];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[8];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  plVar11 = param_1 + 9;
  uVar14 = *param_1;
  local_f0 = 0x80;
  pcStack_f8 = local_ec;
  s_invalid_name_040e8f53[0] = (char)uVar5;
  s_invalid_name_040e8f53[1] = SUB81(uVar5,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar5,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar5,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar5,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar5,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar5,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar5,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar6;
  local_100 = puVar7 + 0x10;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}

