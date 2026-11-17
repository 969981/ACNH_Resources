
void FUN_02c411bc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != (undefined8 *)0x0) {
    bVar9 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  param_1[0x45] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ab07d8;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x5c] = -1;
  param_1[0x5b] = -1;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined2 *)((long)param_1 + 0x2ec) = 0;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x10);
joined_r0x02c41378:
    if (pvVar6 != (void *)0x0) {
      param_1[0x46] = (long)pvVar6;
      param_1[0x45] = 0x200000000;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
      goto joined_r0x02c41378;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar7 = malloc(0x460);
joined_r0x02c41388:
    if (puVar7 != (undefined8 *)0x0) {
      param_1[0x4b] = (long)puVar7;
      puVar7[0x13] = puVar7 + 0x26;
      puVar7[0x26] = puVar7 + 0x39;
      puVar7[0x39] = puVar7 + 0x4c;
      *puVar7 = puVar7 + 0x13;
      puVar7[0x4c] = puVar7 + 0x5f;
      puVar7[0x72] = 0;
      puVar7[0x5f] = puVar7 + 0x72;
      param_1[0x4c] = (long)puVar7;
      if (puVar7 + 0x85 != (undefined8 *)0x0) {
        param_1[0x4a] = (long)(puVar7 + 0x85);
        param_1[0x49] = 0x700000000;
      }
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x460,8);
      goto joined_r0x02c41388;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar7 = malloc(0x230);
joined_r0x02c4142c:
    if (puVar7 != (undefined8 *)0x0) {
      param_1[0x4f] = (long)puVar7;
      puVar7[0x1b] = puVar7 + 0x24;
      puVar7[0x36] = 0;
      puVar7[0x12] = puVar7 + 0x1b;
      puVar7[9] = puVar7 + 0x12;
      puVar7[0x24] = puVar7 + 0x2d;
      puVar7[0x2d] = puVar7 + 0x36;
      *puVar7 = puVar7 + 9;
      param_1[0x50] = (long)puVar7;
      if (puVar7 + 0x3f != (undefined8 *)0x0) {
        param_1[0x4e] = (long)(puVar7 + 0x3f);
        param_1[0x4d] = 0x700000000;
      }
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x230,8);
      goto joined_r0x02c4142c;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar7 = malloc(0x70);
joined_r0x02c414d0:
    if (puVar7 != (undefined8 *)0x0) {
      param_1[0x53] = (long)puVar7;
      puVar7[6] = 0;
      puVar7[5] = puVar7 + 6;
      puVar7[4] = puVar7 + 5;
      puVar7[3] = puVar7 + 4;
      puVar7[2] = puVar7 + 3;
      puVar7[1] = puVar7 + 2;
      *puVar7 = puVar7 + 1;
      param_1[0x54] = (long)puVar7;
      if (puVar7 + 7 != (undefined8 *)0x0) {
        param_1[0x52] = (long)(puVar7 + 7);
        param_1[0x51] = 0x700000000;
      }
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x70,8);
      goto joined_r0x02c414d0;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x38);
joined_r0x02c415c4:
    if (pvVar6 != (void *)0x0) {
      param_1[0x56] = (long)pvVar6;
      param_1[0x55] = 0x700000000;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
      goto joined_r0x02c415c4;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar7 = malloc(0x40);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_02c41610;
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    param_1[0x59] = (long)puVar7;
    puVar7[3] = 0;
    puVar7[2] = puVar7 + 3;
    puVar7[1] = puVar7 + 2;
    *puVar7 = puVar7 + 1;
    param_1[0x5a] = (long)puVar7;
    if (puVar7 + 4 != (undefined8 *)0x0) {
      param_1[0x58] = (long)(puVar7 + 4);
      param_1[0x57] = 0x400000000;
    }
  }
LAB_02c41610:
  if (((*PTR_DAT_04bc5940 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5940), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc5938 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5940);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar8 = (**(code **)*param_3)(param_3,PTR_DAT_04bc5938), (uVar8 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x244) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined1 *)((long)param_1 + 0x2e9) = *(undefined1 *)(param_3 + 3);
    *(undefined1 *)((long)param_1 + 0x2ea) = *(undefined1 *)((long)param_3 + 0x19);
  }
  return;
}

