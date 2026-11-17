
void FUN_0303e0c0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  void *__src;
  ulong __n;
  
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
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04af57e0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_03135560(param_1 + 0x44);
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x6b,0,0x1bf30);
  lVar9 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x6b,0);
    *(undefined4 *)(plVar8 + 0x96) = 0x40;
    lVar9 = lVar9 + -1;
    plVar8[0x95] = (long)plVar8 + 0x4b4;
    *(undefined1 *)((long)plVar8 + 0x4f3) = 0;
    *(undefined1 *)((long)plVar8 + 0x4b4) = 0;
    plVar8[0x94] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x9f) = 0;
    puVar4 = PTR_DAT_04bc8e10;
    plVar8 = plVar8 + 0x35;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0x3853) = 0;
  *(undefined4 *)(param_1 + 0x3854) = 0;
  param_1[0x3851] = (long)(puVar4 + 0x10);
  param_1[0x3852] = -1;
  puVar4 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x148);
    lVar9 = 0;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar9 + 8);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x148,8);
    lVar9 = *(long *)puVar1;
  }
  memset(pvVar6,0,0x148);
  *(undefined4 *)((long)pvVar6 + 0x6c) = 0;
  puVar1 = PTR_DAT_04bc7e18;
  *(undefined4 *)((long)pvVar6 + 100) = 10;
  *(undefined4 *)((long)pvVar6 + 0xc0) = 8;
  *(long *)((long)pvVar6 + 200) = (long)pvVar6 + 200;
  *(long *)((long)pvVar6 + 0xd0) = (long)pvVar6 + 200;
  *(undefined2 *)((long)pvVar6 + 0x140) = 0;
  *(undefined1 *)((long)pvVar6 + 0x138) = 0;
  *(undefined **)((long)pvVar6 + 0xa0) = puVar1 + 0x10;
  *(undefined8 *)((long)pvVar6 + 0x78) = 0;
  *(undefined **)((long)pvVar6 + 0x80) = puVar1 + 0x10;
  plVar8 = (long *)((long)pvVar6 + 0xf8);
  *plVar8 = (long)pvVar6 + 0x110;
  *(undefined4 *)((long)pvVar6 + 0xf0) = 2;
  *(long **)((long)pvVar6 + 0xe0) = plVar8;
  *(long **)((long)pvVar6 + 0xe8) = plVar8;
  *(undefined8 *)((long)pvVar6 + 0x128) = 0;
  *(undefined8 *)((long)pvVar6 + 0x130) = 0;
  param_1[0x3855] = (long)pvVar6;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x1f498);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar3 = (undefined8 *)(lVar9 + 8);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x1f498,8);
  }
  memset(pvVar6,0,0x1f498);
  puVar1 = PTR_DAT_04bb32e0;
  *(undefined8 *)((long)pvVar6 + 0x10) = 0;
  *(undefined8 *)((long)pvVar6 + 0x18) = 0;
  puVar4 = PTR_DAT_04bc7e20;
  bVar7 = *puVar1;
  *(undefined8 *)((long)pvVar6 + 0x58) = 0;
  *(undefined8 *)((long)pvVar6 + 0x60) = 0;
  *(undefined8 *)((long)pvVar6 + 0x48) = 0;
  *(long *)((long)pvVar6 + 0x50) = (long)pvVar6 + 0x68;
  *(undefined1 *)((long)pvVar6 + 8) = 1;
  *(undefined **)((long)pvVar6 + 0x28) = puVar4 + 0x10;
  *(undefined4 *)((long)pvVar6 + 100) = 500;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  lVar9 = 0x1f2;
  *(byte *)((long)pvVar6 + 0x20) = bVar7;
  *(long **)((long)pvVar6 + 0x68) = (long *)((long)pvVar6 + 0x140);
  plVar8 = (long *)((long)pvVar6 + 0x140);
  do {
    lVar9 = lVar9 + -2;
    *plVar8 = (long)(plVar8 + 0x1b);
    plVar8[0x1b] = (long)(plVar8 + 0x36);
    plVar8 = plVar8 + 0x36;
  } while (lVar9 != 0);
  *(long *)((long)pvVar6 + 0x58) = (long)pvVar6 + 0x68;
  *(long *)((long)pvVar6 + 0x1a648) = (long)pvVar6 + 0x1a648;
  *(long *)((long)pvVar6 + 0x1a650) = (long)pvVar6 + 0x1a648;
  lVar9 = (long)pvVar6 + 0x1a6c8;
  *(undefined8 *)((long)pvVar6 + 0x1a570) = 0;
  *(undefined4 *)((long)pvVar6 + 0x1a658) = 0;
  *(long *)((long)pvVar6 + 0x1a660) = (long)pvVar6 + 0x1a678;
  for (lVar5 = 0x1f2; *(long *)(lVar9 + -0x50) = lVar9 + -0x28, lVar5 != 0; lVar5 = lVar5 + -2) {
    *(long *)(lVar9 + -0x28) = lVar9;
    lVar9 = lVar9 + 0x50;
  }
  *(undefined4 *)((long)pvVar6 + 0x1a670) = 500;
  *(undefined8 *)((long)pvVar6 + 0x1f470) = 0;
  *(long *)((long)pvVar6 + 0x1a668) = (long)pvVar6 + 0x1a678;
  param_1[0x3856] = (long)pvVar6;
  pvVar6 = (void *)((long)param_1 + 0x1c2d4);
  param_1[0x3858] = 0;
  param_1[0x385f] = 0;
  param_1[0x3860] = 0;
  param_1[0x385d] = 0;
  param_1[0x385e] = 0;
  param_1[0x385b] = 0;
  param_1[0x385c] = 0;
  param_1[0x3859] = 0;
  param_1[0x385a] = 0;
  puVar1 = PTR_DAT_04bb8608;
  *(undefined4 *)(param_1 + 0x385a) = 0x15;
  puVar4 = PTR_PTR_04bb8620;
  param_1[0x3857] = 0;
  param_1[0x3858] = (long)(puVar1 + 0x10);
  param_1[0x3859] = (long)pvVar6;
  (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
  __src = *(void **)(puVar4 + 8);
  if (pvVar6 != __src) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar9 = 0;
    do {
      if (*(short *)(*(long *)(puVar4 + 8) + lVar9 * 2) == 0) goto LAB_0303e4ec;
      lVar5 = *(long *)(puVar4 + 8) + lVar9 * 2;
      if (*(short *)(lVar5 + 2) == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_0303e4ec;
      }
      if (*(short *)(lVar5 + 4) == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_0303e4ec;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0303e4ec:
    uVar2 = (uint)lVar9;
    if ((int)param_1[0x385a] <= (int)(uint)lVar9) {
      uVar2 = (int)param_1[0x385a] - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(pvVar6,__src,__n);
    *(undefined2 *)((long)pvVar6 + __n) = 0;
  }
  *(undefined1 *)(param_1 + 0x3860) = 0;
  puVar1 = PTR_DAT_04bb4c98;
  *(undefined2 *)(param_1 + 0x3862) = 0xffff;
  param_1[0x3861] = 0;
  *(undefined8 *)((long)param_1 + 0x1c314) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c31c) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x1c324) = 0;
  param_1[0x3858] = (long)(puVar1 + 0x10);
  return;
}

