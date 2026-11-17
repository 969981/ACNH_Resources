
void FUN_02d91660(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  void *__src;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined **local_80;
  long *plStack_78;
  
  plVar14 = param_1 + 0x3ab1;
  plVar21 = param_1 + 0x38d5;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar16 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar16;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ac34e8;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  puVar1 = PTR_DAT_04bcb4d0 + 0x10;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x47] = (long)puVar1;
  param_1[0x4a] = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0xffffffff00000000;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  bVar16 = *PTR_DAT_04bb32e0;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  *(byte *)((long)param_1 + 0x294) = bVar16;
  *(undefined1 *)((long)param_1 + 0x295) = 1;
  FUN_033fc620(param_1 + 0x47,0);
  *(undefined4 *)(param_1 + 0x53) = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  param_1[0x54] = 0;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = (long)(puVar2 + 0x10);
  param_1[0x5a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x5b,0,0x1bf30);
  lVar20 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar19 = param_1;
  do {
    FUN_03463544(plVar19 + 0x5b,0);
    *(undefined4 *)(plVar19 + 0x86) = 0x40;
    lVar20 = lVar20 + -1;
    plVar19[0x85] = (long)plVar19 + 0x434;
    *(undefined1 *)((long)plVar19 + 0x473) = 0;
    *(undefined1 *)((long)plVar19 + 0x434) = 0;
    plVar19[0x84] = (long)puVar1;
    *(undefined4 *)(plVar19 + 0x8f) = 0;
    plVar19 = plVar19 + 0x35;
  } while (lVar20 != 0);
  *(undefined4 *)(param_1 + 0x3843) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3844) = 0;
  *(undefined4 *)(param_1 + 0x3845) = 0xffffffff;
  param_1[0x3841] = (long)(puVar1 + 0x10);
  param_1[0x3842] = -1;
  FUN_03135560(param_1 + 0x3846);
  plVar19 = param_1 + 0x386e;
  *plVar19 = (long)(param_1 + 0x386f);
  param_1[0x388e] = (long)(param_1 + 0x388f);
  param_1[0x388f] = (long)(param_1 + 0x3890);
  param_1[0x3890] = (long)(param_1 + 0x3891);
  param_1[0x3891] = (long)(param_1 + 0x3892);
  param_1[0x3892] = (long)(param_1 + 0x3893);
  param_1[0x3893] = (long)(param_1 + 0x3894);
  param_1[0x3894] = (long)(param_1 + 0x3895);
  param_1[0x3895] = (long)(param_1 + 0x3896);
  param_1[0x3896] = (long)(param_1 + 0x3897);
  param_1[0x3897] = (long)(param_1 + 0x3898);
  param_1[0x3898] = (long)(param_1 + 0x3899);
  param_1[0x3899] = (long)(param_1 + 0x389a);
  param_1[0x389a] = (long)(param_1 + 0x389b);
  param_1[0x389b] = (long)(param_1 + 0x389c);
  param_1[0x389c] = (long)(param_1 + 0x389d);
  param_1[0x389d] = (long)(param_1 + 0x389e);
  param_1[0x389e] = (long)(param_1 + 0x389f);
  param_1[0x389f] = 0;
  param_1[0x386c] = (long)plVar19;
  param_1[0x386d] = (long)plVar19;
  param_1[0x388d] = (long)(param_1 + 0x388e);
  param_1[0x388c] = (long)(param_1 + 0x388d);
  param_1[0x388b] = (long)(param_1 + 0x388c);
  param_1[0x388a] = (long)(param_1 + 0x388b);
  param_1[0x3889] = (long)(param_1 + 0x388a);
  param_1[0x3888] = (long)(param_1 + 0x3889);
  param_1[0x3887] = (long)(param_1 + 0x3888);
  param_1[0x3886] = (long)(param_1 + 0x3887);
  param_1[0x3885] = (long)(param_1 + 0x3886);
  param_1[0x3884] = (long)(param_1 + 0x3885);
  param_1[0x3883] = (long)(param_1 + 0x3884);
  param_1[0x3882] = (long)(param_1 + 0x3883);
  param_1[0x3881] = (long)(param_1 + 0x3882);
  param_1[0x3880] = (long)(param_1 + 0x3881);
  param_1[0x387f] = (long)(param_1 + 0x3880);
  param_1[0x387e] = (long)(param_1 + 0x387f);
  param_1[0x387d] = (long)(param_1 + 0x387e);
  param_1[0x387c] = (long)(param_1 + 0x387d);
  param_1[0x387b] = (long)(param_1 + 0x387c);
  param_1[0x387a] = (long)(param_1 + 0x387b);
  param_1[0x3879] = (long)(param_1 + 0x387a);
  param_1[0x3878] = (long)(param_1 + 0x3879);
  param_1[0x3877] = (long)(param_1 + 0x3878);
  param_1[0x3876] = (long)(param_1 + 0x3877);
  param_1[0x3875] = (long)(param_1 + 0x3876);
  param_1[0x3874] = (long)(param_1 + 0x3875);
  param_1[0x3873] = (long)(param_1 + 0x3874);
  param_1[0x3872] = (long)(param_1 + 0x3873);
  param_1[0x3871] = (long)(param_1 + 0x3872);
  param_1[0x3869] = 0;
  param_1[0x3870] = (long)(param_1 + 0x3871);
  param_1[0x386a] = 0;
  param_1[0x386b] = 0;
  param_1[0x386f] = (long)(param_1 + 0x3870);
  if (param_1 + 0x38a0 != (long *)0x0) {
    param_1[0x386a] = 0x3200000000;
    param_1[0x386b] = (long)(param_1 + 0x38a0);
  }
  *(undefined4 *)(param_1 + 0x38d4) = 0;
  param_1[0x38d2] = 0;
  param_1[0x38d3] = 0;
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  *plVar21 = (long)puVar1;
  memset(param_1 + 0x38d6,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar22 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1ce04) = uVar10;
  *(uint *)(param_1 + 0x39c1) = uVar22;
  uVar10 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1ce0c) = uVar10;
  *(uint *)(param_1 + 0x39c2) = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)(**(code **)(*plVar21 + 0x18))(plVar21);
  memset(pvVar12,0,0x754);
  plVar21 = param_1 + 0x39c3;
  *plVar21 = (long)puVar1;
  memset(param_1 + 0x39c4,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x1d574) = uVar10;
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x3aaf) = uVar10;
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1d57c) = uVar10;
  *(uint *)(param_1 + 0x3ab0) = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)(**(code **)(*plVar21 + 0x18))(plVar21);
  memset(pvVar12,0,0x754);
  *plVar14 = (long)puVar1;
  memset(param_1 + 0x3ab2,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar22 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1dce4) = uVar10;
  *(uint *)(param_1 + 0x3b9d) = uVar22;
  uVar10 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1dcec) = uVar10;
  *(uint *)(param_1 + 0x3b9e) = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14);
  memset(pvVar12,0,0x754);
  memset(param_1 + 0x3b9f,0,0x7d3);
  param_1[0x3c9a] = (long)&PTR_LAB_04ac37a0;
  plVar14 = param_1 + 0x3ca3;
  lVar20 = 0xea5c;
  param_1[0x3c9c] = 0;
  param_1[0x3c9d] = (long)(param_1 + 0x3c9f);
  param_1[0x3c9b] = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  while( true ) {
    plVar14[-3] = (long)(plVar14 + -2);
    plVar14[-4] = (long)(plVar14 + -3);
    plVar14[-2] = (long)(plVar14 + -1);
    if (lVar20 == 0) break;
    plVar14[-1] = (long)plVar14;
    plVar14 = plVar14 + 4;
    lVar20 = lVar20 + -4;
  }
  param_1[0x3c9e] = (long)(param_1 + 0x3c9f);
  param_1[0x126fe] = 0;
  if (param_1 + 0x126ff != (long *)0x0) {
    param_1[0x3c9c] = (long)(param_1 + 0x126ff);
    *(undefined4 *)((long)param_1 + 0x1e4dc) = 60000;
  }
  uVar6 = *(undefined4 *)PTR_DAT_04bb37e0;
  uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0x3c9b) = 0;
  param_1[0x2115f] = 0;
  *(undefined2 *)(param_1 + 0x21160) = 0xffff;
  puVar2 = PTR_DAT_04bd4738;
  *(undefined4 *)((long)param_1 + 0x108b04) = 0xffffffff;
  param_1[0x21164] = 0xffffffff;
  param_1[0x21165] = 0xffffffff;
  param_1[0x21166] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21167) = 0;
  *(undefined4 *)(param_1 + 0x21168) = 0;
  param_1[0x21169] = 0;
  *(undefined4 *)(param_1 + 0x2116a) = 0;
  param_1[0x2116b] = 0;
  *(undefined4 *)(param_1 + 0x2116c) = 0;
  *(undefined4 *)(param_1 + 0x2116d) = uVar6;
  *(undefined4 *)((long)param_1 + 0x108b6c) = uVar7;
  *(undefined1 *)((long)param_1 + 0x108b64) = 0xff;
  param_1[0x21163] = (long)(puVar2 + 0x10);
  param_1[0x21161] = -1;
  param_1[0x21162] = 0x100000000;
  *(undefined4 *)(param_1 + 0x21173) = 0;
  param_1[0x2116e] = 0;
  param_1[0x21171] = 0;
  param_1[0x21172] = 0;
  param_1[0x2116f] = 0;
  param_1[0x21170] = 0;
  *(undefined2 *)(param_1 + 0x21171) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x21172) = 0xff;
  *(undefined8 *)((long)param_1 + 0x108b94) = 0;
  *(undefined4 *)((long)param_1 + 0x108b9c) = 0;
  FUN_03454a44(param_1 + 0x21163);
  param_1[0x21176] = (long)(PTR_DAT_04bbba78 + 0x10);
  *(undefined4 *)(param_1 + 0x21174) = 0;
  param_1[0x21177] = 0;
  param_1[0x21178] = 0;
  param_1[0x21179] = 0;
  puVar2 = PTR_FUN_04bc9b60;
  param_1[0x21175] = 0;
  puVar3 = PTR_DAT_04bc9b68;
  param_1[0x2117c] = (long)puVar2;
  param_1[0x2117d] = 0;
  param_1[0x2117a] = (long)(puVar3 + 0x10);
  param_1[0x2117b] = (long)(param_1 + 0x21176);
  puVar2 = PTR_DAT_04bdf1d8;
  param_1[0x2117f] = 0;
  param_1[0x21180] = 0;
  param_1[0x21181] = 0;
  param_1[0x21182] = 0;
  param_1[0x2117e] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x211a9) = 0;
  *(undefined4 *)(param_1 + 0x211aa) = 0;
  *(undefined4 *)(param_1 + 0x211ac) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x21186) = 0;
  *(undefined4 *)(param_1 + 0x21187) = 0;
  *(undefined1 *)((long)param_1 + 0x108c9b) = 0;
  *(undefined1 *)((long)param_1 + 0x108c5c) = 0;
  param_1[0x2118a] = (long)param_1 + 0x108c5c;
  param_1[0x21184] = (long)puVar2;
  param_1[0x21185] = -1;
  *(undefined1 *)((long)param_1 + 0x108cec) = 0;
  *(undefined4 *)(param_1 + 0x2118b) = 0x40;
  *(undefined4 *)(param_1 + 0x2119d) = 0x40;
  puVar3 = puVar1 + 0x10;
  param_1[0x21195] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x21197) = 0;
  *(undefined4 *)(param_1 + 0x21198) = 0;
  param_1[0x2119c] = (long)param_1 + 0x108cec;
  *(undefined1 *)((long)param_1 + 0x108d2b) = 0;
  *(undefined4 *)(param_1 + 0x21188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21194) = 0;
  param_1[0x21196] = -1;
  *(undefined1 *)(param_1 + 0x21199) = 0;
  *(undefined4 *)(param_1 + 0x2119a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x211a6) = 0;
  param_1[0x21189] = (long)puVar3;
  param_1[0x2119b] = (long)puVar3;
  puVar3 = PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 0x211ab) = 0;
  param_1[0x211a7] = (long)puVar2;
  param_1[0x211a8] = -1;
  puVar2 = PTR_DAT_04bb3350;
  lVar20 = *(long *)puVar3;
  param_1[0x21183] = 0;
  if (lVar20 == 0) {
    pvVar12 = malloc(0x1540);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar15 = (undefined8 *)(lVar20 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x1540,8);
  }
  memset(pvVar12,0,0x1540);
  FUN_02d924e0(pvVar12);
  param_1[0x211ad] = (long)pvVar12;
  *(undefined1 *)(param_1 + 0x211ae) = 0;
  lVar20 = *(long *)puVar3;
  if (lVar20 == 0) {
    pvVar12 = malloc(0x1f0);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar15 = (undefined8 *)(lVar20 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x1f0,8);
  }
  local_80 = &PTR_LAB_04ac37d8;
  plStack_78 = param_1;
  FUN_0340c9e0(pvVar12,&local_80);
  *(undefined4 *)(param_1 + 0x211b1) = 0;
  param_1[0x211af] = (long)pvVar12;
  param_1[0x211b0] = 0xfffe00000000;
  FUN_0277d4ac((long)param_1 + 0x108d84);
  *(undefined1 *)((long)param_1 + 0x108d8c) = 0;
  lVar20 = *(long *)puVar3;
  if (lVar20 == 0) {
    puVar15 = malloc(0x41c0);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar14 = (long *)(lVar20 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    puVar15 = (undefined8 *)0x0;
    if (plVar14 != (long *)0x0) {
      puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x41c0,8);
    }
  }
  puVar15[2] = puVar15 + 4;
  lVar20 = 0x1a2;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[4] = puVar15 + 8;
  puVar17 = puVar15 + 8;
  do {
    lVar20 = lVar20 + -2;
    *puVar17 = puVar17 + 4;
    puVar17[4] = puVar17 + 8;
    puVar17 = puVar17 + 8;
  } while (lVar20 != 0);
  puVar15[3] = puVar15 + 4;
  puVar15[0x690] = 0;
  if (puVar15 + 0x694 != (undefined8 *)0x0) {
    *puVar15 = 0x1a400000000;
    puVar15[1] = puVar15 + 0x694;
  }
  plVar21 = param_1 + 0x211b3;
  *plVar21 = 0;
  param_1[0x211b2] = (long)puVar15;
  plVar14 = param_1 + 0x211bb;
  param_1[0x211b4] = 0;
  param_1[0x211b5] = (long)(param_1 + 0x211b7);
  lVar20 = 0x1a0;
  while( true ) {
    plVar14[-3] = (long)(plVar14 + -2);
    plVar14[-4] = (long)(plVar14 + -3);
    plVar14[-2] = (long)(plVar14 + -1);
    if (lVar20 == 0) break;
    plVar14[-1] = (long)plVar14;
    plVar14 = plVar14 + 4;
    lVar20 = lVar20 + -4;
  }
  param_1[0x2135a] = 0;
  param_1[0x211b6] = (long)(param_1 + 0x211b7);
  if (param_1 + 0x2135b != (long *)0x0) {
    param_1[0x211b3] = 0x1a400000000;
    param_1[0x211b4] = (long)(param_1 + 0x2135b);
  }
  lVar20 = *(long *)puVar3;
  param_1[0x214ff] = 0;
  *(undefined8 *)((long)param_1 + 0x10a7fd) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  if (lVar20 == 0) {
    puVar15 = malloc(0x628);
    if (puVar15 != (undefined8 *)0x0) goto LAB_02d92080;
LAB_02d922a0:
    uVar10 = *(uint *)(param_1 + 0x21174);
    if ((int)uVar10 < 1) goto LAB_02d923cc;
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar14 = (long *)(lVar20 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if ((plVar14 == (long *)0x0) ||
       (puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x628,8),
       puVar15 == (undefined8 *)0x0)) goto LAB_02d922a0;
LAB_02d92080:
    *(undefined4 *)(puVar15 + 2) = 0xffffffff;
    puVar2 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar15 + 0x9c) = 0;
    *(undefined1 *)((long)puVar15 + 0x2c) = 0;
    uVar10 = 0xe;
    *(undefined1 *)((long)puVar15 + 0x6b) = 0;
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    *puVar15 = 0xe;
    puVar15[0x11] = puVar1;
    puVar15[0x12] = (undefined1 *)((long)puVar15 + 0x9c);
    puVar15[0x1f] = puVar1;
    puVar15[0x20] = (long)puVar15 + 0x10c;
    puVar15[1] = puVar2;
    puVar15[0xf] = puVar2;
    puVar15[0x1d] = puVar2;
    puVar15[0x2b] = puVar2;
    puVar15[0x39] = puVar2;
    puVar15[0x47] = puVar2;
    puVar15[0x55] = puVar2;
    puVar15[99] = puVar2;
    puVar15[0x71] = puVar2;
    puVar15[0x7f] = puVar2;
    puVar15[0x8d] = puVar2;
    puVar15[0x9b] = puVar2;
    puVar15[0xa9] = puVar2;
    puVar15[0xb7] = puVar2;
    *(undefined4 *)(puVar15 + 5) = 0x40;
    *(undefined4 *)(puVar15 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar15 + 0xdb) = 0;
    *(undefined4 *)(puVar15 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x14b) = 0;
    *(undefined1 *)((long)puVar15 + 0x10c) = 0;
    *(undefined4 *)(puVar15 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar15 + 0x17c) = 0;
    *(undefined4 *)(puVar15 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x22b) = 0;
    *(undefined1 *)((long)puVar15 + 0x1ec) = 0;
    *(undefined4 *)(puVar15 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x29b) = 0;
    *(undefined1 *)((long)puVar15 + 0x25c) = 0;
    puVar15[0x49] = puVar1;
    *(undefined4 *)(puVar15 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x30b) = 0;
    *(undefined1 *)((long)puVar15 + 0x2cc) = 0;
    puVar15[0x57] = puVar1;
    *(undefined4 *)(puVar15 + 100) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x37b) = 0;
    *(undefined1 *)((long)puVar15 + 0x33c) = 0;
    puVar15[0x65] = puVar1;
    *(undefined4 *)(puVar15 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar15 + 0x3ac) = 0;
    puVar15[0x73] = puVar1;
    *(undefined4 *)(puVar15 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x45b) = 0;
    *(undefined1 *)((long)puVar15 + 0x41c) = 0;
    puVar15[0x81] = puVar1;
    *(undefined4 *)(puVar15 + 0x8e) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar15 + 0x48c) = 0;
    puVar15[0x8f] = puVar1;
    *(undefined4 *)(puVar15 + 0x9c) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x9f) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x53b) = 0;
    *(undefined1 *)((long)puVar15 + 0x4fc) = 0;
    puVar15[0x9d] = puVar1;
    *(undefined4 *)(puVar15 + 0xaa) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0xad) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x5ab) = 0;
    *(undefined1 *)((long)puVar15 + 0x56c) = 0;
    puVar15[0xab] = puVar1;
    *(undefined4 *)(puVar15 + 0xb8) = 0xffffffff;
    puVar15[0xba] = (long)puVar15 + 0x5dc;
    *(undefined4 *)(puVar15 + 0xbb) = 0x40;
    *(undefined1 *)((long)puVar15 + 0x61b) = 0;
    *(undefined1 *)((long)puVar15 + 0x5dc) = 0;
    puVar15[0xb9] = puVar1;
    puVar15[0x2d] = puVar1;
    puVar15[0x2e] = (long)puVar15 + 0x17c;
    puVar15[0x3b] = puVar1;
    puVar15[0x3c] = (long)puVar15 + 0x1ec;
    puVar15[0x4a] = (long)puVar15 + 0x25c;
    puVar15[0x58] = (long)puVar15 + 0x2cc;
    puVar15[0x66] = (long)puVar15 + 0x33c;
    puVar15[0x74] = (long)puVar15 + 0x3ac;
    puVar15[0x82] = (long)puVar15 + 0x41c;
    puVar15[0x90] = (long)puVar15 + 0x48c;
    puVar15[0x9e] = (long)puVar15 + 0x4fc;
    puVar15[0xac] = (long)puVar15 + 0x56c;
    puVar15[3] = puVar1;
    puVar15[4] = (undefined1 *)((long)puVar15 + 0x2c);
    *(undefined1 *)(puVar15 + 0xe) = 1;
    *(undefined1 *)(puVar15 + 0x1c) = 1;
    *(undefined1 *)(puVar15 + 0x2a) = 1;
    *(undefined1 *)(puVar15 + 0x38) = 1;
    *(undefined1 *)(puVar15 + 0x46) = 1;
    *(undefined1 *)(puVar15 + 0x54) = 1;
    *(undefined1 *)(puVar15 + 0x62) = 1;
    *(undefined1 *)(puVar15 + 0x70) = 1;
    *(undefined1 *)(puVar15 + 0x7e) = 1;
    *(undefined1 *)(puVar15 + 0x8c) = 1;
    *(undefined1 *)(puVar15 + 0x9a) = 1;
    *(undefined1 *)(puVar15 + 0xa8) = 1;
    *(undefined1 *)(puVar15 + 0xb6) = 1;
    *(undefined1 *)(puVar15 + 0xc4) = 1;
    *(undefined4 *)(param_1 + 0x21174) = 0xe;
    param_1[0x21175] = (long)(puVar15 + 1);
  }
  uVar22 = 0;
  do {
    lVar20 = param_1[0x21175];
    uVar5 = uVar22;
    if (0xd < uVar22) {
      uVar5 = 0;
    }
    uVar23 = (ulong)uVar5;
    uVar5 = uVar22;
    if (uVar10 <= uVar22) {
      uVar5 = 0;
    }
    uVar24 = (ulong)uVar5;
    lVar13 = lVar20 + uVar24 * 0x70;
    pvVar12 = *(void **)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 8) = (&DAT_05687ad0)[uVar23 * 0x1c];
    plVar14 = &DAT_05687ad8 + uVar23 * 0xe;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    __src = (void *)(&DAT_05687ae0)[uVar23 * 0xe];
    if (pvVar12 != __src) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar18 = (&DAT_05687ae0)[uVar23 * 0xe];
      lVar13 = 0;
      do {
        if (*(char *)(lVar18 + lVar13) == '\0') goto LAB_02d922c4;
        lVar4 = lVar18 + lVar13;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02d922c4;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02d922c4;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_02d922c4:
      iVar8 = *(int *)(lVar20 + uVar24 * 0x70 + 0x20);
      iVar11 = (int)lVar13;
      if (iVar8 <= (int)lVar13) {
        iVar11 = iVar8 + -1;
      }
      memcpy(pvVar12,__src,(long)iVar11);
      *(undefined1 *)((long)pvVar12 + (long)iVar11) = 0;
    }
    uVar22 = uVar22 + 1;
    *(undefined1 *)(lVar20 + uVar24 * 0x70 + 0x68) = (&DAT_05687b30)[uVar23 * 0x70];
    uVar10 = *(uint *)(param_1 + 0x21174);
  } while ((int)uVar22 < (int)uVar10);
LAB_02d923cc:
  if (((*PTR_DAT_04bc6028 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc6028), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc6020 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6028);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar23 = (**(code **)*param_3)(param_3,PTR_DAT_04bc6020), (uVar23 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x21162) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)((long)param_1 + 0x108b14) = *(undefined4 *)(param_3 + 3);
    memcpy(param_1 + 0x38d6,param_3 + 5,0x754);
    memcpy(param_1 + 0x3b9f,param_3 + 0xf2,2000);
    uVar9 = *(undefined1 *)((long)param_3 + 0xf62);
    *(undefined2 *)(param_1 + 0x3c99) = *(undefined2 *)(param_3 + 0x1ec);
    *(undefined1 *)((long)param_1 + 0x1e4ca) = uVar9;
  }
  if (0 < (int)*plVar21) {
    lVar20 = 0;
    plVar14 = (long *)param_1[0x211b5];
    do {
      plVar19 = *(long **)(param_1[0x211b4] + lVar20 * 8);
      lVar20 = lVar20 + 1;
      *plVar19 = (long)plVar14;
      param_1[0x211b5] = (long)plVar19;
      plVar14 = plVar19;
    } while (lVar20 < (int)param_1[0x211b3]);
  }
  *(undefined4 *)plVar21 = 0;
  return;
}

