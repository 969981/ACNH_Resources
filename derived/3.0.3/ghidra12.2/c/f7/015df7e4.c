
void FUN_015df7e4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a0 [64];
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_5;
  puVar5 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar13 = malloc(0x200);
  }
  else {
    plVar12 = param_3;
    if (param_3 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_015df87c;
    }
    pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x200,8);
  }
  if (pvVar13 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x2a] = pvVar13;
    param_1[0x2b] = 0x20;
  }
LAB_015df87c:
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  iVar4 = uVar2 * uVar1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((long)param_1 + 0x144) = iVar4;
  iVar3 = (uVar1 >> 1) * (uVar2 >> 1) * 2;
  iVar4 = iVar3 + iVar4;
  *(int *)(param_1 + 0x29) = iVar3;
  plVar12 = param_3;
  if (param_3 == (long *)0x0) {
    lVar11 = *(long *)puVar5;
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar11 + 8);
    if (lVar15 != 0) {
      plVar12 = (long *)(lVar15 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
  }
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  puVar5 = PTR_DAT_04bd0fa8;
  *(undefined2 *)((long)param_1 + 0x3a) = 0;
  if (iVar4 != 0) {
    FUN_038f8590(*(undefined8 *)puVar5,param_1 + 2,plVar12,(long)iVar4,0x2000,8);
  }
  *(undefined2 *)((long)param_1 + 0x3a) = 8;
  puVar6 = PTR_DAT_04bbd7b0;
  (**(code **)PTR_DAT_04bbd7b0)(auStack_a0);
  puVar8 = PTR_DAT_04bbd7c0;
  puVar7 = PTR_DAT_04bbd7b8;
  (**(code **)PTR_DAT_04bbd7b8)(auStack_a0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  puVar9 = PTR_DAT_04bbd7c8;
  (**(code **)PTR_DAT_04bbd7c8)(auStack_a0,param_1[5],0,(long)*(int *)((long)param_1 + 0x144));
  puVar10 = PTR_DAT_04bbd7d0;
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x10,auStack_a0);
  (**(code **)puVar9)(auStack_a0,param_1[5],(long)*(int *)((long)param_1 + 0x144),
                      (long)*(int *)(param_1 + 0x29));
  (**(code **)puVar10)(param_1 + 0x1c,auStack_a0);
  lVar15 = (long)*(int *)(param_1 + 0x29) + (long)*(int *)((long)param_1 + 0x144);
  if (param_3 == (long *)0x0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar14 + 8);
    if (lVar11 != 0) {
      param_3 = (long *)(lVar11 + 0xa8);
    }
    param_3 = (long *)*param_3;
  }
  param_1[0xf] = 0;
  *(undefined2 *)((long)param_1 + 0x72) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  if ((int)lVar15 != 0) {
    FUN_038f8590(*(undefined8 *)puVar5,param_1 + 9,param_3,lVar15,0x2000,8);
  }
  *(undefined2 *)((long)param_1 + 0x72) = 8;
  (**(code **)puVar6)(auStack_a0);
  (**(code **)puVar7)(auStack_a0,*(undefined8 *)(*(long *)puVar8 + 0x30));
  (**(code **)puVar9)(auStack_a0,param_1[0xc],0,(long)*(int *)((long)param_1 + 0x144));
  (**(code **)puVar10)(param_1 + 0x16,auStack_a0);
  (**(code **)puVar9)(auStack_a0,param_1[0xc],(long)*(int *)((long)param_1 + 0x144),
                      (long)*(int *)(param_1 + 0x29));
  (**(code **)puVar10)(param_1 + 0x22,auStack_a0);
  return;
}

