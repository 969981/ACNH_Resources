
void FUN_03103600(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar1 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar1 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x264) = 0x3f0000003f000000;
  param_1[0x4e] = 0x600000003;
  *param_1 = (long)&PTR_LAB_04b00130;
  param_1[0x42] = (long)&PTR_LAB_04b00360;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined2 *)((long)param_1 + 0x282) = 0xffff;
  param_1[0x3e] = -1;
  param_1[0x53] = 0x3f80000000000000;
  param_1[0x55] = 0x3f80000000000000;
  param_1[0x57] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x6f] = (long)"agl::TextureData";
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x10000;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x38c) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x3f800000;
  param_1[0x52] = 0x3f800000;
  param_1[0x54] = 0x3f800000;
  param_1[0x56] = 0x3f800000;
  puVar11 = *(undefined8 **)(param_3 + 0x18);
  if (((*PTR_DAT_04bc57f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc57f0), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc57e8 = PTR_DAT_04bc4d08 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc57f0);
  }
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc57e8);
    if ((uVar5 & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
    }
  }
  param_1[0x51] = (long)puVar11;
  puVar2 = PTR_DAT_04bb2698;
  plVar9 = *(long **)(param_3 + 0x20);
  if (plVar9 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      plVar9 = malloc(0x1bf58);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1bf58,8);
      }
    }
    *plVar9 = (long)(PTR_DAT_04bc9be0 + 0x10);
    memset(plVar9 + 1,0,0x1bf30);
    lVar10 = 0x10e;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    lVar6 = 0;
    do {
      FUN_03463544((long)plVar9 + lVar6 + 8,0);
      lVar10 = lVar10 + -1;
      *(undefined4 *)((long)plVar9 + lVar6 + 0x160) = 0x40;
      *(undefined1 *)((long)plVar9 + lVar6 + 0x1a3) = 0;
      *(undefined1 *)((long)plVar9 + lVar6 + 0x164) = 0;
      *(undefined4 *)((long)plVar9 + lVar6 + 0x1a8) = 0;
      *(undefined **)((long)plVar9 + lVar6 + 0x150) = puVar1;
      *(long *)((long)plVar9 + lVar6 + 0x158) = (long)plVar9 + lVar6 + 0x164;
      puVar3 = PTR_DAT_04bc8e10;
      lVar6 = lVar6 + 0x1a8;
    } while (lVar10 != 0);
    *(undefined4 *)(plVar9 + 0x37e9) = 0;
    *(undefined4 *)(plVar9 + 0x37ea) = 0;
    plVar9[0x37e7] = (long)(puVar3 + 0x10);
    plVar9[0x37e8] = -1;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  param_1[0x5b] = (long)plVar9;
  lVar10 = *(long *)puVar2;
  *(undefined1 *)(param_1 + 0x5c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0x3f0000003f000000;
  if (lVar10 == 0) {
    puVar11 = malloc(0x2998);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar10 + 8);
    if (lVar6 != 0) {
      puVar11 = (undefined8 *)(lVar6 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x2998,8);
  }
  puVar11[0x11] = 0;
  *(undefined4 *)(puVar11 + 0x12) = 0;
  memset(puVar11 + 0x13,0,0x2900);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  param_1[0x4f] = (long)puVar11;
  return;
}

