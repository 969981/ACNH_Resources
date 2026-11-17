
void FUN_02fe7d94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_04bc7b00;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = puVar8;
  puVar7 = PTR_DAT_04bc7ae0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_04aef3b0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = puVar7 + 0x10;
  puVar6 = PTR_DAT_04bc7ad0;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 8);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0xc);
  param_1[8] = puVar1;
  FUN_02ff5850(param_1 + 9,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0xc,uVar3,uVar2);
  puVar5 = PTR_DAT_04bb3170;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  uVar4 = *(undefined2 *)puVar5;
  param_1[0x10] = 0x20;
  param_1[0x11] = puVar8;
  *(undefined2 *)((long)param_1 + 0x7c) = uVar4;
  FUN_02fee194(param_1 + 0x12,1,0x20,0,puVar8);
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x1a] = puVar1;
  param_1[6] = param_1 + 8;
  param_1[7] = param_1 + 0x12;
  param_1[0x17] = puVar7 + 0x10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar3 = *(undefined4 *)(puVar6 + 8);
  uVar2 = *(undefined4 *)(puVar6 + 0xc);
  FUN_02ff5850(param_1 + 0x1b,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x1e,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x21) = 0;
  puVar1 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = puVar8;
  *(undefined2 *)((long)param_1 + 0x10c) = *(undefined2 *)puVar1;
  FUN_02fee194(param_1 + 0x24,1,0,0,puVar8);
  *(undefined4 *)(param_1 + 0x28) = 1;
  param_1[0x18] = param_1 + 0x1a;
  param_1[0x19] = param_1 + 0x24;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x20);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) goto LAB_02fe7f98;
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
  }
  if (pvVar11 != (void *)0x0) {
    param_1[0x29] = 0x400000000;
    param_1[0x2a] = pvVar11;
  }
LAB_02fe7f98:
  iVar12 = *(int *)(param_1 + 0x29);
  iVar13 = *(int *)((long)param_1 + 0x14c);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x2a] + (long)iVar12 * 8) = param_1 + 5;
    iVar13 = *(int *)((long)param_1 + 0x14c);
    iVar12 = *(int *)(param_1 + 0x29) + 1;
    *(int *)(param_1 + 0x29) = iVar12;
  }
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x2a] + (long)iVar12 * 8) = param_1 + 0x17;
    *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  }
  return;
}

