
void FUN_02f95640(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  byte bVar7;
  long lVar8;
  
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
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  puVar1 = PTR_DAT_04bc9ca8;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ae8178;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = (long)(puVar1 + 0x10);
  FUN_03135560(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  param_1[0x73] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x74,0,0x1bf30);
  lVar8 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x74,0);
    *(undefined4 *)(plVar4 + 0x9f) = 0x40;
    lVar8 = lVar8 + -1;
    plVar4[0x9e] = (long)plVar4 + 0x4fc;
    *(undefined1 *)((long)plVar4 + 0x53b) = 0;
    *(undefined1 *)((long)plVar4 + 0x4fc) = 0;
    plVar4[0x9d] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0xa8) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x385c) = 0;
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x385d) = 0;
  puVar1 = PTR_DAT_04bc82e0;
  *(undefined4 *)(param_1 + 0x3861) = 0;
  param_1[0x385f] = (long)(param_1 + 0x385f);
  param_1[0x3860] = (long)(param_1 + 0x385f);
  param_1[0x3863] = 0;
  param_1[0x385a] = (long)(puVar2 + 0x10);
  param_1[0x385b] = -1;
  *(undefined4 *)(param_1 + 0x3866) = 0;
  *(undefined4 *)(param_1 + 0x3867) = 0;
  param_1[0x385e] = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c30c) = 0x240;
  param_1[0x3864] = (long)(puVar2 + 0x10);
  param_1[0x3865] = -1;
  FUN_0263e440(param_1 + 0x3868);
  param_1[0x1146a] = 0;
  param_1[0x1146b] = 0;
  plVar4 = param_1 + 0x114a2;
  param_1[0x1146c] = (long)(param_1 + 0x1146e);
  for (lVar8 = 0x7fe; plVar4[-0x34] = (long)(plVar4 + -0x1a), lVar8 != 0; lVar8 = lVar8 + -2) {
    plVar4[-0x1a] = (long)plVar4;
    plVar4 = plVar4 + 0x34;
  }
  param_1[0x1146d] = (long)(param_1 + 0x1146e);
  param_1[0x1e454] = 0;
  if (param_1 + 0x1e46e != (long *)0x0) {
    param_1[0x1146a] = 0x80000000000;
    param_1[0x1146b] = (long)(param_1 + 0x1e46e);
  }
  *(undefined4 *)(param_1 + 0x1ec6e) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xf6374) = 0;
  *(undefined4 *)(param_1 + 0x1ec6f) = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar5 = malloc(0x800);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_02f958f8;
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x800,8);
  }
  if (pvVar5 != (void *)0x0) {
    param_1[0x4c] = (long)pvVar5;
    *(undefined4 *)(param_1 + 0x4b) = 0x800;
  }
LAB_02f958f8:
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar6 = malloc(0x778);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x778,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar6 + 0x6b) = 0;
    *puVar6 = 0x11;
    *(undefined1 *)((long)puVar6 + 0x2c) = 0;
    *(undefined4 *)(puVar6 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar6[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar6[0xf] = puVar1;
    puVar6[0x1d] = puVar1;
    *(undefined1 *)((long)puVar6 + 0x9c) = 0;
    puVar6[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar6[0x39] = puVar1;
    puVar6[0x47] = puVar1;
    puVar6[0x55] = puVar1;
    puVar6[99] = puVar1;
    puVar6[0x71] = puVar1;
    puVar6[0x7f] = puVar1;
    puVar6[0x8d] = puVar1;
    puVar6[0x9b] = puVar1;
    puVar6[0xa9] = puVar1;
    puVar6[0xb7] = puVar1;
    puVar6[0xc5] = puVar1;
    puVar6[0xd3] = puVar1;
    puVar6[0xe1] = puVar1;
    *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar6 + 0xdb) = 0;
    *(undefined4 *)(puVar6 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x14b) = 0;
    *(undefined1 *)((long)puVar6 + 0x10c) = 0;
    *(undefined4 *)(puVar6 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar6 + 0x17c) = 0;
    *(undefined4 *)(puVar6 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x22b) = 0;
    *(undefined1 *)((long)puVar6 + 0x1ec) = 0;
    *(undefined4 *)(puVar6 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x29b) = 0;
    *(undefined1 *)((long)puVar6 + 0x25c) = 0;
    puVar6[0x49] = puVar2;
    *(undefined4 *)(puVar6 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x30b) = 0;
    *(undefined1 *)((long)puVar6 + 0x2cc) = 0;
    puVar6[0x57] = puVar2;
    *(undefined4 *)(puVar6 + 100) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x37b) = 0;
    *(undefined1 *)((long)puVar6 + 0x33c) = 0;
    puVar6[0x65] = puVar2;
    *(undefined4 *)(puVar6 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar6 + 0x3ac) = 0;
    puVar6[0x73] = puVar2;
    *(undefined4 *)(puVar6 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x45b) = 0;
    *(undefined1 *)((long)puVar6 + 0x41c) = 0;
    puVar6[0x81] = puVar2;
    *(undefined4 *)(puVar6 + 0x8e) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar6 + 0x48c) = 0;
    puVar6[0x8f] = puVar2;
    *(undefined4 *)(puVar6 + 0x9c) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x9f) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x53b) = 0;
    *(undefined1 *)((long)puVar6 + 0x4fc) = 0;
    puVar6[0x9d] = puVar2;
    *(undefined4 *)(puVar6 + 0xaa) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xad) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x5ab) = 0;
    *(undefined1 *)((long)puVar6 + 0x56c) = 0;
    puVar6[0xab] = puVar2;
    *(undefined4 *)(puVar6 + 0xb8) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xbb) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x61b) = 0;
    *(undefined1 *)((long)puVar6 + 0x5dc) = 0;
    puVar6[0xb9] = puVar2;
    *(undefined4 *)(puVar6 + 0xc6) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xc9) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x68b) = 0;
    *(undefined1 *)((long)puVar6 + 0x64c) = 0;
    puVar6[199] = puVar2;
    *(undefined4 *)(puVar6 + 0xd4) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xd7) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x6fb) = 0;
    *(undefined1 *)((long)puVar6 + 0x6bc) = 0;
    puVar6[0xd5] = puVar2;
    *(undefined4 *)(puVar6 + 0xe2) = 0xffffffff;
    puVar6[0xe4] = (long)puVar6 + 0x72c;
    *(undefined4 *)(puVar6 + 0xe5) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x76b) = 0;
    *(undefined1 *)((long)puVar6 + 0x72c) = 0;
    puVar6[0xe3] = puVar2;
    puVar6[0x11] = puVar2;
    puVar6[0x12] = (undefined1 *)((long)puVar6 + 0x9c);
    puVar6[0x1f] = puVar2;
    puVar6[0x20] = (long)puVar6 + 0x10c;
    puVar6[0x2d] = puVar2;
    puVar6[0x2e] = (long)puVar6 + 0x17c;
    puVar6[0x3b] = puVar2;
    puVar6[0x3c] = (long)puVar6 + 0x1ec;
    puVar6[0x4a] = (long)puVar6 + 0x25c;
    puVar6[0x58] = (long)puVar6 + 0x2cc;
    puVar6[0x66] = (long)puVar6 + 0x33c;
    puVar6[0x74] = (long)puVar6 + 0x3ac;
    puVar6[0x82] = (long)puVar6 + 0x41c;
    puVar6[0x90] = (long)puVar6 + 0x48c;
    puVar6[0x9e] = (long)puVar6 + 0x4fc;
    puVar6[0xac] = (long)puVar6 + 0x56c;
    puVar6[0xba] = (long)puVar6 + 0x5dc;
    puVar6[200] = (long)puVar6 + 0x64c;
    puVar6[0xd6] = (long)puVar6 + 0x6bc;
    puVar6[3] = puVar2;
    puVar6[4] = (undefined1 *)((long)puVar6 + 0x2c);
    *(undefined1 *)(puVar6 + 0xe) = 1;
    *(undefined1 *)(puVar6 + 0x1c) = 1;
    *(undefined1 *)(puVar6 + 0x2a) = 1;
    *(undefined1 *)(puVar6 + 0x38) = 1;
    *(undefined1 *)(puVar6 + 0x46) = 1;
    *(undefined1 *)(puVar6 + 0x54) = 1;
    *(undefined1 *)(puVar6 + 0x62) = 1;
    *(undefined1 *)(puVar6 + 0x70) = 1;
    *(undefined1 *)(puVar6 + 0x7e) = 1;
    *(undefined1 *)(puVar6 + 0x8c) = 1;
    *(undefined1 *)(puVar6 + 0x9a) = 1;
    *(undefined1 *)(puVar6 + 0xa8) = 1;
    *(undefined1 *)(puVar6 + 0xb6) = 1;
    *(undefined1 *)(puVar6 + 0xc4) = 1;
    *(undefined1 *)(puVar6 + 0xd2) = 1;
    *(undefined1 *)(puVar6 + 0xe0) = 1;
    *(undefined1 *)(puVar6 + 0xee) = 1;
    *(undefined4 *)(param_1 + 0x70) = 0x11;
    param_1[0x71] = (long)(puVar6 + 1);
  }
  return;
}

