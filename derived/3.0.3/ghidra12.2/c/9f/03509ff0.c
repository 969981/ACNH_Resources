
void FUN_03509ff0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b33cc8;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x4a] = (long)puVar1;
  param_1[0x4f] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  param_1[0x52] = 0;
  param_1[0x53] = (long)puVar1;
  memset(param_1 + 0x54,0,0x1bf30);
  lVar13 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x54,0);
    *(undefined4 *)(plVar8 + 0x7f) = 0x40;
    lVar13 = lVar13 + -1;
    plVar8[0x7e] = (long)plVar8 + 0x3fc;
    *(undefined1 *)((long)plVar8 + 0x43b) = 0;
    *(undefined1 *)((long)plVar8 + 0x3fc) = 0;
    plVar8[0x7d] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x88) = 0;
    plVar8 = plVar8 + 0x35;
  } while (lVar13 != 0);
  *(undefined4 *)(param_1 + 0x383c) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x383d) = 0;
  param_1[0x3841] = 0xfffe;
  *(undefined4 *)(param_1 + 0x383e) = 0;
  param_1[0x383a] = (long)(puVar1 + 0x10);
  param_1[0x383b] = -1;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x3842) = 0;
  param_1[0x3845] = 0xfffe;
  FUN_0277d4ac();
  param_1[0x3849] = 0xfffe;
  *(undefined1 *)(param_1 + 0x3846) = 0;
  FUN_0277d4ac(param_1 + 0x3849);
  *(undefined1 *)(param_1 + 0x384a) = 0;
  *(undefined8 *)((long)param_1 + 0x1c254) = 0xffffffffffffffff;
  FUN_03135560(param_1 + 0x384c);
  *(undefined1 *)(param_1 + 0x3872) = 1;
  *(undefined4 *)((long)param_1 + 0x1c394) = 0;
  param_1[0x386f] = 0;
  param_1[0x3870] = 0;
  puVar1 = PTR_DAT_04bc5170;
  *(undefined2 *)(param_1 + 0x3873) = 0x101;
  *(undefined8 *)((long)param_1 + 0x1c39c) = 0xffffffff;
  puVar4 = PTR_DAT_04bc4830;
  param_1[0x3877] = 0;
  param_1[0x3878] = 0;
  param_1[0x3871] = (long)(puVar1 + 0x10);
  param_1[0x3879] = 0;
  param_1[0x387a] = 0;
  param_1[0x387b] = 0;
  param_1[0x387c] = 0;
  puVar1 = PTR_DAT_04bc4880 + 0x10;
  param_1[0x3875] = (long)(puVar4 + 0x10);
  param_1[0x3876] = (long)puVar1;
  puVar1 = PTR_DAT_04bc4828;
  param_1[0x387d] = 0;
  param_1[0x387e] = 0;
  param_1[0x3886] = 0;
  param_1[0x3887] = 0;
  param_1[0x389b] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x3884] = 0;
  param_1[0x3885] = 0;
  param_1[0x3882] = 0;
  param_1[0x3883] = 0;
  *(undefined4 *)(param_1 + 0x389c) = 0;
  param_1[0x389d] = 0;
  *(undefined4 *)(param_1 + 0x389e) = 0;
  param_1[0x389f] = 0;
  *(undefined4 *)(param_1 + 0x38a0) = 0;
  param_1[0x38a1] = 0;
  *(undefined4 *)(param_1 + 0x38a2) = 0;
  param_1[0x38a3] = 0;
  *(undefined4 *)(param_1 + 0x38a4) = 0;
  *(undefined4 *)(param_1 + 0x389a) = 0;
  param_1[0x387f] = (long)puVar1;
  param_1[0x3888] = (long)puVar1;
  param_1[0x3891] = (long)puVar1;
  param_1[0x3880] = 0;
  param_1[0x3881] = 0;
  param_1[0x3889] = 0;
  param_1[0x388a] = 0;
  param_1[0x388b] = 0;
  param_1[0x388c] = 0;
  param_1[0x388d] = 0;
  param_1[0x388e] = 0;
  param_1[0x388f] = 0;
  param_1[0x3890] = 0;
  param_1[0x3898] = 0;
  param_1[0x3899] = 0;
  param_1[0x3896] = 0;
  param_1[0x3897] = 0;
  param_1[0x3894] = 0;
  param_1[0x3895] = 0;
  param_1[0x3892] = 0;
  param_1[0x3893] = 0;
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  param_1[0x38a5] = 0;
  *(undefined4 *)(param_1 + 0x38a6) = 0;
  plVar8 = param_1 + 0x38a7;
  *plVar8 = (long)puVar1;
  memset(param_1 + 0x38a8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1cc94) = uVar5;
  *(uint *)(param_1 + 0x3993) = uVar3;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1cc9c) = uVar5;
  *(uint *)(param_1 + 0x3994) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)(*plVar8 + 0x18))(plVar8);
  memset(pvVar6,0,0x754);
  puVar1 = PTR_DAT_04bc5db8;
  param_1[0x3996] = 0;
  param_1[0x3995] = (long)(puVar1 + 0x10);
  plVar8 = param_1 + 0x399e;
  lVar13 = 0x3a94;
  param_1[0x3997] = 0;
  param_1[0x3998] = (long)(param_1 + 0x399a);
  while( true ) {
    plVar8[-3] = (long)(plVar8 + -2);
    plVar8[-4] = (long)(plVar8 + -3);
    plVar8[-2] = (long)(plVar8 + -1);
    if (lVar13 == 0) break;
    plVar8[-1] = (long)plVar8;
    plVar8 = plVar8 + 4;
    lVar13 = lVar13 + -4;
  }
  param_1[0x3999] = (long)(param_1 + 0x399a);
  param_1[0x7431] = 0;
  if (param_1 + 0x7432 != (long *)0x0) {
    param_1[0x3997] = (long)(param_1 + 0x7432);
    *(undefined4 *)((long)param_1 + 0x1ccb4) = 15000;
  }
  *(undefined4 *)(param_1 + 0x3996) = 0;
  *(undefined4 *)(param_1 + 0xaeca) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaecd) = 0;
  param_1[0xaecb] = 0;
  param_1[0xaecc] = 0xfffeffffffff;
  FUN_0277d4ac((long)param_1 + 0x57664);
  *(undefined4 *)((long)param_1 + 0x5766c) = 0;
  *(undefined2 *)(param_1 + 0xaece) = 0;
  *(undefined4 *)((long)param_1 + 0x1c204) = 0;
  *(undefined4 *)((long)param_1 + 0x1c224) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1f4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c214) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c21c) = 0xffffffffffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x1c234) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c23c) = 0xffffffffffffffff;
  puVar4 = PTR_DAT_04bb3350;
  *(undefined4 *)((long)param_1 + 0x1c244) = 0xffffffff;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x14);
    if (pvVar6 == (void *)0x0) goto LAB_0350a4d4;
LAB_0350a4b8:
    uVar5 = 5;
    param_1[0x38a5] = (long)pvVar6;
    *(undefined4 *)(param_1 + 0x38a4) = 5;
LAB_0350a4e0:
    uVar12 = (ulong)uVar5;
    uVar10 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        lVar13 = uVar11 * 4;
        uVar11 = uVar11 + 4;
        *(undefined4 *)(param_1[0x38a5] + lVar13) = 0;
        *(undefined4 *)(param_1[0x38a5] + lVar13 + 4) = 0;
        *(undefined4 *)(param_1[0x38a5] + lVar13 + 8) = 0;
        *(undefined4 *)(param_1[0x38a5] + lVar13 + 0xc) = 0;
      } while ((uVar12 & 0xfffffffc) != uVar11);
    }
    if ((uVar5 & 3) != 0) {
      lVar13 = uVar11 << 2;
      do {
        uVar10 = uVar10 - 1;
        *(undefined4 *)(param_1[0x38a5] + lVar13) = 0;
        lVar13 = lVar13 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if ((plVar8 != (long *)0x0) &&
       (pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x14,8), pvVar6 != (void *)0x0))
    goto LAB_0350a4b8;
LAB_0350a4d4:
    uVar5 = *(uint *)(param_1 + 0x38a4);
    if (0 < (int)uVar5) goto LAB_0350a4e0;
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x7000);
joined_r0x0350a5bc:
    if (pvVar6 != (void *)0x0) {
      lVar13 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar6 + lVar13);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0xfffe;
        FUN_0277d4ac();
        *(undefined8 *)((long)puVar2 + 0x2c) = 0xfffe;
        *(undefined1 *)(puVar2 + 3) = 0;
        *(undefined8 *)((long)puVar2 + 0x1c) = 0;
        *(undefined8 *)((long)puVar2 + 0x24) = 0;
        FUN_0277d4ac((undefined8 *)((long)puVar2 + 0x2c));
        lVar13 = lVar13 + 0x38;
        *(undefined1 *)((long)puVar2 + 0x34) = 0;
      } while (lVar13 != 0x7000);
      param_1[0x38a3] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0x38a2) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x7000,8);
      goto joined_r0x0350a5bc;
    }
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x400);
joined_r0x0350a664:
    if (pvVar6 != (void *)0x0) {
      param_1[0x389b] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0x389a) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x0350a664;
    }
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x400);
joined_r0x0350a6c4:
    if (pvVar6 != (void *)0x0) {
      param_1[0x389d] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0x389c) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x0350a6c4;
    }
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x400);
joined_r0x0350a724:
    if (pvVar6 != (void *)0x0) {
      param_1[0x389f] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0x389e) = 0x200;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
      goto joined_r0x0350a724;
    }
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x400);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_0350a79c;
    pvVar6 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x400,8);
  }
  if (pvVar6 != (void *)0x0) {
    param_1[0x38a1] = (long)pvVar6;
    *(undefined4 *)(param_1 + 0x38a0) = 0x200;
  }
LAB_0350a79c:
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x3874) = *(undefined4 *)(param_3 + 0x14);
  }
  return;
}

