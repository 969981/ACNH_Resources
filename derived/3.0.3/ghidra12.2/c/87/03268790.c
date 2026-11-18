
void FUN_03268790(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  byte bVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined **local_80;
  long *plStack_78;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar8 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar8 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar15 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar15;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b16028;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  memset(param_1 + 0x45,0,0x8e678);
  plVar16 = param_1 + 0x4d;
  lVar18 = 0x232a;
  param_1[0x47] = (long)(param_1 + 0x49);
  do {
    plVar16[-2] = (long)plVar16;
    lVar18 = lVar18 + -2;
    plVar16[-4] = (long)(plVar16 + -2);
    plVar16 = plVar16 + 4;
  } while (lVar18 != 0);
  param_1[0x469d] = 0;
  param_1[0x48] = (long)(param_1 + 0x49);
  if (param_1 + 0x469f != (long *)0x0) {
    param_1[0x46] = (long)(param_1 + 0x469f);
    param_1[0x45] = 0x232b00000000;
  }
  puVar1 = PTR_DAT_04bc0010 + 0x68;
  param_1[0x69ca] = (long)(PTR_DAT_04bc0010 + 0x10);
  param_1[0x69cb] = (long)puVar1;
  memset(param_1 + 0x69cc,0,72000);
  lVar18 = 9000;
  plVar16 = param_1 + 0x69cc;
  do {
    *plVar16 = 0xfffe;
    FUN_0277d4ac(plVar16);
    lVar18 = lVar18 + -1;
    plVar16 = plVar16 + 1;
  } while (lVar18 != 0);
  lVar18 = 9000;
  uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar4 = PTR_DAT_04bb37e0[2];
  uVar5 = PTR_DAT_04bb37e0[3];
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar17 = (undefined4 *)((long)param_1 + 0x34e64);
  do {
    *(undefined2 *)(puVar17 + -1) = uVar6;
    lVar18 = lVar18 + -1;
    *(undefined1 *)((long)puVar17 + -2) = uVar4;
    *(undefined1 *)((long)puVar17 + -1) = uVar5;
    *puVar17 = uVar3;
    puVar17 = puVar17 + 2;
  } while (lVar18 != 0);
  lVar18 = 9000;
  puVar17 = (undefined4 *)((long)param_1 + 0x34e64);
  do {
    *(undefined2 *)(puVar17 + -1) = uVar6;
    lVar18 = lVar18 + -1;
    *(undefined1 *)((long)puVar17 + -2) = uVar4;
    *(undefined1 *)((long)puVar17 + -1) = uVar5;
    *puVar17 = uVar3;
    puVar17 = puVar17 + 2;
  } while (lVar18 != 0);
  *(undefined4 *)(param_1 + 0x8cf4) = 0x50;
  memset((void *)((long)param_1 + 0x467a4),0,0x468);
  param_1[0x8d82] = 0;
  param_1[0x8d83] = 0;
  plVar16 = param_1 + 0x8d8a;
  param_1[0x8d84] = (long)(param_1 + 0x8d86);
  for (lVar18 = 0x2326; plVar16[-4] = (long)(plVar16 + -2), lVar18 != 0; lVar18 = lVar18 + -2) {
    plVar16[-2] = (long)plVar16;
    plVar16 = plVar16 + 4;
  }
  param_1[0x8d85] = (long)(param_1 + 0x8d86);
  param_1[0xd3d4] = 0;
  if (param_1 + 0xd3d6 != (long *)0x0) {
    param_1[0x8d82] = 0x232800000000;
    param_1[0x8d83] = (long)(param_1 + 0xd3d6);
  }
  memset(param_1 + 0xf6fe,0,78000);
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 0x11d18) = 0;
  param_1[0x11d16] = 0xffffffff;
  param_1[0x11d17] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11d19) = 0;
  param_1[0x11d1a] = 0;
  *(undefined4 *)(param_1 + 0x11d1b) = 0;
  param_1[0x11d1c] = 0;
  *(undefined4 *)(param_1 + 0x11d1d) = 0;
  *(undefined1 *)((long)param_1 + 0x8e8ec) = 0xff;
  *(undefined2 *)(param_1 + 0x11d1e) = uVar6;
  *(undefined1 *)((long)param_1 + 0x8e8f2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x8e8f3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x8e8f4) = uVar3;
  param_1[0x11d14] = (long)(puVar1 + 0x10);
  param_1[0x11d15] = 0xffffffff;
  param_1[0x11d23] = 0;
  *(undefined4 *)(param_1 + 0x11d24) = 0;
  param_1[0x11d21] = 0;
  param_1[0x11d22] = 0;
  *(undefined2 *)(param_1 + 0x11d22) = 0xfffe;
  param_1[0x11d1f] = 0;
  param_1[0x11d20] = 0;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x11d23) = 0xff;
  *(undefined8 *)((long)param_1 + 0x8e91c) = 0;
  *(undefined4 *)((long)param_1 + 0x8e924) = 0;
  FUN_03454a44(param_1 + 0x11d14);
  *(undefined4 *)(param_1 + 0x11d25) = 0;
  param_1[0x11d26] = 0;
  puVar8 = PTR_DAT_04bc9ca8;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 72999) = 0;
  param_1[73000] = (long)(puVar8 + 0x10);
  param_1[0x11d2c] = (long)(puVar1 + 0x10);
  plVar16 = param_1 + 0x11d2d;
  memset(plVar16,0,0x1bf30);
  puVar8 = PTR_DAT_04bb2bc0;
  lVar18 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    FUN_03463544(plVar16,0);
    *(undefined4 *)(plVar16 + 0x2b) = 0x40;
    lVar18 = lVar18 + -1;
    *(undefined1 *)((long)plVar16 + 0x19b) = 0;
    *(undefined1 *)((long)plVar16 + 0x15c) = 0;
    *(undefined4 *)(plVar16 + 0x34) = 0;
    plVar16[0x29] = (long)puVar1;
    plVar16[0x2a] = (long)plVar16 + 0x15c;
    plVar16 = plVar16 + 0x35;
  } while (lVar18 != 0);
  *(undefined4 *)(param_1 + 0x15515) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x15516) = 0;
  param_1[0x15513] = (long)(puVar1 + 0x10);
  param_1[0x15514] = -1;
  FUN_03135560(param_1 + 0x15517);
  *(undefined4 *)((long)param_1 + 0xaa9f4) = 0xffffffff;
  param_1[0x1553a] = 0;
  param_1[0x1553b] = 0;
  param_1[0x1553c] = 0;
  *(undefined2 *)(param_1 + 0x1553d) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xaa9ec) = 0xffffffffffffffff;
  puVar7 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  param_1[0x1553f] = 0;
  *(undefined1 *)(param_1 + 0x15540) = 0;
  puVar9 = PTR_DAT_04bb3350;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x1f0);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar2 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1f0,8);
  }
  local_80 = &PTR_LAB_04b16240;
  plStack_78 = param_1;
  FUN_0340c9e0(pvVar13,&local_80);
  param_1[0x15541] = (long)pvVar13;
  *(undefined4 *)(param_1 + 0x15542) = 0;
  puVar10 = PTR_DAT_04bcb4d0;
  *(undefined8 *)((long)param_1 + 0xaaa44) = 0xffffffff00000000;
  param_1[0x15543] = (long)(puVar10 + 0x10);
  *(undefined1 *)(param_1 + 0x15548) = 0;
  param_1[0x15544] = 0;
  param_1[0x15545] = 0;
  *(undefined4 *)(param_1 + 0x1554e) = 0;
  param_1[0x15546] = 0;
  param_1[0x15547] = 0;
  param_1[0x1554a] = 0;
  param_1[0x1554b] = 0;
  param_1[0x1554c] = 0;
  param_1[0x1554d] = 0;
  bVar15 = *PTR_DAT_04bb32e0;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  *(byte *)((long)param_1 + 0xaaa74) = bVar15;
  *(undefined1 *)((long)param_1 + 0xaaa75) = 1;
  FUN_033fc620(param_1 + 0x15543,0);
  *(undefined4 *)(param_1 + 0x15553) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x15554) = 0;
  param_1[0x15556] = (long)(puVar8 + 0x10);
  param_1[0x15557] = (long)param_1 + 0xaaac4;
  *(undefined4 *)(param_1 + 0x15558) = 0x40;
  *(undefined1 *)((long)param_1 + 0xaab03) = 0;
  *(undefined4 *)(param_1 + 0x15564) = 0;
  *(undefined4 *)(param_1 + 0x15565) = 0;
  *(undefined4 *)(param_1 + 0x1556a) = 0x40;
  *(undefined1 *)((long)param_1 + 0xaab93) = 0;
  *(undefined4 *)(param_1 + 0x15576) = 0;
  *(undefined4 *)(param_1 + 0x15577) = 0;
  *(undefined4 *)(param_1 + 0x15579) = 0;
  *(undefined4 *)(param_1 + 0x15555) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xaaac4) = 0;
  *(undefined4 *)(param_1 + 0x15561) = 0;
  *(undefined1 *)(param_1 + 0x15566) = 0;
  *(undefined4 *)(param_1 + 0x15567) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xaab54) = 0;
  *(undefined4 *)(param_1 + 0x15573) = 0;
  *(undefined1 *)(param_1 + 0x15578) = 0;
  param_1[0x15551] = (long)puVar1;
  param_1[0x15552] = -1;
  param_1[0x15568] = (long)(puVar8 + 0x10);
  param_1[0x15569] = (long)param_1 + 0xaab54;
  param_1[0x15562] = (long)puVar1;
  param_1[0x15563] = -1;
  param_1[0x15574] = (long)puVar1;
  param_1[0x15575] = -1;
  lVar18 = *(long *)puVar7;
  param_1[0x1554f] = 0;
  param_1[0x15550] = 0;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x1540);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar2 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar2 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1540,8);
  }
  memset(pvVar13,0,0x1540);
  FUN_02d924e0(pvVar13);
  param_1[0x1557a] = (long)pvVar13;
  *(undefined1 *)(param_1 + 0x1557b) = 0;
  if (((*PTR_DAT_04bc8578 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc8578), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc8570 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8578);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar14 = (**(code **)*param_3)(param_3,PTR_DAT_04bc8570), (uVar14 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)param_3 + 0x14);
  }
  return;
}

