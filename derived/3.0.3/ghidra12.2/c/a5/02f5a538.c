
void FUN_02f5a538(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  
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
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_LAB_04ae4ea0;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
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
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 10;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  param_1[0x59] = (long)(PTR_DAT_04bc9b70 + 0x10);
  param_1[0x61] = 0xffffffff;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined2 *)((long)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0x100000000;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  param_1[0x62] = -1;
  param_1[99] = 0x10100000000;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x324) = 0;
  if (lVar7 == 0) {
    puVar5 = malloc(0x120);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x120,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    param_1[0x47] = (long)puVar5;
    puVar5[0x11] = 0;
    puVar5[0x10] = puVar5 + 0x11;
    puVar5[0xf] = puVar5 + 0x10;
    puVar5[0xe] = puVar5 + 0xf;
    puVar5[0xd] = puVar5 + 0xe;
    puVar5[0xc] = puVar5 + 0xd;
    puVar5[0xb] = puVar5 + 0xc;
    puVar5[10] = puVar5 + 0xb;
    puVar5[9] = puVar5 + 10;
    puVar5[8] = puVar5 + 9;
    puVar5[7] = puVar5 + 8;
    puVar5[6] = puVar5 + 7;
    puVar5[5] = puVar5 + 6;
    puVar5[4] = puVar5 + 5;
    puVar5[3] = puVar5 + 4;
    puVar5[2] = puVar5 + 3;
    puVar5[1] = puVar5 + 2;
    *puVar5 = puVar5 + 1;
    param_1[0x48] = (long)puVar5;
    if (puVar5 + 0x12 != (undefined8 *)0x0) {
      param_1[0x46] = (long)(puVar5 + 0x12);
      param_1[0x45] = 0x1200000000;
    }
  }
  return;
}

