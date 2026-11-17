
void FUN_0301d070(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  byte bVar12;
  undefined2 *puVar13;
  long lVar14;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar12 = *(byte *)(param_3 + 0xe);
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar12;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04af3500;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  puVar1 = PTR_DAT_04bb3170;
  uVar4 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined4 *)((long)param_1 + 0x23c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x47) = uVar4;
  puVar5 = PTR_DAT_04bc7bb0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = (long)(puVar5 + 0x10);
  param_1[0x49] = (long)(PTR_DAT_04bc7bb8 + 0x10);
  puVar5 = PTR_DAT_04bc7ba8;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)*(int *)PTR_DAT_04bc7ba8 * 8);
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)*(int *)PTR_DAT_04bc7ba8 * 8 + 4);
  param_1[0x4c] = (long)(PTR_DAT_04bc7c18 + 0x10);
  FUN_02ff5850(param_1 + 0x4d,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x50,uVar3,uVar2);
  uVar4 = *(undefined2 *)puVar1;
  uVar2 = *(undefined4 *)puVar5;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((long)param_1 + 0x29a) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined2 *)((long)param_1 + 0x29c) = uVar4;
  FUN_02fee194(param_1 + 0x56,uVar2,0,0,0);
  param_1[0x4b] = (long)(param_1 + 0x56);
  param_1[0x4a] = (long)(param_1 + 0x4c);
  param_1[0x5a] = 0;
  param_1[0x5b] = (long)(param_1 + 0x48);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xc;
  FUN_02ff7294((long)param_1 + 0x2f4,&DAT_041830c8);
  FUN_03135560(param_1 + 0x9f);
  *(undefined1 *)(param_1 + 0xc2) = 0;
  param_1[0xce] = (long)&LAB_0301d950;
  param_1[0xd2] = (long)&LAB_0301da50;
  param_1[0xd0] = (long)&PTR_LAB_04af38a0;
  param_1[0xd6] = (long)&LAB_0301dbd4;
  param_1[0xd4] = (long)&PTR_LAB_04af38f0;
  param_1[0xca] = (long)FUN_0301d858;
  param_1[0xde] = 0x3f800000;
  param_1[0xe0] = 0x3f800000;
  param_1[0xe2] = 0x3f800000;
  param_1[0xe4] = 0x3f800000;
  param_1[0xe6] = 0x3f800000;
  param_1[0xe8] = 0x3f800000;
  param_1[0xea] = 0x3f800000;
  param_1[0xec] = 0x3f800000;
  param_1[0xee] = 0x3f800000;
  param_1[0xf0] = 0x3f800000;
  param_1[0xf2] = 0x3f800000;
  param_1[0xf4] = 0x3f800000;
  param_1[0xf6] = 0x3f800000;
  param_1[0xf8] = 0x3f800000;
  param_1[0xfa] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  param_1[200] = (long)&PTR_LAB_04af3850;
  param_1[0xcc] = (long)&PTR_LAB_04af3850;
  param_1[0x100] = (long)&LAB_0301dc04;
  param_1[0xfe] = (long)&PTR_LAB_04af3850;
  param_1[0x102] = (long)&PTR_LAB_04af3850;
  param_1[0xc3] = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc9] = (long)param_1;
  param_1[0xcb] = 0;
  param_1[0xcd] = (long)param_1;
  param_1[0xcf] = 0;
  param_1[0xd1] = (long)param_1;
  param_1[0xd3] = 0;
  param_1[0xd5] = (long)param_1;
  param_1[0xd7] = 0;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined4 *)((long)param_1 + 0x6ec) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf5] = 0;
  param_1[0xf7] = 0;
  param_1[0xf9] = 0;
  param_1[0xfb] = 0;
  param_1[0xfd] = 0;
  param_1[0xff] = (long)param_1;
  param_1[0x101] = 0;
  param_1[0x103] = (long)param_1;
  param_1[0x104] = (long)&LAB_0301dc20;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x109] = (long)&PTR_LAB_04af3940;
  param_1[0x10d] = 0;
  param_1[0x10e] = (long)(PTR_DAT_04bc7b78 + 0x10);
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x111] = (long)(PTR_DAT_04bc7b80 + 0x10);
  puVar1 = PTR_DAT_04bc7b90 + 0x10;
  param_1[0x112] = 0;
  param_1[0x113] = (long)puVar1;
  param_1[0x114] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  puVar5 = PTR_DAT_04bb3350;
  *(undefined1 *)(param_1 + 0x117) = 0;
  if (lVar14 == 0) {
    pvVar8 = malloc(0x18);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x18,8);
  }
  FUN_02fe4060();
  param_1[0x5d] = (long)pvVar8;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar9 = malloc(0xc);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0xc,8);
  }
  *(undefined4 *)(puVar9 + 1) = 0xffffffff;
  *puVar9 = 0xffffffff00000000;
  lVar14 = *(long *)puVar1;
  param_1[0x107] = (long)puVar9;
  if (lVar14 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x20,8);
  }
  *puVar9 = param_1 + 0x9f;
  puVar9[1] = (long)param_1 + 0x2f4;
  lVar14 = *(long *)puVar1;
  puVar9[2] = (undefined8 *)((long)param_1 + 0x6e4);
  *(undefined1 *)(puVar9 + 3) = 0;
  param_1[0x108] = (long)puVar9;
  if (lVar14 == 0) {
    puVar10 = malloc(4);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar10 = (undefined4 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,4,8);
  }
  *puVar10 = 0;
  lVar14 = *(long *)puVar1;
  param_1[0xc5] = (long)puVar10;
  if (lVar14 == 0) {
    plVar11 = malloc(0xd8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0xd8,8);
  }
  plVar11[2] = 0xffffffff;
  plVar11[3] = 0xffffffff;
  *(undefined2 *)(plVar11 + 4) = 0;
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  *(undefined4 *)(plVar11 + 7) = 0;
  plVar11[8] = 0;
  *(undefined4 *)(plVar11 + 9) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x4c) = 0;
  plVar11[0xc] = 0;
  *(undefined8 *)((long)plVar11 + 0x65) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0xe] = 0;
  *(undefined4 *)(plVar11 + 0x1a) = 0xffffffff;
  *plVar11 = (long)(puVar6 + 0x10);
  plVar11[1] = 0xffffffff;
  lVar14 = *(long *)puVar1;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0x17] = 0;
  plVar11[0x18] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0xf] = 0;
  plVar11[0x10] = 0;
  param_1[0xc6] = (long)plVar11;
  if (lVar14 == 0) {
    pvVar8 = malloc(0xa90);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0xa90,8);
  }
  FUN_02ff2584();
  param_1[199] = (long)pvVar8;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar9 = malloc(0x30);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    param_1[0xdb] = (long)puVar9;
    puVar9[2] = 0;
    puVar9[3] = 0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar11 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    puVar9 = (undefined8 *)0x0;
    if (plVar11 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    *(undefined4 *)(puVar9 + 5) = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    param_1[0xdb] = (long)puVar9;
    if (lVar14 != 0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar9 = (undefined8 *)(lVar14 + 8);
      if (lVar7 != 0) {
        puVar9 = (undefined8 *)(lVar7 + 0xa8);
      }
      pvVar8 = (void *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x3398,8);
      goto LAB_0301d724;
    }
  }
  pvVar8 = malloc(0x3398);
LAB_0301d724:
  FUN_02fe4ee0();
  param_1[0x5a] = (long)pvVar8;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar9 = malloc(0x38);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar11 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x38,8);
    }
  }
  *puVar9 = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined1 *)((long)puVar9 + 0x17) = 0;
  puVar13 = (undefined2 *)((long)puVar9 + 0x14);
  *puVar13 = 0xfffe;
  FUN_0277d4ac(puVar13);
  *(undefined8 *)((long)puVar9 + 0x1c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)puVar9 + 0x24) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)puVar9 + 0x2c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined4 *)(puVar9 + 2) = 0;
  *puVar9 = puVar13;
  puVar9[1] = 4;
  lVar14 = *(long *)puVar1;
  param_1[0xfd] = (long)puVar9;
  if (lVar14 == 0) {
    puVar9 = malloc(0xc);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar9 = (undefined8 *)(lVar14 + 8);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0xc,8);
  }
  *(undefined1 *)(puVar9 + 1) = 0;
  *puVar9 = 0;
  param_1[0xd8] = (long)puVar9;
  return;
}

