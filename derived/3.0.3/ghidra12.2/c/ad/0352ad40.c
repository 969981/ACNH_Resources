
void FUN_0352ad40(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
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
  param_1[0x43] = 0;
  *param_1 = (long)&PTR_LAB_04b367c8;
  param_1[0x3e] = -1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x23c) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb3238;
  *(undefined8 *)((long)param_1 + 0x244) = 0xffffffff;
  uVar1 = *(undefined4 *)puVar2;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  param_1[0x42] = 0;
  if (lVar12 == 0) {
    pvVar6 = malloc(0x50);
joined_r0x0352ae8c:
    if (pvVar6 != (void *)0x0) {
      uVar8 = 10;
      param_1[0x4a] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0x49) = 10;
      goto LAB_0352ae9c;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x50,8);
      goto joined_r0x0352ae8c;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x49);
  if ((int)uVar8 < 1) {
    return;
  }
LAB_0352ae9c:
  uVar11 = (ulong)uVar8;
  param_1 = param_1 + 0x4a;
  uVar9 = uVar11 & 3;
  if (uVar11 - 1 < 3) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 8;
      uVar10 = uVar10 + 4;
      *(undefined8 *)(*param_1 + lVar12) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x18) = 0;
    } while ((uVar11 & 0xfffffffc) != uVar10);
  }
  if ((uVar8 & 3) != 0) {
    lVar12 = uVar10 << 3;
    do {
      uVar9 = uVar9 - 1;
      *(undefined8 *)(*param_1 + lVar12) = 0;
      lVar12 = lVar12 + 8;
    } while (uVar9 != 0);
  }
  return;
}

