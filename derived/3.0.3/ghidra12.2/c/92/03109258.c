
void FUN_03109258(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *param_1 = (long)&PTR_FUN_04b00868;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  param_1[0x3e] = -1;
  param_1[0x46] = -1;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = -1;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x45] = (long)puVar1;
  param_1[0x49] = (long)puVar1;
  uVar2 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined4 *)((long)param_1 + 0x284) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5d) = 0x41400000;
  *(undefined1 *)((long)param_1 + 0x2ee) = 1;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x65] = 0;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  *(undefined2 *)(param_1 + 0x53) = uVar2;
  *(undefined2 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2fc) = 0x3f800000;
  param_1[0x62] = -0x100000000;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)((long)param_1 + 0x32c) = 1;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined1 *)((long)param_1 + 0x344) = 1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 *)((long)param_1 + 0x35c) = 1;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  *(undefined1 *)((long)param_1 + 0x374) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)((long)param_1 + 0x38c) = 1;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined1 *)((long)param_1 + 0x3a4) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined1 *)((long)param_1 + 0x3bc) = 1;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined1 *)((long)param_1 + 0x3d4) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)((long)param_1 + 0x3ec) = 1;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)((long)param_1 + 0x2ec) = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x324) = 0x3f0000003f000000;
  param_1[0x66] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x33c) = 0x3f0000003f000000;
  param_1[0x69] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x354) = 0x3f0000003f000000;
  param_1[0x6c] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x36c) = 0x3f0000003f000000;
  param_1[0x6f] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 900) = 0x3f0000003f000000;
  param_1[0x72] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x39c) = 0x3f0000003f000000;
  param_1[0x75] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0x3f0000003f000000;
  param_1[0x78] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0x3f0000003f000000;
  param_1[0x7b] = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0x3f0000003f000000;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  param_1[0x83] = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
    param_1[0x83] = *(long *)(param_3 + 0x20);
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar5 = malloc(0x28);
    lVar9 = 0;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x28,8);
    lVar9 = *(long *)puVar1;
  }
  *(undefined1 *)((long)puVar5 + 0x24) = 0;
  *puVar5 = 0;
  puVar5[1] = 0x100000000;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[2] = 0x3a83126f3e8f5c29;
  puVar5[3] = 0x3e4ccccd42480000;
  param_1[0x4d] = (long)puVar5;
  if (lVar9 == 0) {
    puVar5 = malloc(0x270);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar5 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x270,8);
  }
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  FUN_02fed4e4();
  puVar5[0x4d] = uVar8;
  *puVar5 = &PTR_LAB_04b00a80;
  lVar9 = *(long *)puVar1;
  param_1[0x4e] = (long)puVar5;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x560);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar5 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x560,8);
  }
  FUN_02fe2314();
  param_1[0x5e] = (long)pvVar6;
  return;
}

