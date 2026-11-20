
void FUN_03d88be8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined *local_b8;
  char *pcStack_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulong local_58;
  ulong local_50;
  undefined1 local_48;
  undefined1 local_47;
  
  FUN_03d5ae9c(*(undefined8 *)(param_1 + 0x420));
  (**(code **)(**(long **)(param_1 + 0x440) + 0x10))();
  plVar3 = DAT_05af83f8;
  FUN_03d4e760(*(undefined8 *)(param_1 + 0x400));
  (**(code **)(*plVar3 + 0x68))(plVar3,*(undefined8 *)(param_1 + 0x400));
  FUN_03d53a50(*(undefined8 *)(param_1 + 0x408));
  (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)(param_1 + 0x408));
  (**(code **)(*plVar3 + 200))(plVar3,*(undefined8 *)(param_1 + 0x410));
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb2698;
  lVar13 = *(long *)(param_1 + 0x428);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    piVar9 = malloc(0x18);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar15 + 8);
    if (lVar8 != 0) {
      puVar2 = (undefined8 *)(lVar8 + 0xa8);
    }
    piVar9 = (int *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x18,8);
  }
  piVar9[0] = 0x3c;
  piVar9[1] = 0x42f00000;
  piVar9[2] = 0x447a0000;
  piVar9[3] = 0x42f00000;
  piVar9[4] = 0x3d088889;
  piVar9[5] = 0;
  *(int **)(lVar13 + 8) = piVar9;
  uVar4 = *(uint *)(*(long *)PTR_DAT_04bbd758 + 0xa0);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  iVar5 = 0;
  if (uVar4 != 0) {
    iVar5 = 0x3c / (int)uVar4;
  }
  *piVar9 = iVar5;
  piVar9[1] = 0x42f00000;
  piVar9[2] = 0x447a0000;
  lVar15 = *(long *)puVar6;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_47 = 0;
  local_74 = 10;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
  puVar1 = (ulong *)(lVar15 + 8);
  if (lVar13 != 0) {
    puVar1 = (ulong *)(lVar13 + 0xa8);
  }
  local_a8 = *puVar1;
  local_a0 = param_1 + 0x438;
  local_70 = *(undefined8 *)(*(long *)(param_1 + 0x408) + 8);
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x400) + 8);
  local_60 = (**(code **)(*plVar3 + 0x28))(plVar3);
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x428) + 8);
  local_5c = (**(code **)(*plVar3 + 0xf8))(plVar3);
  local_58 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
  local_58 = local_58 & 0xffffffff;
  local_50 = (**(code **)(*plVar3 + 0x38))(plVar3,0);
  local_50 = local_50 & 0xffffffff;
  local_48 = *(int *)(*(long *)(param_1 + 0x420) + 0x48) != 0;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "Layout/MultiFilter.Nin_NX_NVN.szs";
  lVar13 = (**(code **)(**(long **)PTR_DAT_04bd4508 + 0x10))(*(long **)PTR_DAT_04bd4508,&local_b8);
  if (lVar13 != 0) {
    local_80 = *(undefined8 *)(lVar13 + 8);
    local_78 = *(undefined4 *)(lVar13 + 0x10);
  }
  FUN_03b1edf0(*(undefined8 *)PTR_DAT_04bd1e18,&local_a8);
  uVar10 = (**(code **)(*plVar3 + 0x40))(plVar3);
  if ((uVar10 & 1) == 0) goto LAB_03d88f8c;
  lVar15 = *(long *)puVar6;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
  puVar2 = (undefined8 *)(lVar15 + 8);
  if (lVar13 != 0) {
    puVar2 = (undefined8 *)(lVar13 + 0xa8);
  }
  plVar14 = (long *)*puVar2;
  local_98 = local_98 & 0xffffffffffffff00;
  local_a8 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
  local_a8 = local_a8 & 0xffffffff;
  local_a0 = (**(code **)(*plVar3 + 0x38))(plVar3,0);
  lVar13 = *(long *)puVar6;
  local_a0 = local_a0 & 0xffffffff;
  local_98._0_2_ = CONCAT11(1,(undefined1)local_98);
  if (lVar13 == 0) {
    pvVar12 = malloc(0x1d0);
  }
  else {
    plVar11 = plVar14;
    if (plVar14 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar15 != 0) {
        plVar11 = (long *)(lVar15 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        pvVar12 = (void *)0x0;
        goto LAB_03d88f2c;
      }
    }
    pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x1d0,8);
  }
LAB_03d88f2c:
  FUN_003490b4(pvVar12);
  *(undefined4 *)((long)pvVar12 + 0x120) = 0;
  *(undefined8 *)((long)pvVar12 + 0x138) = 0;
  *(undefined8 *)((long)pvVar12 + 0x140) = 1;
  *(undefined8 *)((long)pvVar12 + 0x148) = 0xffffffff00000000;
  *(undefined4 *)((long)pvVar12 + 0x150) = 0;
  *(undefined8 *)((long)pvVar12 + 0x158) = 0;
  *(undefined4 *)((long)pvVar12 + 0x170) = 0;
  *(undefined8 *)((long)pvVar12 + 0x198) = 0xffffffff00000000;
  *(undefined4 *)((long)pvVar12 + 0x1a0) = 0;
  *(undefined8 *)((long)pvVar12 + 0x1a8) = 0;
  *(undefined8 *)((long)pvVar12 + 0x1c0) = 0;
  *(undefined8 *)((long)pvVar12 + 0x188) = 0;
  *(undefined8 *)((long)pvVar12 + 400) = 1;
  *(undefined4 *)((long)pvVar12 + 0x1c7) = 0;
  *(undefined8 *)((long)pvVar12 + 0x128) = 0;
  *(undefined8 *)((long)pvVar12 + 0x130) = 0;
  *(undefined8 *)((long)pvVar12 + 0x178) = 0;
  *(undefined8 *)((long)pvVar12 + 0x180) = 0;
  *(void **)(param_1 + 0x430) = pvVar12;
  FUN_03b1f234(pvVar12,plVar14,&local_a8);
LAB_03d88f8c:
  lVar13 = *(long *)puVar6;
  if (lVar13 == 0) {
    plVar14 = malloc(0x1c8);
  }
  else {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar14 = (long *)(lVar13 + 8);
    if (lVar15 != 0) {
      plVar14 = (long *)(lVar15 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1c8,8);
    }
  }
  FUN_03d598b4(plVar14);
  *(long **)(param_1 + 0x448) = plVar14;
  *(undefined4 *)(plVar14 + 9) = 2;
  (**(code **)(*plVar14 + 0x28))(plVar14);
  (**(code **)(*plVar3 + 0xe8))(plVar3);
  lVar15 = *(long *)puVar6;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
  plVar3 = (long *)(lVar15 + 8);
  if (lVar13 != 0) {
    plVar3 = (long *)(lVar13 + 0xa8);
  }
  lVar13 = *plVar3;
  *(long *)(param_1 + 0x510) = lVar13;
  if (lVar13 != 0) {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    lVar8 = *(long *)(lVar15 + 0xa8);
    *(long *)(lVar15 + 0xa8) = lVar13;
    if (lVar8 != 1) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
      *(long *)(lVar13 + 0xa8) = lVar8;
    }
    if (*(long **)(param_1 + 0x510) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x510) + 0x28))();
    }
  }
  return;
}

