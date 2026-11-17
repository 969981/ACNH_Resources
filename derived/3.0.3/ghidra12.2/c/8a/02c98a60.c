
void FUN_02c98a60(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined *local_70;
  char *pcStack_68;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_3 != 0) {
    bVar15 = *(byte *)(param_3 + 0xe);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar15;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  param_1[0x46] = (long)(puVar2 + 0x10);
  *param_1 = (long)&PTR_FUN_04ab4b20;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4f] = (long)param_1 + 0x28c;
  param_1[0x50] = 2;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((long)param_1 + 0x29c) = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  puVar1 = PTR_DAT_04bbba78 + 0x10;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0;
  param_1[0x57] = (long)puVar1;
  param_1[0x56] = (long)(PTR_DAT_04bc5c40 + 0x10);
  uVar7 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x2da) = 0xff;
  *(undefined4 *)((long)param_1 + 0x2dc) = 0;
  param_1[0x5d] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x5b) = uVar7;
  puVar1 = PTR_DAT_04bc5c38 + 0x10;
  *(undefined1 *)((long)param_1 + 0x30a) = 0xff;
  *(undefined2 *)(param_1 + 0x61) = uVar7;
  *(undefined1 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined2 *)((long)param_1 + 0x31e) = uVar7;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x5c] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x324) = 0xffffffff00000002;
  FUN_02c8efd4(param_1 + 0x66);
  param_1[0xcb] = 0;
  param_1[0xce] = (long)(param_1 + 0xcf);
  param_1[0xca] = 0;
  param_1[0xcf] = (long)(param_1 + 0xd0);
  param_1[0xcc] = (long)(param_1 + 0xce);
  param_1[0xd0] = (long)(param_1 + 0xd1);
  param_1[0xdd] = 0;
  param_1[0xd1] = (long)(param_1 + 0xd2);
  param_1[0xcd] = (long)(param_1 + 0xce);
  param_1[0xd2] = (long)(param_1 + 0xd3);
  param_1[0xd3] = (long)(param_1 + 0xd4);
  param_1[0xd4] = (long)(param_1 + 0xd5);
  param_1[0xd5] = (long)(param_1 + 0xd6);
  param_1[0xd6] = (long)(param_1 + 0xd7);
  param_1[0xd7] = (long)(param_1 + 0xd8);
  param_1[0xd8] = (long)(param_1 + 0xd9);
  param_1[0xd9] = (long)(param_1 + 0xda);
  param_1[0xda] = (long)(param_1 + 0xdb);
  param_1[0xdb] = (long)(param_1 + 0xdc);
  param_1[0xdc] = (long)(param_1 + 0xdd);
  if (param_1 + 0xde != (long *)0x0) {
    param_1[0xcb] = (long)(param_1 + 0xde);
    param_1[0xca] = 0x1000000000;
  }
  FUN_02c8f96c(param_1 + 0xee);
  param_1[0x15b] = 0;
  param_1[0x15e] = (long)(param_1 + 0x15f);
  param_1[0x15a] = 0;
  param_1[0x15f] = (long)(param_1 + 0x160);
  param_1[0x15c] = (long)(param_1 + 0x15e);
  param_1[0x160] = (long)(param_1 + 0x161);
  param_1[0x169] = 0;
  param_1[0x161] = (long)(param_1 + 0x162);
  param_1[0x15d] = (long)(param_1 + 0x15e);
  param_1[0x162] = (long)(param_1 + 0x163);
  param_1[0x163] = (long)(param_1 + 0x164);
  param_1[0x164] = (long)(param_1 + 0x165);
  param_1[0x165] = (long)(param_1 + 0x166);
  param_1[0x166] = (long)(param_1 + 0x167);
  param_1[0x167] = (long)(param_1 + 0x168);
  param_1[0x168] = (long)(param_1 + 0x169);
  if (param_1 + 0x16a != (long *)0x0) {
    param_1[0x15b] = (long)(param_1 + 0x16a);
    *(undefined4 *)((long)param_1 + 0xad4) = 0xc;
  }
  *(undefined4 *)(param_1 + 0x177) = 0;
  param_1[0x17c] = (long)(param_1 + 0x17d);
  param_1[0x176] = 0;
  param_1[0x17d] = (long)(param_1 + 0x17e);
  param_1[0x178] = 0;
  param_1[0x17e] = (long)(param_1 + 0x17f);
  param_1[0x179] = 0;
  param_1[0x17f] = (long)(param_1 + 0x180);
  param_1[0x17a] = (long)(param_1 + 0x17c);
  param_1[0x180] = (long)(param_1 + 0x181);
  param_1[0x187] = 0;
  param_1[0x181] = (long)(param_1 + 0x182);
  param_1[0x17b] = (long)(param_1 + 0x17c);
  param_1[0x182] = (long)(param_1 + 0x183);
  param_1[0x183] = (long)(param_1 + 0x184);
  param_1[0x184] = (long)(param_1 + 0x185);
  param_1[0x185] = (long)(param_1 + 0x186);
  param_1[0x186] = (long)(param_1 + 0x187);
  if (param_1 + 0x188 != (long *)0x0) {
    param_1[0x179] = (long)(param_1 + 0x188);
    *(undefined4 *)((long)param_1 + 0xbc4) = 0xc;
  }
  param_1[0x195] = 0;
  param_1[0x194] = 0;
  param_1[0x198] = (long)(param_1 + 0x199);
  param_1[0x199] = (long)(param_1 + 0x19a);
  param_1[0x19a] = (long)(param_1 + 0x19b);
  param_1[0x196] = (long)(param_1 + 0x198);
  param_1[0x19b] = (long)(param_1 + 0x19c);
  param_1[0x1a3] = 0;
  param_1[0x19c] = (long)(param_1 + 0x19d);
  param_1[0x197] = (long)(param_1 + 0x198);
  param_1[0x19d] = (long)(param_1 + 0x19e);
  param_1[0x19e] = (long)(param_1 + 0x19f);
  param_1[0x19f] = (long)(param_1 + 0x1a0);
  param_1[0x1a0] = (long)(param_1 + 0x1a1);
  param_1[0x1a1] = (long)(param_1 + 0x1a2);
  param_1[0x1a2] = (long)(param_1 + 0x1a3);
  if (param_1 + 0x1a4 != (long *)0x0) {
    param_1[0x195] = (long)(param_1 + 0x1a4);
    *(undefined4 *)((long)param_1 + 0xca4) = 0xc;
  }
  FUN_03135560(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1d3) = 0;
  param_1[0x1d4] = 0;
  *(undefined4 *)((long)param_1 + 0xeb4) = 0;
  puVar1 = PTR_DAT_04bc5170;
  *(undefined1 *)(param_1 + 0x1d6) = 1;
  plVar11 = param_1 + 0x1ff;
  *(undefined1 *)(param_1 + 0x1d9) = 1;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  param_1[0x1d5] = (long)puVar1;
  param_1[0x1d8] = (long)puVar1;
  param_1[0x1db] = (long)puVar1;
  param_1[0x1de] = (long)puVar1;
  param_1[0x1e1] = (long)puVar1;
  param_1[0x1e4] = (long)puVar1;
  param_1[0x1e7] = (long)&PTR_LAB_04ab4d68;
  *(undefined1 *)(param_1 + 0x1df) = 1;
  *(undefined1 *)(param_1 + 0x1e2) = 1;
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined1 *)(param_1 + 0x1eb) = 1;
  param_1[0x1ea] = (long)&PTR_LAB_04ab4da8;
  *(undefined1 *)(param_1 + 0x1ee) = 1;
  param_1[0x1ed] = (long)&PTR_LAB_04ab4de8;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  param_1[0x1f0] = (long)&PTR_LAB_04ab4da8;
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined1 *)(param_1 + 0x1f9) = 1;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined4 *)((long)param_1 + 0xebc) = 0;
  *(undefined2 *)(param_1 + 0x1d7) = 0x100;
  *(undefined4 *)((long)param_1 + 0xecc) = 0;
  *(undefined2 *)(param_1 + 0x1da) = 0x100;
  *(undefined4 *)((long)param_1 + 0xed4) = 0;
  *(undefined4 *)((long)param_1 + 0xee4) = 0;
  *(undefined2 *)(param_1 + 0x1dd) = 0x100;
  *(undefined4 *)((long)param_1 + 0xeec) = 0;
  *(undefined4 *)((long)param_1 + 0xefc) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf04) = 0;
  *(undefined4 *)((long)param_1 + 0xf14) = 0;
  *(undefined2 *)(param_1 + 0x1e3) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf1c) = 0;
  *(undefined4 *)((long)param_1 + 0xf2c) = 0;
  *(undefined2 *)(param_1 + 0x1e6) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf34) = 0;
  *(undefined4 *)((long)param_1 + 0xf44) = 0;
  *(undefined2 *)(param_1 + 0x1e9) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf4c) = 0;
  *(undefined4 *)((long)param_1 + 0xf5c) = 0;
  *(undefined2 *)(param_1 + 0x1ec) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf64) = 0;
  *(undefined4 *)((long)param_1 + 0xf74) = 0;
  *(undefined2 *)(param_1 + 0x1ef) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf7c) = 0;
  *(undefined4 *)((long)param_1 + 0xf8c) = 0;
  *(undefined2 *)(param_1 + 0x1f2) = 0x100;
  *(undefined4 *)((long)param_1 + 0xf94) = 0;
  *(undefined4 *)((long)param_1 + 0xfa4) = 0;
  *(undefined2 *)(param_1 + 0x1f5) = 0x100;
  param_1[499] = (long)&PTR_LAB_04ab4e28;
  *(undefined4 *)((long)param_1 + 0xfbc) = 0;
  *(undefined8 *)((long)param_1 + 0xfb4) = 0;
  *(undefined8 *)((long)param_1 + 0xfac) = 0;
  *(undefined4 *)((long)param_1 + 0xfcc) = 0;
  *(undefined2 *)(param_1 + 0x1fa) = 0x100;
  param_1[0x1f8] = (long)&PTR_LAB_04ab4e28;
  *(undefined4 *)((long)param_1 + 0xfd4) = 0;
  *(undefined4 *)((long)param_1 + 0xfe4) = 0;
  *(undefined2 *)(param_1 + 0x1fd) = 0x101;
  param_1[0x1fb] = (long)&PTR_LAB_04ab4e28;
  *(undefined4 *)((long)param_1 + 0xfec) = 0xffffffff;
  param_1[0x1fe] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(plVar11,0,0x1bf30);
  puVar2 = PTR_DAT_04bb2bc0;
  lVar19 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    FUN_03463544(plVar11,0);
    *(undefined4 *)(plVar11 + 0x2b) = 0x40;
    lVar19 = lVar19 + -1;
    *(undefined1 *)((long)plVar11 + 0x19b) = 0;
    *(undefined1 *)((long)plVar11 + 0x15c) = 0;
    *(undefined4 *)(plVar11 + 0x34) = 0;
    plVar11[0x29] = (long)puVar1;
    plVar11[0x2a] = (long)plVar11 + 0x15c;
    puVar8 = PTR_DAT_04bc8e10;
    plVar11 = plVar11 + 0x35;
  } while (lVar19 != 0);
  *(undefined4 *)(param_1 + 0x39e7) = 0;
  *(undefined4 *)(param_1 + 0x39e8) = 0;
  *(undefined4 *)(param_1 + 0x39e9) = 0;
  param_1[0x39e5] = (long)(puVar8 + 0x10);
  param_1[0x39e6] = -1;
  puVar1 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x39ee) = 0;
  *(undefined4 *)(param_1 + 0x39f3) = 0;
  param_1[0x39f4] = 0;
  *(undefined4 *)(param_1 + 0x39f5) = 0;
  param_1[0x39f6] = 0;
  *(undefined4 *)(param_1 + 0x39f7) = 0;
  param_1[0x39f8] = 0;
  param_1[0x39ea] = (long)(puVar1 + 0x10);
  param_1[0x39ef] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb37e0;
  uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0x39fb) = uVar7;
  uVar5 = puVar1[2];
  *(undefined1 *)((long)param_1 + 0x1cfda) = uVar5;
  uVar6 = puVar1[3];
  *(undefined1 *)((long)param_1 + 0x1cfdb) = uVar6;
  uVar4 = *(undefined4 *)(puVar1 + 4);
  *(undefined2 *)(param_1 + 0x39fc) = uVar7;
  *(undefined2 *)(param_1 + 0x39fd) = uVar7;
  *(undefined2 *)(param_1 + 0x39fe) = uVar7;
  *(undefined2 *)(param_1 + 0x39ff) = uVar7;
  *(undefined2 *)(param_1 + 0x3a00) = uVar7;
  *(undefined2 *)(param_1 + 0x3a01) = uVar7;
  *(undefined2 *)(param_1 + 0x3a02) = uVar7;
  *(undefined2 *)(param_1 + 0x3a03) = uVar7;
  *(undefined1 *)((long)param_1 + 0x1cfe2) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1cfea) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1cff2) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1cffa) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1d002) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1d00a) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1d012) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1d01a) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1cfe3) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1cfeb) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1cff3) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1cffb) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1d003) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1d00b) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1d013) = uVar6;
  *(undefined1 *)((long)param_1 + 0x1d01b) = uVar6;
  *(undefined4 *)((long)param_1 + 0x1cfdc) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1cfe4) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1cfec) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1cff4) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1cffc) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1d004) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1d00c) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1d014) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1d01c) = uVar4;
  *(undefined1 *)(param_1 + 0x3a04) = 1;
  puVar1 = PTR_DAT_04bb3128;
  *(undefined2 *)((long)param_1 + 0x1d022) = *(undefined2 *)PTR_DAT_04bb3170;
  param_1[0x39f9] = -1;
  param_1[0x39fa] = -1;
  if (((*puVar1 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar8 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar18 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar18 * 4) == 4) goto LAB_02c99170;
      uVar18 = uVar18 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar18);
  }
  uVar18 = 0;
LAB_02c99170:
  *(undefined2 *)((long)param_1 + 0x1d024) = 0;
  if (((*puVar1 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar17 = (uint)uVar18;
  if (*(uint *)puVar8 <= uVar17) {
    uVar17 = 0;
  }
  iVar9 = *(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar17 * 4);
  *(undefined1 *)((long)param_1 + 0x1d026) = 0;
  *(undefined4 *)(param_1 + 0x3a05) = 0;
  puVar1 = PTR_DAT_04bc9900;
  param_1[0x3a08] = (long)PTR_LAB_04bc98f0;
  param_1[0x3a09] = 0;
  param_1[0x3a06] = (long)(puVar1 + 0x10);
  param_1[0x3a07] = (long)(param_1 + 0x3a06);
  puVar1 = PTR_DAT_04bdf1d8;
  *(short *)((long)param_1 + 0x1d024) = (short)(iVar9 << 0xb);
  param_1[0x3a17] = 0;
  param_1[0x3a0a] = (long)(puVar1 + 0x10);
  param_1[0x3a0b] = 0;
  param_1[0x3a0c] = 0;
  param_1[0x3a15] = 0;
  param_1[0x3a0d] = 0;
  param_1[0x3a0e] = 0;
  *(undefined1 *)(param_1 + 0x3a16) = 0;
  param_1[0x3a0f] = 0;
  param_1[0x3a10] = 0;
  param_1[0x3a11] = 0;
  param_1[0x3a12] = 0;
  param_1[0x3a13] = 0;
  param_1[0x3a14] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x3a18] = 0;
  puVar8 = PTR_DAT_04bb3350;
  lVar19 = *(long *)puVar1;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  if (lVar19 == 0) {
    puVar12 = malloc(0x2a8);
joined_r0x02c993bc:
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar12 + 2) = 0xffffffff;
      puVar3 = PTR_DAT_04bc4ee8;
      puVar2 = puVar2 + 0x10;
      *(undefined1 *)((long)puVar12 + 0x9c) = 0;
      puVar12[0x11] = puVar2;
      puVar12[0x12] = (undefined1 *)((long)puVar12 + 0x9c);
      puVar12[0x1f] = puVar2;
      puVar12[0x20] = (long)puVar12 + 0x10c;
      puVar3 = puVar3 + 0x10;
      *(undefined1 *)((long)puVar12 + 0x2c) = 0;
      puVar12[3] = puVar2;
      puVar12[4] = (undefined1 *)((long)puVar12 + 0x2c);
      puVar12[0xf] = puVar3;
      puVar12[0x1d] = puVar3;
      puVar12[1] = puVar3;
      puVar12[0x2b] = puVar3;
      puVar12[0x39] = puVar3;
      puVar12[0x47] = puVar3;
      *(undefined1 *)((long)puVar12 + 0x6b) = 0;
      *puVar12 = 6;
      *(undefined4 *)(puVar12 + 5) = 0x40;
      *(undefined1 *)(puVar12 + 0xe) = 1;
      *(undefined4 *)(puVar12 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar12 + 0xdb) = 0;
      *(undefined1 *)(puVar12 + 0x1c) = 1;
      *(undefined4 *)(puVar12 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar12 + 0x14b) = 0;
      *(undefined1 *)((long)puVar12 + 0x10c) = 0;
      *(undefined1 *)(puVar12 + 0x2a) = 1;
      *(undefined4 *)(puVar12 + 0x2c) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x2f) = 0x40;
      *(undefined1 *)((long)puVar12 + 0x1bb) = 0;
      *(undefined1 *)((long)puVar12 + 0x17c) = 0;
      *(undefined1 *)(puVar12 + 0x38) = 1;
      *(undefined4 *)(puVar12 + 0x3a) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x3d) = 0x40;
      *(undefined1 *)((long)puVar12 + 0x22b) = 0;
      *(undefined1 *)((long)puVar12 + 0x1ec) = 0;
      *(undefined1 *)(puVar12 + 0x46) = 1;
      *(undefined4 *)(puVar12 + 0x48) = 0xffffffff;
      puVar12[0x4a] = (long)puVar12 + 0x25c;
      *(undefined4 *)(puVar12 + 0x4b) = 0x40;
      *(undefined1 *)((long)puVar12 + 0x29b) = 0;
      *(undefined1 *)((long)puVar12 + 0x25c) = 0;
      puVar12[0x49] = puVar2;
      *(undefined1 *)(puVar12 + 0x54) = 1;
      puVar12[0x2d] = puVar2;
      puVar12[0x2e] = (long)puVar12 + 0x17c;
      puVar12[0x3b] = puVar2;
      puVar12[0x3c] = (long)puVar12 + 0x1ec;
      *(undefined4 *)(param_1 + 0x1d3) = 6;
      param_1[0x1d4] = (long)(puVar12 + 1);
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
      puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2a8,8);
      goto joined_r0x02c993bc;
    }
  }
  lVar10 = *(long *)puVar1;
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
  lVar16 = *(long *)puVar1;
  puVar12 = (undefined8 *)(lVar10 + 8);
  if (lVar19 != 0) {
    puVar12 = (undefined8 *)(lVar19 + 0xa8);
  }
  plVar11 = (long *)*puVar12;
  if (lVar16 == 0) {
    puVar12 = malloc(0x20);
  }
  else {
    plVar13 = plVar11;
    if (plVar11 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      puVar12 = (undefined8 *)(lVar16 + 8);
      if (lVar19 != 0) {
        puVar12 = (undefined8 *)(lVar19 + 0xa8);
      }
      plVar13 = (long *)*puVar12;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x20,8);
  }
  *puVar12 = 0;
  puVar12[1] = 0xffffffff;
  *(undefined4 *)puVar12 = 100;
  puVar12[2] = 0;
  puVar12[3] = 0;
  local_70 = PTR_DAT_04bb2020;
  param_1[0x3a0e] = (long)puVar12;
  local_70 = local_70 + 0x10;
  pcStack_68 = "JpegEncodingWorkHeap";
  lVar19 = FUN_038c6d48(0x200000,&local_70,plVar11,8,1,0);
  param_1[0x3a0f] = lVar19;
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    pvVar14 = malloc(0x23000);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      puVar12 = (undefined8 *)(lVar19 + 8);
      if (lVar10 != 0) {
        puVar12 = (undefined8 *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*puVar12;
      if (plVar11 == (long *)0x0) {
        pvVar14 = (void *)0x0;
        goto LAB_02c99478;
      }
    }
    pvVar14 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x23000,8);
  }
LAB_02c99478:
  param_1[0x3a17] = (long)pvVar14;
  return;
}

