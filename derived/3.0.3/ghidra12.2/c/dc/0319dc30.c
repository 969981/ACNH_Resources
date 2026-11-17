
void FUN_0319dc30(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  bool bVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  long *plVar22;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar8 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x35] = (long)(puVar8 + 0x10);
  param_1[0x36] = 0xffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_3 == 0) {
    lVar19 = 0;
    param_1[0x3e] = -1;
    *param_1 = (long)&PTR_LAB_04b07c68;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  else {
    bVar17 = *(byte *)(param_3 + 0xe);
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar17;
    uVar6 = *(undefined4 *)(param_3 + 0x10);
    param_1[0x3e] = -1;
    *param_1 = (long)&PTR_LAB_04b07c68;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    *(undefined4 *)((long)param_1 + 0x1fc) = uVar6;
    lVar19 = *(long *)(param_3 + 0x18);
  }
  param_1[0x45] = lVar19;
  param_1[0x47] = (long)&DAT_05702820;
  param_1[0x5c] = (long)"agl::TextureData";
  *(undefined4 *)(param_1 + 0x5d) = 0x10000;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0xff;
  puVar8 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x62] = (long)puVar1;
  param_1[100] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x67) = 0x10101;
  param_1[99] = (long)puVar8;
  param_1[0x65] = (long)puVar8;
  param_1[0x66] = 0;
  *(undefined2 *)((long)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  puVar8 = PTR_DAT_04bb3350;
  *(undefined4 *)((long)param_1 + 900) = 0;
  if (lVar19 == 0) {
    plVar11 = malloc(0x140);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar14 = (undefined8 *)(lVar19 + 8);
    if (lVar10 != 0) {
      puVar14 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar14 + 0x30))((long *)*puVar14,0x140,8);
  }
  *(undefined4 *)(plVar11 + 2) = 0x30;
  plVar11[3] = 0xffffffff;
  plVar11[4] = -0x100000000;
  *(undefined1 *)((long)plVar11 + 0x14) = 0;
  *(undefined1 *)((long)plVar11 + 0x44) = 0;
  *(undefined4 *)(plVar11 + 5) = 0xffffffff;
  *(undefined4 *)(plVar11 + 8) = 0x40;
  puVar4 = PTR_DAT_04bb2bc0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)plVar11 + 0x83) = 0;
  *(undefined1 *)((long)plVar11 + 0x9c) = 0;
  *(undefined4 *)(plVar11 + 0x13) = 0x40;
  *(undefined1 *)((long)plVar11 + 0xdb) = 0;
  plVar11[6] = (long)puVar2;
  plVar11[7] = (long)plVar11 + 0x44;
  puVar3 = PTR_DAT_04bc0760 + 0x10;
  plVar11[0x11] = (long)puVar2;
  plVar11[0x12] = (long)plVar11 + 0x9c;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x24] = 0;
  plVar11[0x25] = 0;
  *plVar11 = (long)puVar3;
  plVar11[1] = (long)(plVar11 + 0x1c);
  plVar22 = plVar11 + 0x28;
  if (plVar11 + 0x28 <= (long *)((long)plVar11 + 0xe2U)) {
    plVar22 = (long *)((long)plVar11 + 0xe2U);
  }
  plVar11[0x22] = 0;
  plVar11[0x23] = 0;
  plVar11[0x20] = 0;
  plVar11[0x21] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  memset(plVar11 + 0x1c,0,((long)plVar22 + (-0xe1 - (long)plVar11) & 0xfffffffffffffffeU) + 2);
  param_1[0x6a] = (long)plVar11;
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    puVar12 = malloc(0x68);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar11 = (long *)(lVar19 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    puVar12 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x68,8);
    }
  }
  *puVar12 = 0;
  *(undefined8 *)(puVar12 + 8) = 0;
  puVar12[0x10] = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined4 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x38) = 0;
  *(undefined8 *)(puVar12 + 0x40) = 0;
  puVar3 = PTR_DAT_04bc0ba0;
  *(undefined **)(puVar12 + 0x28) = PTR_DAT_04bc0ba0 + 0x10;
  *(undefined8 *)(puVar12 + 0x30) = 0;
  puVar9 = PTR_DAT_04bdf1d8;
  lVar19 = *(long *)puVar1;
  puVar2 = PTR_DAT_04bdf1d8 + 0x10;
  *(undefined8 *)(puVar12 + 0x58) = 0;
  *(undefined8 *)(puVar12 + 0x60) = 0;
  *(undefined **)(puVar12 + 0x48) = puVar2;
  *(undefined8 *)(puVar12 + 0x50) = 0;
  param_1[0x6b] = (long)puVar12;
  if (lVar19 == 0) {
    plVar11 = malloc(0x2c0);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar14 = (undefined8 *)(lVar19 + 8);
    if (lVar10 != 0) {
      puVar14 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar14 + 0x30))((long *)*puVar14,0x2c0,8);
  }
  *(undefined1 *)((long)plVar11 + 0x14) = 0;
  *(undefined1 *)((long)plVar11 + 0x44) = 0;
  puVar2 = puVar4 + 0x10;
  *(undefined4 *)(plVar11 + 2) = 0xf0;
  plVar11[6] = (long)puVar2;
  plVar11[7] = (long)plVar11 + 0x44;
  plVar22 = plVar11 + 0x1c;
  plVar11[3] = 0xffffffff;
  plVar11[4] = -0x100000000;
  *(undefined4 *)(plVar11 + 5) = 0xffffffff;
  *(undefined4 *)(plVar11 + 8) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x9c) = 0;
  *(undefined1 *)((long)plVar11 + 0x83) = 0;
  *(undefined4 *)(plVar11 + 0x13) = 0x40;
  *(undefined1 *)((long)plVar11 + 0xdb) = 0;
  plVar11[0x11] = (long)puVar2;
  plVar11[0x12] = (long)plVar11 + 0x9c;
  *plVar11 = (long)(PTR_DAT_04bc0548 + 0x10);
  plVar11[1] = (long)plVar22;
  memset(plVar22,0,0x1e0);
  plVar5 = plVar11 + 0x58;
  if (plVar11 + 0x58 <= (long *)((long)plVar11 + 0xe2)) {
    plVar5 = (long *)((long)plVar11 + 0xe2);
  }
  memset(plVar22,0,((long)plVar5 + (-0xe1 - (long)plVar11) & 0xfffffffffffffffeU) + 2);
  param_1[0x6c] = (long)plVar11;
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    puVar12 = malloc(0x68);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar11 = (long *)(lVar19 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    puVar12 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x68,8);
    }
  }
  *puVar12 = 0;
  lVar19 = *(long *)puVar1;
  *(undefined **)(puVar12 + 0x28) = puVar3 + 0x10;
  *(undefined8 *)(puVar12 + 0x30) = 0;
  *(undefined8 *)(puVar12 + 8) = 0;
  puVar12[0x10] = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined4 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x38) = 0;
  *(undefined8 *)(puVar12 + 0x40) = 0;
  *(undefined **)(puVar12 + 0x48) = puVar9 + 0x10;
  *(undefined8 *)(puVar12 + 0x50) = 0;
  *(undefined8 *)(puVar12 + 0x58) = 0;
  *(undefined8 *)(puVar12 + 0x60) = 0;
  param_1[0x6d] = (long)puVar12;
  if (lVar19 == 0) {
    plVar11 = malloc(0x140);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar14 = (undefined8 *)(lVar19 + 8);
    if (lVar10 != 0) {
      puVar14 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar14 + 0x30))((long *)*puVar14,0x140,8);
  }
  puVar2 = PTR_DAT_04bc0760;
  *(undefined4 *)(plVar11 + 2) = 0x30;
  plVar11[3] = 0xffffffff;
  plVar11[4] = -0x100000000;
  *(undefined1 *)((long)plVar11 + 0x44) = 0;
  puVar4 = puVar4 + 0x10;
  plVar11[6] = (long)puVar4;
  plVar11[7] = (long)plVar11 + 0x44;
  *(undefined1 *)((long)plVar11 + 0x9c) = 0;
  plVar11[0x11] = (long)puVar4;
  plVar11[0x12] = (long)plVar11 + 0x9c;
  *(undefined4 *)(plVar11 + 8) = 0x40;
  *(undefined4 *)(plVar11 + 0x13) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x14) = 0;
  *(undefined4 *)(plVar11 + 5) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x83) = 0;
  *(undefined1 *)((long)plVar11 + 0xdb) = 0;
  *plVar11 = (long)(puVar2 + 0x10);
  plVar11[1] = (long)(plVar11 + 0x1c);
  plVar22 = plVar11 + 0x28;
  if (plVar11 + 0x28 <= (long *)((long)plVar11 + 0xe2)) {
    plVar22 = (long *)((long)plVar11 + 0xe2);
  }
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x24] = 0;
  plVar11[0x25] = 0;
  plVar11[0x22] = 0;
  plVar11[0x23] = 0;
  plVar11[0x20] = 0;
  plVar11[0x21] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  memset(plVar11 + 0x1c,0,((long)plVar22 + (-0xe1 - (long)plVar11) & 0xfffffffffffffffeU) + 2);
  param_1[0x6e] = (long)plVar11;
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    puVar12 = malloc(0x68);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar11 = (long *)(lVar19 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    puVar12 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x68,8);
    }
  }
  *puVar12 = 0;
  *(undefined8 *)(puVar12 + 8) = 0;
  puVar12[0x10] = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined4 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x38) = 0;
  *(undefined8 *)(puVar12 + 0x40) = 0;
  *(undefined **)(puVar12 + 0x28) = puVar3 + 0x10;
  *(undefined8 *)(puVar12 + 0x30) = 0;
  uVar6 = *(undefined4 *)PTR_DAT_04bbdbc0;
  uVar7 = *(undefined4 *)PTR_DAT_04bbdbc8;
  *(undefined **)(puVar12 + 0x48) = puVar9 + 0x10;
  *(undefined8 *)(puVar12 + 0x50) = 0;
  *(undefined8 *)(puVar12 + 0x58) = 0;
  *(undefined8 *)(puVar12 + 0x60) = 0;
  param_1[0x6f] = (long)puVar12;
  FUN_0390a734(param_1 + 0x4a,1,0x1d,uVar6,uVar7,1,1,1,0,1);
  lVar19 = param_1[0x52];
  uVar6 = *(undefined4 *)((long)param_1 + 0x28c);
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    plVar11 = malloc(0x38);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar11 = (long *)(lVar10 + 8);
    if (lVar13 != 0) {
      plVar11 = (long *)(lVar13 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x38,8);
    }
  }
  plVar11[6] = 0;
  plVar22 = plVar11 + 1;
  *plVar22 = 0;
  *(undefined2 *)((long)plVar11 + 0x2a) = 0;
  plVar11[4] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  puVar2 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar11 + 5) = 0;
  *plVar11 = (long)puVar2;
  lVar13 = *(long *)puVar1;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
  puVar14 = (undefined8 *)(lVar13 + 8);
  if (lVar10 != 0) {
    puVar14 = (undefined8 *)(lVar10 + 0xa8);
  }
  uVar15 = *puVar14;
  plVar11[6] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[2] = 0;
  *plVar22 = 0;
  *(undefined2 *)((long)plVar11 + 0x2a) = 0;
  *(byte *)(plVar11 + 5) = *(byte *)(plVar11 + 5) & 0xfe;
  if ((int)lVar19 == 0) {
    local_78 = 0;
    *(undefined2 *)((long)plVar11 + 0x2a) = 8;
    local_70 = 0;
LAB_0319e3c0:
    uStack_74 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar11,uVar15,(int)lVar19,uVar6,8);
    local_70 = plVar11[3];
    *(undefined2 *)((long)plVar11 + 0x2a) = 8;
    local_78 = 0;
    if (plVar11[4] != 0) {
      local_78 = (int)*plVar22 - *(int *)(plVar11[4] + 0x10);
    }
    if (local_70 == 0) goto LAB_0319e3c0;
    uStack_74 = *(undefined4 *)(local_70 + 0x104);
  }
  *(int *)(param_1 + 0x4a) = local_78;
  *(undefined4 *)((long)param_1 + 0x254) = uStack_74;
  param_1[0x4b] = local_70;
  param_1[0x4c] = (long)plVar11;
  if ((*(byte *)((long)param_1 + 0x29e) >> 1 & 1) == 0) {
    bVar16 = false;
  }
  else {
    bVar16 = 0x11 < *(ushort *)(param_1 + 0x5d) && *(ushort *)(param_1 + 0x5d) - 0x59 < 0xffffffd6;
  }
  plStack_68 = plVar11;
  FUN_038fd3e0(param_1 + 0x54,&local_78,param_1 + 0x50,0,param_1[0x5c],bVar16,1);
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    puVar14 = malloc(0xc0);
joined_r0x0319e4dc:
    if (puVar14 != (undefined8 *)0x0) {
      iVar18 = 4;
      *puVar14 = 0;
      puVar14[1] = 0xffffffffffffffff;
      puVar14[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar14 + 3) = 0;
      puVar14[4] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0x1c) = 0;
      *(undefined1 *)(puVar14 + 5) = 0;
      puVar14[8] = 0xffffffffffffffff;
      *(undefined4 *)(puVar14 + 9) = 0;
      puVar14[10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0x4c) = 0;
      *(undefined1 *)(puVar14 + 0xb) = 0;
      puVar14[0xe] = 0xffffffffffffffff;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      puVar14[0x10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0x7c) = 0;
      *(undefined1 *)(puVar14 + 0x11) = 0;
      puVar14[0x14] = 0xffffffffffffffff;
      *(undefined4 *)(puVar14 + 0x15) = 0;
      puVar14[0x16] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0xac) = 0;
      *(undefined1 *)(puVar14 + 0x17) = 0;
      puVar14[6] = 0;
      puVar14[7] = 0xffffffffffffffff;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0xffffffffffffffff;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x5e) = 4;
      param_1[0x5f] = (long)puVar14;
      goto LAB_0319e4ec;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar11 = (long *)(lVar19 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      puVar14 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0xc0,8);
      goto joined_r0x0319e4dc;
    }
  }
  iVar18 = (int)param_1[0x5e];
  if (iVar18 == 0) {
    return;
  }
  puVar14 = (undefined8 *)param_1[0x5f];
LAB_0319e4ec:
  iVar20 = 0;
  do {
    puVar21 = puVar14 + (long)iVar20 * 6;
    iVar20 = iVar20 + 1;
    *puVar21 = 0;
    puVar21[1] = 0xffffffffffffffff;
    puVar21[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined1 *)((long)puVar21 + 0x1c) = 0;
    *(undefined1 *)(puVar21 + 5) = 0;
  } while (iVar18 != iVar20);
  return;
}

