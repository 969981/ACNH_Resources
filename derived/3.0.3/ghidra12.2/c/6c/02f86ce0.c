
void FUN_02f86ce0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  void *pvVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_60;
  char *pcStack_58;
  
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
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ae74f0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x234) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x47) = 0;
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
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x4b] = -1;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  param_1[0x4a] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x262) = 0;
  param_1[0x51] = -1;
  param_1[0x50] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x292) = 0;
  param_1[0x57] = -1;
  param_1[0x56] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x2c2) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
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
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x5e] = -1;
  param_1[0x5d] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x2fa) = 0;
  param_1[100] = -1;
  param_1[99] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x32a) = 0;
  param_1[0x6a] = -1;
  param_1[0x69] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x35a) = 0;
  param_1[0x70] = -1;
  param_1[0x6f] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x38a) = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = -1;
  param_1[0x74] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  *(undefined2 *)((long)param_1 + 0x3b2) = 0;
  *(undefined2 *)(param_1 + 0x7b) = 0;
  puVar4 = PTR_DAT_04bb3350;
  lVar7 = *(long *)PTR_DAT_04bb3350;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  puVar3 = (undefined8 *)(lVar8 + 8);
  if (lVar7 != 0) {
    puVar3 = (undefined8 *)(lVar7 + 0xa8);
  }
  plVar9 = (long *)*puVar3;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "decodedTextureHeap";
  local_60 = puVar2;
  lVar7 = FUN_038c6d48(&LAB_00119000,&local_60,plVar9,8,1,0);
  param_1[0x5c] = lVar7;
  param_1[0x5b] = 0;
  pcStack_58 = "decodedTextureHeap";
  local_60 = puVar2;
  lVar7 = FUN_038c6d48(&LAB_00119000,&local_60,plVar9,8,1,0);
  param_1[0x62] = lVar7;
  param_1[0x61] = 0;
  pcStack_58 = "decodedTextureHeap";
  local_60 = puVar2;
  lVar7 = FUN_038c6d48(&LAB_00119000,&local_60,plVar9,8,1,0);
  param_1[0x68] = lVar7;
  param_1[0x67] = 0;
  pcStack_58 = "decodedTextureHeap";
  local_60 = puVar2;
  lVar7 = FUN_038c6d48(&LAB_00119000,&local_60,plVar9,8,1,0);
  lVar8 = *(long *)puVar1;
  param_1[0x6e] = lVar7;
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (lVar8 == 0) {
    pvVar5 = malloc(0x23000);
  }
  else {
    if (plVar9 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar3 = (undefined8 *)(lVar8 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar9 = (long *)*puVar3;
      if (plVar9 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_02f87050;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x23000,8);
  }
LAB_02f87050:
  param_1[0x79] = (long)pvVar5;
  return;
}

