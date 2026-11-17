
void FUN_02fe9ebc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_04bc7af0;
  param_1[4] = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = puVar8;
  puVar1 = PTR_DAT_04bc7ae0;
  *param_1 = &PTR_LAB_04aeef78;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[5] = puVar1;
  puVar7 = PTR_DAT_04bc7ad0;
  uVar4 = *(undefined4 *)PTR_DAT_04bc7ad0;
  puVar2 = PTR_DAT_04bc7c18 + 0x10;
  param_1[8] = puVar2;
  uVar3 = *(undefined4 *)(puVar7 + 4);
  FUN_02ff5850(param_1 + 9,uVar4,uVar3);
  FUN_02ff5850(param_1 + 0xc,uVar4,uVar3);
  puVar6 = PTR_DAT_04bb3170;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  uVar5 = *(undefined2 *)puVar6;
  param_1[0x10] = 0x20;
  param_1[0x11] = puVar8;
  *(undefined2 *)((long)param_1 + 0x7c) = uVar5;
  FUN_02fee194(param_1 + 0x12,0,0x20,0,puVar8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = puVar2;
  param_1[0x17] = puVar1;
  param_1[6] = param_1 + 8;
  param_1[7] = param_1 + 0x12;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar4 = *(undefined4 *)puVar7;
  uVar3 = *(undefined4 *)(puVar7 + 4);
  FUN_02ff5850(param_1 + 0x1b,uVar4,uVar3);
  FUN_02ff5850(param_1 + 0x1e,uVar4,uVar3);
  *(undefined2 *)(param_1 + 0x21) = 0;
  puVar6 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0x10c) = *(undefined2 *)puVar6;
  param_1[0x23] = PTR_DAT_04bc7af0;
  FUN_02fee194(param_1 + 0x24,0,0,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x18] = param_1 + 0x1a;
  param_1[0x19] = param_1 + 0x24;
  param_1[0x29] = puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar4 = *(undefined4 *)(puVar7 + 0x18);
  param_1[0x2c] = puVar2;
  uVar3 = *(undefined4 *)(puVar7 + 0x1c);
  FUN_02ff5850(param_1 + 0x2d,uVar4,uVar3);
  FUN_02ff5850(param_1 + 0x30,uVar4,uVar3);
  uVar5 = *(undefined2 *)puVar6;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19a) = 0;
  param_1[0x34] = 0x2a00000025;
  *(undefined2 *)((long)param_1 + 0x19c) = uVar5;
  puVar6 = PTR_DAT_04bc7af0;
  param_1[0x35] = PTR_DAT_04bc7af0;
  FUN_02fee194(param_1 + 0x36,3,0x25,0x2a);
  *(undefined4 *)(param_1 + 0x3a) = 3;
  param_1[0x2a] = param_1 + 0x2c;
  param_1[0x2b] = param_1 + 0x36;
  param_1[0x3b] = puVar1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  uVar4 = *(undefined4 *)(puVar7 + 0x18);
  param_1[0x3e] = puVar2;
  uVar3 = *(undefined4 *)(puVar7 + 0x1c);
  FUN_02ff5850(param_1 + 0x3f,uVar4,uVar3);
  FUN_02ff5850(param_1 + 0x42,uVar4,uVar3);
  *(undefined2 *)(param_1 + 0x45) = 0;
  puVar1 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x22a) = 0;
  param_1[0x46] = 0x2a00000005;
  param_1[0x47] = puVar6;
  *(undefined2 *)((long)param_1 + 0x22c) = *(undefined2 *)puVar1;
  FUN_02fee194(param_1 + 0x48,3,5,0x2a,puVar6);
  *(undefined4 *)(param_1 + 0x4c) = 3;
  param_1[0x3c] = param_1 + 0x3e;
  param_1[0x3d] = param_1 + 0x48;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x20);
joined_r0x02fea1e8:
    if (pvVar11 != (void *)0x0) {
      param_1[0x4e] = pvVar11;
      param_1[0x4d] = 0x400000000;
    }
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
      goto joined_r0x02fea1e8;
    }
  }
  iVar12 = *(int *)(param_1 + 0x4d);
  iVar13 = *(int *)((long)param_1 + 0x26c);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x4e] + (long)iVar12 * 8) = param_1 + 5;
    iVar13 = *(int *)((long)param_1 + 0x26c);
    iVar12 = *(int *)(param_1 + 0x4d) + 1;
    *(int *)(param_1 + 0x4d) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fea210;
LAB_02fea280:
    *(undefined8 **)(param_1[0x4e] + (long)iVar12 * 8) = param_1 + 0x17;
    iVar13 = *(int *)((long)param_1 + 0x26c);
    iVar12 = *(int *)(param_1 + 0x4d) + 1;
    *(int *)(param_1 + 0x4d) = iVar12;
    if (iVar12 < iVar13) {
LAB_02fea2a4:
      *(undefined8 **)(param_1[0x4e] + (long)iVar12 * 8) = param_1 + 0x3b;
      iVar12 = *(int *)(param_1 + 0x4d) + 1;
      *(int *)(param_1 + 0x4d) = iVar12;
      if (*(int *)((long)param_1 + 0x26c) <= iVar12) {
        return;
      }
      goto LAB_02fea220;
    }
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fea280;
LAB_02fea210:
    if (iVar12 < iVar13) goto LAB_02fea2a4;
  }
  if (iVar13 <= iVar12) {
    return;
  }
LAB_02fea220:
  *(undefined8 **)(param_1[0x4e] + (long)iVar12 * 8) = param_1 + 0x29;
  *(int *)(param_1 + 0x4d) = *(int *)(param_1 + 0x4d) + 1;
  return;
}

