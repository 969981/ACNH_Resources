
void FUN_02d1f440(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  byte bVar11;
  long lVar12;
  
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
  if (param_3 != 0) {
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x47] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04abd7c8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x4b] = (long)puVar1;
  param_1[0x50] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = (long)puVar1;
  memset(param_1 + 0x55,0,0x1bf30);
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x55,0);
    *(undefined4 *)(plVar8 + 0x80) = 0x40;
    lVar12 = lVar12 + -1;
    plVar8[0x7f] = (long)plVar8 + 0x404;
    *(undefined1 *)((long)plVar8 + 0x443) = 0;
    *(undefined1 *)((long)plVar8 + 0x404) = 0;
    plVar8[0x7e] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x89) = 0;
    plVar8 = plVar8 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x383d) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x383e) = 0;
  *(undefined4 *)(param_1 + 0x383f) = 0;
  param_1[0x383b] = (long)(puVar1 + 0x10);
  param_1[0x383c] = -1;
  FUN_03135560(param_1 + 0x384c);
  param_1[0x3872] = 0;
  *(undefined1 *)(param_1 + 0x3874) = 1;
  param_1[0x386f] = 0;
  param_1[0x3870] = 0;
  *(undefined4 *)(param_1 + 0x3871) = 0;
  *(undefined4 *)((long)param_1 + 0x1c3a4) = 0;
  *(undefined2 *)(param_1 + 0x3875) = 0x100;
  puVar1 = PTR_DAT_04bc5170 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1c3ac) = 0;
  *(undefined1 *)(param_1 + 0x3877) = 1;
  *(undefined4 *)((long)param_1 + 0x1c3bc) = 0;
  *(undefined2 *)(param_1 + 0x3878) = 0x100;
  param_1[0x3873] = (long)puVar1;
  param_1[0x3876] = (long)puVar1;
  puVar1 = PTR_DAT_04bc4830 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1c3c4) = 0;
  param_1[0x3879] = 0;
  param_1[0x387a] = (long)puVar1;
  param_1[0x387c] = 0;
  param_1[0x387d] = 0;
  param_1[0x387e] = 0;
  param_1[0x387f] = 0;
  param_1[0x3880] = 0;
  param_1[0x3881] = 0;
  puVar1 = PTR_DAT_04bc4880 + 0x10;
  param_1[0x3882] = 0;
  param_1[0x3883] = 0;
  param_1[0x387b] = (long)puVar1;
  puVar1 = PTR_DAT_04bc4828 + 0x10;
  param_1[0x3885] = 0;
  param_1[0x3886] = 0;
  param_1[0x3887] = 0;
  param_1[0x3888] = 0;
  param_1[0x38a0] = 0;
  *(undefined4 *)(param_1 + 0x38a1) = 0;
  param_1[0x38a2] = 0;
  *(undefined4 *)(param_1 + 0x38a3) = 0;
  param_1[0x38a4] = 0;
  *(undefined4 *)(param_1 + 0x38a5) = 0;
  param_1[0x38a6] = 0;
  *(undefined4 *)(param_1 + 0x38a7) = 0;
  param_1[0x38a8] = 0;
  param_1[0x3884] = (long)puVar1;
  param_1[0x388d] = (long)puVar1;
  param_1[0x3896] = (long)puVar1;
  param_1[0x3889] = 0;
  param_1[0x388a] = 0;
  param_1[0x388b] = 0;
  param_1[0x388c] = 0;
  param_1[0x388e] = 0;
  param_1[0x388f] = 0;
  param_1[0x3890] = 0;
  param_1[0x3891] = 0;
  param_1[0x3892] = 0;
  param_1[0x3893] = 0;
  param_1[0x3894] = 0;
  param_1[0x3895] = 0;
  param_1[0x3897] = 0;
  param_1[0x3898] = 0;
  puVar1 = PTR_DAT_04bb37e0;
  uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x389f) = 0;
  *(undefined2 *)(param_1 + 0x38a9) = uVar6;
  uVar4 = puVar1[2];
  *(undefined1 *)((long)param_1 + 0x1c54a) = uVar4;
  uVar5 = puVar1[3];
  *(undefined1 *)((long)param_1 + 0x1c54b) = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 4);
  param_1[0x38ac] = 0;
  *(undefined2 *)(param_1 + 0x38aa) = uVar6;
  plVar8 = param_1 + 0x38b4;
  *(undefined1 *)((long)param_1 + 0x1c552) = uVar4;
  lVar12 = 0x3a94;
  *(undefined1 *)((long)param_1 + 0x1c553) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1c54c) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c554) = uVar3;
  param_1[0x3899] = 0;
  param_1[0x389a] = 0;
  param_1[0x389b] = 0;
  param_1[0x389c] = 0;
  param_1[0x389d] = 0;
  param_1[0x389e] = 0;
  param_1[0x38ab] = (long)(PTR_DAT_04bc5db8 + 0x10);
  param_1[0x38ad] = 0;
  param_1[0x38ae] = (long)(param_1 + 0x38b0);
  while( true ) {
    plVar8[-3] = (long)(plVar8 + -2);
    plVar8[-4] = (long)(plVar8 + -3);
    plVar8[-2] = (long)(plVar8 + -1);
    if (lVar12 == 0) break;
    plVar8[-1] = (long)plVar8;
    plVar8 = plVar8 + 4;
    lVar12 = lVar12 + -4;
  }
  param_1[0x38af] = (long)(param_1 + 0x38b0);
  param_1[0x7347] = 0;
  if (param_1 + 0x7348 != (long *)0x0) {
    param_1[0x38ad] = (long)(param_1 + 0x7348);
    *(undefined4 *)((long)param_1 + 0x1c564) = 15000;
  }
  param_1[0xade0] = 0;
  param_1[0xade1] = 0;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x56f0e) = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  lVar12 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x38ac) = 0;
  *(undefined1 *)(param_1 + 0xade3) = 0;
  *(undefined4 *)((long)param_1 + 0x56f1c) = 0;
  *(undefined2 *)((long)param_1 + 0x56f16) = 1;
  *(undefined1 *)(param_1 + 0xade4) = 0xff;
  *(undefined8 *)((long)param_1 + 0x56f24) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x1c20c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c204) = 0xffffffffffffffff;
  param_1[0x3842] = 0;
  param_1[0x3843] = 0;
  param_1[0x3844] = 0;
  param_1[0x3845] = 0;
  param_1[0x3846] = 0;
  param_1[0x3847] = 0;
  puVar2 = PTR_DAT_04bb3350;
  param_1[0x3848] = 0;
  param_1[0x3849] = 0;
  param_1[0x384a] = 0;
  param_1[0x384b] = 0;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x400);
joined_r0x02d1f87c:
    if (pvVar9 != (void *)0x0) {
      param_1[0x38a4] = (long)pvVar9;
      *(undefined4 *)(param_1 + 0x38a3) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x02d1f87c;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x400);
joined_r0x02d1f8dc:
    if (pvVar9 != (void *)0x0) {
      param_1[0x38a2] = (long)pvVar9;
      *(undefined4 *)(param_1 + 0x38a1) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x02d1f8dc;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x400);
joined_r0x02d1f93c:
    if (pvVar9 != (void *)0x0) {
      param_1[0x38a6] = (long)pvVar9;
      *(undefined4 *)(param_1 + 0x38a5) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x02d1f93c;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x400);
joined_r0x02d1f99c:
    if (pvVar9 != (void *)0x0) {
      param_1[0x38a0] = (long)pvVar9;
      *(undefined4 *)(param_1 + 0x389f) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x02d1f99c;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x1800);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_02d1fa24;
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1800,8);
  }
  if (pvVar9 != (void *)0x0) {
    memset(pvVar9,0,0x1800);
    param_1[0x38a8] = (long)pvVar9;
    *(undefined4 *)(param_1 + 0x38a7) = 0x200;
  }
LAB_02d1fa24:
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    puVar10 = malloc(0x238);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x238,8);
  }
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar10 + 0x6b) = 0;
    *puVar10 = 5;
    *(undefined4 *)(puVar10 + 5) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x2c) = 0;
    puVar1 = puVar1 + 0x10;
    puVar10[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar10[0xf] = puVar1;
    puVar10[0x1d] = puVar1;
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    puVar10[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar10[0x39] = puVar1;
    *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar10 + 0xdb) = 0;
    *(undefined4 *)(puVar10 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x14b) = 0;
    *(undefined1 *)((long)puVar10 + 0x10c) = 0;
    *(undefined4 *)(puVar10 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar10 + 0x17c) = 0;
    *(undefined4 *)(puVar10 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar10 + 0x22b) = 0;
    *(undefined1 *)((long)puVar10 + 0x1ec) = 0;
    puVar10[0x11] = puVar2;
    puVar10[0x12] = (undefined1 *)((long)puVar10 + 0x9c);
    puVar10[3] = puVar2;
    puVar10[4] = (undefined1 *)((long)puVar10 + 0x2c);
    *(undefined1 *)(puVar10 + 0xe) = 1;
    *(undefined1 *)(puVar10 + 0x1c) = 1;
    *(undefined1 *)(puVar10 + 0x2a) = 1;
    *(undefined1 *)(puVar10 + 0x38) = 1;
    *(undefined1 *)(puVar10 + 0x46) = 1;
    puVar10[0x1f] = puVar2;
    puVar10[0x20] = (long)puVar10 + 0x10c;
    puVar10[0x2d] = puVar2;
    puVar10[0x2e] = (long)puVar10 + 0x17c;
    puVar10[0x3b] = puVar2;
    puVar10[0x3c] = (long)puVar10 + 0x1ec;
    *(undefined4 *)(param_1 + 0x3871) = 5;
    param_1[0x3872] = (long)(puVar10 + 1);
  }
  return;
}

