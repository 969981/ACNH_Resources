
void FUN_02ece77c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  void *pvVar10;
  byte bVar11;
  long lVar12;
  undefined **local_40;
  long *plStack_38;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar7 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar8 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar8 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  puVar7 = PTR_DAT_04bb37e0;
  *param_1 = (long)&PTR_LAB_04add410;
  uVar6 = *(undefined2 *)puVar7;
  param_1[0x3e] = -1;
  param_1[0x45] = (long)(param_1 + 0x44);
  uVar4 = puVar7[2];
  param_1[0x44] = (long)(param_1 + 0x44);
  uVar5 = puVar7[3];
  uVar2 = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined2 *)(param_1 + 0x48) = uVar6;
  *(undefined1 *)((long)param_1 + 0x242) = uVar4;
  *(undefined1 *)((long)param_1 + 0x243) = uVar5;
  *(undefined4 *)((long)param_1 + 0x244) = uVar2;
  uVar3 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  *(undefined2 *)(param_1 + 0x4b) = uVar6;
  *(undefined1 *)((long)param_1 + 0x25a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x25b) = uVar5;
  *(undefined4 *)((long)param_1 + 0x25c) = uVar2;
  *(undefined4 *)(param_1 + 0x49) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)((long)param_1 + 0x264) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x1f0);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar12 + 8);
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar10 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x1f0,8);
  }
  local_40 = &PTR_LAB_04add658;
  plStack_38 = param_1;
  FUN_0340c9e0(pvVar10,&local_40);
  param_1[0x4d] = (long)pvVar10;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  return;
}

