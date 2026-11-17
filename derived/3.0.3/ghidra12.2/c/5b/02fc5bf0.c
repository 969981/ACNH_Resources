
void FUN_02fc5bf0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  
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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *(undefined2 *)((long)param_1 + 0x231) = 1;
  *param_1 = (long)&PTR_LAB_04aed6c0;
  *(undefined8 *)((long)param_1 + 0x234) = 0xffffffff0000000c;
  *(undefined8 *)((long)param_1 + 0x23c) = 3;
  *(undefined2 *)((long)param_1 + 0x25c) = 0;
  param_1[0x4a] = (long)param_1 + 0x25c;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x100;
  *(undefined2 *)((long)param_1 + 0x45a) = 0;
  puVar1 = PTR_DAT_04bb8a50 + 0x10;
  *(undefined2 *)((long)param_1 + 0x474) = 0;
  param_1[0x8d] = (long)param_1 + 0x474;
  *(undefined2 *)((long)param_1 + 0x68c) = 0;
  param_1[0xd0] = (long)param_1 + 0x68c;
  *(undefined4 *)(param_1 + 0x8e) = 0x100;
  *(undefined2 *)((long)param_1 + 0x8a4) = 0;
  param_1[0x113] = (long)param_1 + 0x8a4;
  param_1[0x49] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0xabc) = 0;
  param_1[0x156] = (long)param_1 + 0xabc;
  *(undefined2 *)((long)param_1 + 0x672) = 0;
  param_1[0x8c] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xd1) = 0x100;
  *(undefined2 *)((long)param_1 + 0x88a) = 0;
  param_1[0xcf] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x114) = 0x100;
  *(undefined2 *)((long)param_1 + 0xaa2) = 0;
  param_1[0x112] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x157) = 0x100;
  *(undefined2 *)((long)param_1 + 0xcba) = 0;
  param_1[0x155] = (long)puVar1;
  param_1[0x199] = (long)param_1 + 0xcd4;
  *(undefined4 *)(param_1 + 0x19a) = 0x100;
  *(undefined2 *)((long)param_1 + 0xed2) = 0;
  *(undefined2 *)((long)param_1 + 0xcd4) = 0;
  param_1[0x198] = (long)puVar1;
  uVar3 = *(undefined4 *)PTR_DAT_04bb4e20;
  *(undefined4 *)(param_1 + 0x1db) = 0;
  param_1[0x1dc] = (long)&PTR_LAB_04aed958;
  *(undefined4 *)((long)param_1 + 0xedc) = uVar3;
  param_1[0x1dd] = (long)param_1;
  param_1[0x1de] = (long)(param_1 + 0x1dc);
  puVar1 = PTR_DAT_04bc9c58 + 0x10;
  *(undefined2 *)(param_1 + 0x1e0) = 0xff;
  param_1[0x1e6] = (long)&PTR_LAB_04aed8d8;
  param_1[0x1e7] = (long)&PTR_LAB_04aed8f8;
  *(undefined1 *)((long)param_1 + 0xf02) = 0;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  param_1[0x1e2] = 0;
  *(undefined2 *)(param_1 + 0x1e5) = 0;
  param_1[0x1df] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0xf2a) = 0;
  param_1[0x1e9] = (long)(param_1 + 0x1e6);
  param_1[0x1e8] = 0;
  param_1[0x1ea] = (long)&PTR_LAB_04aed918;
  param_1[0x1eb] = (long)&PTR_LAB_04aed938;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = (long)(param_1 + 0x1ea);
  param_1[0x1ee] = 0;
  *(undefined4 *)(param_1 + 0x1ef) = 0;
  *(undefined1 *)((long)param_1 + 0xf7c) = 1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x1f0] = 0xffffffff;
  if (lVar8 == 0) {
    plVar6 = malloc(0xc0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xc0,8);
    }
  }
  plVar6[0xb] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = 0xffffffff;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  *(undefined1 *)(plVar6 + 9) = 0xff;
  plVar6[8] = 0;
  *(undefined1 *)((long)plVar6 + 0x53) = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(undefined2 *)(plVar6 + 10) = 0xfffe;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined1 *)((long)plVar6 + 0x21) = 0;
  plVar6[2] = 0xffffffff;
  plVar6[3] = 0xffffffff;
  FUN_0277d4ac();
  *(undefined1 *)((long)plVar6 + 0x7b) = 0;
  *(undefined4 *)(plVar6 + 0xd) = 0x10;
  plVar6[0xc] = (long)plVar6 + 0x6c;
  if ((undefined *)((long)plVar6 + 0x6c) != &DAT_0408e67d) {
    *(undefined1 *)(plVar6 + 0xe) = 0;
    *(undefined4 *)((long)plVar6 + 0x6c) = 0x32313131;
  }
  puVar1 = PTR_DAT_04bb2ab0;
  puVar2 = (undefined8 *)((long)plVar6 + 0x94);
  *(undefined1 *)((long)plVar6 + 0xb3) = 0;
  plVar6[0x11] = (long)puVar2;
  *(undefined4 *)(plVar6 + 0x12) = 0x20;
  plVar6[0xb] = (long)(puVar1 + 0x10);
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(plVar6 + 0x17) = 0;
  plVar6[0x10] = (long)(puVar1 + 0x10);
  param_1[0x1ee] = (long)plVar6;
  param_1[0x1e8] = (long)plVar6;
  return;
}

