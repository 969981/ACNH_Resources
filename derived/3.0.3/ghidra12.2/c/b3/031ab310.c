
void FUN_031ab310(uint *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  uint local_68;
  uint uStack_64;
  long local_60;
  long *plStack_58;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  FUN_0390a734(param_1,1,0x1d,0x120,0xc2,1,1,1,0,1);
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  uVar3 = param_1[0xf];
  uVar4 = param_1[0x10];
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
  }
  plVar8[6] = 0;
  plVar12 = plVar8 + 1;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  plVar8[4] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar8 + 5) = 0;
  *plVar8 = (long)puVar1;
  lVar7 = *(long *)puVar5;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
  puVar2 = (undefined8 *)(lVar7 + 8);
  if (lVar11 != 0) {
    puVar2 = (undefined8 *)(lVar11 + 0xa8);
  }
  uVar9 = *puVar2;
  plVar8[6] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[2] = 0;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  *(byte *)(plVar8 + 5) = *(byte *)(plVar8 + 5) & 0xfe;
  if (uVar4 == 0) {
    local_68 = 0;
    *(undefined2 *)((long)plVar8 + 0x2a) = 8;
    local_60 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar8,uVar9,uVar4,uVar3,8);
    local_60 = plVar8[3];
    *(undefined2 *)((long)plVar8 + 0x2a) = 8;
    local_68 = 0;
    if (plVar8[4] != 0) {
      local_68 = (int)*plVar12 - *(int *)(plVar8[4] + 0x10);
    }
    if (local_60 != 0) {
      uStack_64 = *(uint *)(local_60 + 0x104);
      goto LAB_031ab49c;
    }
  }
  uStack_64 = 0;
LAB_031ab49c:
  *param_1 = local_68;
  param_1[1] = uStack_64;
  *(long *)(param_1 + 2) = local_60;
  *(long **)(param_1 + 4) = plVar8;
  if ((*(byte *)((long)param_1 + 0x4e) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < (ushort)param_1[0x26] && (ushort)param_1[0x26] - 0x59 < 0xffffffd6;
  }
  plStack_58 = plVar8;
  FUN_038fd3e0(param_1 + 0x14,&local_68,param_1 + 0xc,0,*(undefined8 *)(param_1 + 0x24),bVar10,1);
  uVar3 = *param_1;
  lVar11 = 0;
  if (*(long *)(param_1 + 2) != 0) {
    lVar11 = (*DAT_04c61fd0)();
  }
  memset((void *)(lVar11 + (ulong)uVar3),0,(ulong)param_1[0x10]);
  return;
}

