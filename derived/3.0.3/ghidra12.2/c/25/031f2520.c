
void FUN_031f2520(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  long lVar14;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar13 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar13;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b0ddf8;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_03135560(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0xffffffffffffffff;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)((long)param_1 + 900) = 0;
  *(undefined2 *)(param_1 + 0x71) = 0x100;
  puVar1 = PTR_DAT_04bc5c10 + 0x10;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  param_1[0x75] = (long)&PTR_LAB_04b0e050;
  param_1[0x80] = (long)(param_1 + 0x81);
  param_1[0x81] = (long)(param_1 + 0x82);
  param_1[0x82] = (long)(param_1 + 0x83);
  param_1[0x83] = (long)(param_1 + 0x84);
  param_1[0x84] = (long)(param_1 + 0x85);
  param_1[0x85] = (long)(param_1 + 0x86);
  param_1[0x86] = (long)(param_1 + 0x87);
  param_1[0x87] = (long)(param_1 + 0x88);
  param_1[0x6f] = (long)puVar1;
  param_1[0x88] = (long)(param_1 + 0x89);
  param_1[0x89] = (long)(param_1 + 0x8a);
  param_1[0x8a] = (long)(param_1 + 0x8b);
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  param_1[0x8b] = (long)(param_1 + 0x8c);
  param_1[0x72] = (long)&PTR_LAB_04b0e010;
  param_1[0x8c] = (long)(param_1 + 0x8d);
  param_1[0x8d] = (long)(param_1 + 0x8e);
  *(undefined2 *)(param_1 + 0x77) = 0x100;
  param_1[0x8e] = (long)(param_1 + 0x8f);
  param_1[0x8f] = (long)(param_1 + 0x90);
  *(undefined4 *)((long)param_1 + 0x38c) = 0;
  param_1[0x90] = (long)(param_1 + 0x91);
  *(undefined4 *)((long)param_1 + 0x39c) = 0;
  param_1[0x91] = (long)(param_1 + 0x92);
  *(undefined4 *)((long)param_1 + 0x3a4) = 0;
  param_1[0x92] = (long)(param_1 + 0x93);
  *(undefined4 *)((long)param_1 + 0x3b4) = 0;
  param_1[0x93] = (long)(param_1 + 0x94);
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  param_1[0x94] = (long)(param_1 + 0x95);
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  param_1[0x95] = (long)(param_1 + 0x96);
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x96] = (long)(param_1 + 0x97);
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0;
  param_1[0x7e] = (long)(param_1 + 0x80);
  param_1[0x97] = 0;
  param_1[0x7f] = (long)(param_1 + 0x80);
  if (param_1 + 0x98 != (long *)0x0) {
    param_1[0x7d] = (long)(param_1 + 0x98);
    param_1[0x7c] = 0x1800000000;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0xb2,0,0x1bf30);
  lVar14 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar10 = param_1;
  do {
    FUN_03463544(plVar10 + 0xb2,0);
    *(undefined4 *)(plVar10 + 0xdd) = 0x40;
    lVar14 = lVar14 + -1;
    plVar10[0xdc] = (long)plVar10 + 0x6ec;
    *(undefined1 *)((long)plVar10 + 0x72b) = 0;
    *(undefined1 *)((long)plVar10 + 0x6ec) = 0;
    plVar10[0xdb] = (long)puVar1;
    *(undefined4 *)(plVar10 + 0xe6) = 0;
    puVar6 = PTR_DAT_04bc8e10;
    plVar10 = plVar10 + 0x35;
  } while (lVar14 != 0);
  *(undefined4 *)(param_1 + 0x389a) = 0;
  *(undefined4 *)(param_1 + 0x389b) = 0;
  param_1[0x389c] = 0;
  param_1[0x389d] = 0;
  *(undefined4 *)(param_1 + 0x389c) = 0xffffffff;
  param_1[0x389e] = 0;
  param_1[0x389f] = 0;
  *(undefined4 *)(param_1 + 0x389d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x389e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x389f) = 0xffffffff;
  param_1[0x38a0] = 0;
  param_1[0x38a1] = 0;
  *(undefined4 *)(param_1 + 0x38a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38a1) = 0xffffffff;
  param_1[0x3898] = (long)(puVar6 + 0x10);
  param_1[0x3899] = -1;
  *(undefined2 *)((long)param_1 + 0x1c5ac) = 1;
  param_1[0x38a2] = 0;
  param_1[0x38a3] = 0;
  *(undefined4 *)(param_1 + 0x38a2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38a3) = 0xffffffff;
  param_1[0x38a4] = 0;
  param_1[0x38a5] = 0;
  *(undefined4 *)(param_1 + 0x38a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38a5) = 0xffffffff;
  param_1[0x38a6] = 0;
  param_1[0x38a7] = 0;
  *(undefined4 *)(param_1 + 0x38a6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38a7) = 0xffffffff;
  param_1[0x38a8] = 0;
  param_1[0x38a9] = 0;
  *(undefined4 *)(param_1 + 0x38a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38a9) = 0xffffffff;
  param_1[0x38aa] = 0;
  param_1[0x38ab] = 0;
  *(undefined4 *)(param_1 + 0x38aa) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38ab) = 0xffffffff;
  param_1[0x38ac] = 0;
  param_1[0x38ad] = 0;
  *(undefined4 *)(param_1 + 0x38ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38ad) = 0xffffffff;
  param_1[0x38ae] = 0;
  param_1[0x38af] = 0;
  *(undefined4 *)(param_1 + 0x38ae) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38af) = 0xffffffff;
  param_1[0x38b0] = 0;
  param_1[0x38b1] = 0;
  *(undefined4 *)(param_1 + 0x38b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38b1) = 0xffffffff;
  param_1[0x38b2] = 0;
  param_1[0x38b3] = 0;
  *(undefined4 *)(param_1 + 0x38b2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38b3) = 0xffffffff;
  puVar1 = PTR_DAT_04bc7110;
  param_1[0x38b4] = 0;
  *(undefined4 *)(param_1 + 0x38b5) = 0;
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc7110), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bc7108 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7110);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar8 = (**(code **)*param_3)(param_3,PTR_DAT_04bc7108), puVar1 = PTR_DAT_04bb6298,
     (uVar8 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x354) = *(undefined4 *)((long)param_3 + 0x14);
    sVar5 = *(short *)puVar1;
    if (sVar5 != -1) {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 0x1b & 1) != 0) {
        *(undefined4 *)((long)param_1 + 0x354) = 1;
      }
    }
  }
  puVar6 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar11 = malloc(0x1c8);
joined_r0x031f2ae8:
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar11 + 2) = 0xffffffff;
      puVar2 = PTR_DAT_04bc4ee8;
      *(undefined1 *)((long)puVar11 + 0x6b) = 0;
      *puVar11 = 4;
      *(undefined1 *)((long)puVar11 + 0x2c) = 0;
      *(undefined4 *)(puVar11 + 5) = 0x40;
      puVar2 = puVar2 + 0x10;
      puVar11[1] = puVar2;
      puVar3 = PTR_DAT_04bb2bc0;
      puVar11[0xf] = puVar2;
      puVar11[0x1d] = puVar2;
      *(undefined1 *)((long)puVar11 + 0x9c) = 0;
      puVar11[0x2b] = puVar2;
      puVar3 = puVar3 + 0x10;
      *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar11 + 0xdb) = 0;
      *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x14b) = 0;
      *(undefined1 *)((long)puVar11 + 0x10c) = 0;
      *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x2f) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x1bb) = 0;
      *(undefined1 *)((long)puVar11 + 0x17c) = 0;
      puVar11[3] = puVar3;
      puVar11[4] = (undefined1 *)((long)puVar11 + 0x2c);
      *(undefined1 *)(puVar11 + 0xe) = 1;
      *(undefined1 *)(puVar11 + 0x1c) = 1;
      *(undefined1 *)(puVar11 + 0x2a) = 1;
      *(undefined1 *)(puVar11 + 0x38) = 1;
      puVar11[0x11] = puVar3;
      puVar11[0x12] = (undefined1 *)((long)puVar11 + 0x9c);
      puVar11[0x1f] = puVar3;
      puVar11[0x20] = (long)puVar11 + 0x10c;
      puVar11[0x2d] = puVar3;
      puVar11[0x2e] = (long)puVar11 + 0x17c;
      *(undefined4 *)(param_1 + 0x68) = 4;
      param_1[0x69] = (long)(puVar11 + 1);
    }
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1c8,8);
      goto joined_r0x031f2ae8;
    }
  }
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar12 = malloc(0x1c);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) goto LAB_031f2abc;
    puVar12 = (undefined1 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1c,8);
  }
  if (puVar12 != (undefined1 *)0x0) {
    *puVar12 = 0;
    *(undefined2 *)(puVar12 + 2) = 0;
    puVar12[4] = 0;
    *(undefined2 *)(puVar12 + 6) = 0;
    puVar12[8] = 0;
    *(undefined2 *)(puVar12 + 10) = 0;
    puVar12[0xc] = 0;
    *(undefined2 *)(puVar12 + 0xe) = 0;
    puVar12[0x10] = 0;
    *(undefined2 *)(puVar12 + 0x12) = 0;
    puVar12[0x14] = 0;
    *(undefined2 *)(puVar12 + 0x16) = 0;
    puVar12[0x18] = 0;
    *(undefined2 *)(puVar12 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x6b) = 7;
    param_1[0x6c] = (long)puVar12;
  }
LAB_031f2abc:
  param_1[0x42] = 0;
  return;
}

