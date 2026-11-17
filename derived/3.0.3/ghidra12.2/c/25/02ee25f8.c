
void FUN_02ee25f8(long *param_1,undefined8 param_2,long param_3)

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
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ade6b0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0xff;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  if (lVar7 == 0) {
    puVar5 = malloc(0x2d0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_02ee276c;
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x2d0,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    param_1[0x4b] = (long)puVar5;
    puVar5[0x11] = puVar5 + 0x22;
    puVar5[0x22] = puVar5 + 0x33;
    puVar5[0x33] = puVar5 + 0x44;
    *puVar5 = puVar5 + 0x11;
    puVar5[0x44] = 0;
    param_1[0x4c] = (long)puVar5;
    if (puVar5 + 0x55 != (undefined8 *)0x0) {
      param_1[0x4a] = (long)(puVar5 + 0x55);
      param_1[0x49] = 0x500000000;
    }
  }
LAB_02ee276c:
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return;
}

