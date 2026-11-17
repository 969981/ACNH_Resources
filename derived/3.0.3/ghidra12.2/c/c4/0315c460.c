
void FUN_0315c460(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **local_80;
  long *plStack_78;
  
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
    bVar10 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b05418;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x49] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = (long)puVar1;
  memset(param_1 + 0x4e,0,0x1bf30);
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x4e,0);
    *(undefined4 *)(plVar6 + 0x79) = 0x40;
    lVar12 = lVar12 + -1;
    plVar6[0x78] = (long)plVar6 + 0x3cc;
    *(undefined1 *)((long)plVar6 + 0x40b) = 0;
    *(undefined1 *)((long)plVar6 + 0x3cc) = 0;
    plVar6[0x77] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x82) = 0;
    plVar6 = plVar6 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x3836) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  param_1[0x3834] = (long)(puVar1 + 0x10);
  param_1[0x3835] = -1;
  FUN_03135560(param_1 + 0x3838);
  *(undefined2 *)(param_1 + 0x385f) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1c2fc) = 0xffffffffffffffff;
  param_1[0x385d] = 0;
  param_1[0x385e] = 0;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined4 *)((long)param_1 + 0x1c304) = 0xffffffff;
  puVar2 = PTR_DAT_04bb3350;
  lVar12 = *(long *)puVar1;
  param_1[0x385b] = 0;
  param_1[0x385c] = 0;
  if (lVar12 == 0) {
    puVar7 = malloc(0x480);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    puVar7 = (undefined8 *)0x0;
    if (plVar6 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x480,8);
    }
  }
  puVar7[0x76] = 0;
  puVar7[0x1c] = puVar7 + 0x22;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[0x16] = puVar7 + 0x1c;
  puVar7[0x10] = puVar7 + 0x16;
  puVar7[10] = puVar7 + 0x10;
  puVar7[0x22] = puVar7 + 0x28;
  puVar11 = puVar7 + 4;
  *puVar11 = puVar7 + 10;
  puVar7[0x28] = puVar7 + 0x2e;
  puVar7[0x2e] = puVar7 + 0x34;
  puVar7[0x34] = puVar7 + 0x3a;
  puVar7[0x3a] = puVar7 + 0x40;
  puVar7[0x40] = puVar7 + 0x46;
  puVar7[0x46] = puVar7 + 0x4c;
  puVar7[0x4c] = puVar7 + 0x52;
  puVar7[0x52] = puVar7 + 0x58;
  puVar7[0x58] = puVar7 + 0x5e;
  puVar7[0x5e] = puVar7 + 100;
  puVar7[100] = puVar7 + 0x6a;
  puVar7[0x6a] = puVar7 + 0x70;
  puVar7[0x70] = puVar7 + 0x76;
  puVar7[2] = puVar11;
  puVar7[3] = puVar11;
  if (puVar7 + 0x7c != (undefined8 *)0x0) {
    *puVar7 = 0x1400000000;
    puVar7[1] = puVar7 + 0x7c;
  }
  param_1[0x3861] = (long)puVar7;
  *(undefined4 *)(param_1 + 0x3862) = 0;
  param_1[0x3863] = 0;
  puVar1 = PTR_DAT_04bcb4d0 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1c34c) = 0xffffffff00000000;
  param_1[0x3864] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x3869) = 0;
  param_1[0x3865] = 0;
  param_1[0x3866] = 0;
  *(undefined4 *)(param_1 + 0x386f) = 0;
  param_1[0x3867] = 0;
  param_1[0x3868] = 0;
  param_1[0x386b] = 0;
  param_1[0x386c] = 0;
  param_1[0x386d] = 0;
  param_1[0x386e] = 0;
  bVar10 = *PTR_DAT_04bb32e0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)((long)param_1 + 0x1c37c) = bVar10;
  *(undefined1 *)((long)param_1 + 0x1c37d) = 1;
  FUN_033fc620(param_1 + 0x3864,0);
  puVar1 = PTR_DAT_04bbba78;
  param_1[0x3876] = 0;
  param_1[0x3874] = 0;
  param_1[0x3875] = 0;
  param_1[0x3873] = (long)(puVar1 + 0x10);
  param_1[0x3871] = 0;
  param_1[0x3872] = 0;
  param_1[0x3870] = 0;
  puVar1 = PTR_DAT_04bc9b68;
  param_1[0x3879] = (long)PTR_FUN_04bc9b60;
  param_1[0x387a] = 0;
  param_1[0x3877] = (long)(puVar1 + 0x10);
  param_1[0x3878] = (long)(param_1 + 0x3873);
  puVar1 = PTR_DAT_04bdf1d8;
  param_1[0x387c] = 0;
  param_1[0x387d] = 0;
  param_1[0x387b] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x387e] = 0;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar8 = malloc(0x1f0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar7 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x1f0,8);
  }
  local_80 = &PTR_LAB_04b05630;
  plStack_78 = param_1;
  FUN_0340c9e0(pvVar8,&local_80);
  param_1[0x387f] = (long)pvVar8;
  lVar12 = 0;
  param_1[0x3883] = (long)(param_1 + 0x3885);
  param_1[0x3881] = 0;
  param_1[0x3882] = 0;
  do {
    lVar5 = (long)param_1 + lVar12 + 0x1c440;
    *(long *)(lVar5 + -8) = lVar5;
    *(long *)(lVar5 + -0x18) = lVar5 + -0x10;
    *(long *)(lVar5 + -0x10) = lVar5 + -8;
    *(long *)((long)param_1 + lVar12 + 0x1c440) = lVar5 + 8;
    lVar12 = lVar12 + 0x28;
    *(long *)(lVar5 + 8) = lVar5 + 0x10;
  } while (lVar12 != 0x7f8);
  param_1[0x3984] = 0;
  param_1[0x3884] = (long)(param_1 + 0x3885);
  if (param_1 + 0x3985 != (long *)0x0) {
    param_1[0x3881] = 0x10000000000;
    param_1[0x3882] = (long)(param_1 + 0x3985);
  }
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3a89) = 0;
  *(undefined4 *)(param_1 + 0x3a8a) = 0;
  *(undefined4 *)(param_1 + 0x3a8e) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1d4b3) = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x3a87] = (long)puVar1;
  param_1[0x3a88] = -1;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x3a9a) = 0;
  *(undefined4 *)(param_1 + 0x3a9b) = 0;
  *(undefined4 *)(param_1 + 0x3aa0) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1d543) = 0;
  *(undefined4 *)(param_1 + 0x3aac) = 0;
  *(undefined4 *)(param_1 + 0x3aad) = 0;
  *(undefined4 *)(param_1 + 0x3aaf) = 0;
  *(undefined4 *)(param_1 + 0x3a8b) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1d474) = 0;
  *(undefined4 *)(param_1 + 14999) = 0;
  *(undefined1 *)(param_1 + 0x3a9c) = 0;
  *(undefined4 *)(param_1 + 0x3a9d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1d504) = 0;
  *(undefined4 *)(param_1 + 0x3aa9) = 0;
  *(undefined1 *)(param_1 + 0x3aae) = 0;
  param_1[15000] = (long)puVar1;
  param_1[0x3a99] = -1;
  param_1[0x3a8c] = (long)(puVar3 + 0x10);
  param_1[0x3a8d] = (long)param_1 + 0x1d474;
  param_1[0x3a9e] = (long)(puVar3 + 0x10);
  param_1[0x3a9f] = (long)param_1 + 0x1d504;
  param_1[0x3aaa] = (long)puVar1;
  param_1[0x3aab] = -1;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[0x3a85] = 0;
  param_1[0x3a86] = 0;
  if (lVar12 == 0) {
    pvVar8 = malloc(0x1540);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar7 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x1540,8);
  }
  memset(pvVar8,0,0x1540);
  FUN_02d924e0(pvVar8);
  param_1[0x3ab0] = (long)pvVar8;
  *(undefined1 *)(param_1 + 0x3ab1) = 0;
  memset((void *)((long)param_1 + 0x1d58c),0,2000);
  if (((*PTR_DAT_04bc8520 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8520), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc8518 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8520);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*param_3)(param_3,PTR_DAT_04bc8518), (uVar9 & 1) != 0)) {
    param_1[0x3870] = param_3[3];
    param_1[0x3871] = param_3[4];
    param_1[0x3872] = param_3[5];
    param_1[0x385d] = param_3[6];
  }
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar7 = malloc(0x5b8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x5b8,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar7 + 0x6b) = 0;
    *puVar7 = 0xd;
    *(undefined1 *)((long)puVar7 + 0x2c) = 0;
    *(undefined4 *)(puVar7 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar7[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar7[0xf] = puVar1;
    puVar7[0x1d] = puVar1;
    *(undefined1 *)((long)puVar7 + 0x9c) = 0;
    puVar7[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar7[0x39] = puVar1;
    puVar7[0x47] = puVar1;
    puVar7[0x55] = puVar1;
    puVar7[99] = puVar1;
    puVar7[0x71] = puVar1;
    puVar7[0x7f] = puVar1;
    puVar7[0x8d] = puVar1;
    puVar7[0x9b] = puVar1;
    puVar7[0xa9] = puVar1;
    *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar7 + 0xdb) = 0;
    *(undefined4 *)(puVar7 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x14b) = 0;
    *(undefined1 *)((long)puVar7 + 0x10c) = 0;
    *(undefined4 *)(puVar7 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar7 + 0x17c) = 0;
    *(undefined4 *)(puVar7 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x22b) = 0;
    *(undefined1 *)((long)puVar7 + 0x1ec) = 0;
    *(undefined4 *)(puVar7 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x29b) = 0;
    *(undefined1 *)((long)puVar7 + 0x25c) = 0;
    puVar7[0x49] = puVar2;
    *(undefined4 *)(puVar7 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x30b) = 0;
    *(undefined1 *)((long)puVar7 + 0x2cc) = 0;
    puVar7[0x57] = puVar2;
    *(undefined4 *)(puVar7 + 100) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x37b) = 0;
    *(undefined1 *)((long)puVar7 + 0x33c) = 0;
    puVar7[0x65] = puVar2;
    *(undefined4 *)(puVar7 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar7 + 0x3ac) = 0;
    puVar7[0x73] = puVar2;
    *(undefined4 *)(puVar7 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x45b) = 0;
    *(undefined1 *)((long)puVar7 + 0x41c) = 0;
    puVar7[0x81] = puVar2;
    *(undefined4 *)(puVar7 + 0x8e) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar7 + 0x48c) = 0;
    puVar7[0x8f] = puVar2;
    *(undefined4 *)(puVar7 + 0x9c) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x9f) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x53b) = 0;
    *(undefined1 *)((long)puVar7 + 0x4fc) = 0;
    puVar7[0x9d] = puVar2;
    *(undefined4 *)(puVar7 + 0xaa) = 0xffffffff;
    puVar7[0xac] = (long)puVar7 + 0x56c;
    *(undefined4 *)(puVar7 + 0xad) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x5ab) = 0;
    *(undefined1 *)((long)puVar7 + 0x56c) = 0;
    puVar7[0xab] = puVar2;
    puVar7[0x11] = puVar2;
    puVar7[0x12] = (undefined1 *)((long)puVar7 + 0x9c);
    puVar7[0x1f] = puVar2;
    puVar7[0x20] = (long)puVar7 + 0x10c;
    puVar7[0x2d] = puVar2;
    puVar7[0x2e] = (long)puVar7 + 0x17c;
    puVar7[0x3b] = puVar2;
    puVar7[0x3c] = (long)puVar7 + 0x1ec;
    puVar7[0x4a] = (long)puVar7 + 0x25c;
    puVar7[0x58] = (long)puVar7 + 0x2cc;
    puVar7[0x66] = (long)puVar7 + 0x33c;
    puVar7[0x74] = (long)puVar7 + 0x3ac;
    puVar7[0x82] = (long)puVar7 + 0x41c;
    puVar7[0x90] = (long)puVar7 + 0x48c;
    puVar7[0x9e] = (long)puVar7 + 0x4fc;
    puVar7[3] = puVar2;
    puVar7[4] = (undefined1 *)((long)puVar7 + 0x2c);
    *(undefined1 *)(puVar7 + 0xe) = 1;
    *(undefined1 *)(puVar7 + 0x1c) = 1;
    *(undefined1 *)(puVar7 + 0x2a) = 1;
    *(undefined1 *)(puVar7 + 0x38) = 1;
    *(undefined1 *)(puVar7 + 0x46) = 1;
    *(undefined1 *)(puVar7 + 0x54) = 1;
    *(undefined1 *)(puVar7 + 0x62) = 1;
    *(undefined1 *)(puVar7 + 0x70) = 1;
    *(undefined1 *)(puVar7 + 0x7e) = 1;
    *(undefined1 *)(puVar7 + 0x8c) = 1;
    *(undefined1 *)(puVar7 + 0x9a) = 1;
    *(undefined1 *)(puVar7 + 0xa8) = 1;
    *(undefined1 *)(puVar7 + 0xb6) = 1;
    *(undefined4 *)(param_1 + 0x3862) = 0xd;
    param_1[0x3863] = (long)(puVar7 + 1);
  }
  return;
}

