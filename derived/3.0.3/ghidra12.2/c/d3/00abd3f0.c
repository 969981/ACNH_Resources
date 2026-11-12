
undefined8 FUN_00abd3f0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb4a98;
  if (*(long *)(param_2 + 0xb0) == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_2 + 0xb0) + 8) == 0) {
    return 0;
  }
  lVar5 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
  if (lVar5 == 0 || lVar5 != param_3) {
    lVar5 = (**(code **)(**(long **)puVar3 + 0x18))();
    puVar4 = PTR_DAT_04bb63f8;
    if ((lVar5 != 0) || (lVar5 = param_3, param_3 != 0)) {
      *PTR_DAT_04bb63f0 = 1;
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      param_1[0x16] = *(long *)(param_2 + 0xb0);
      param_3 = lVar5;
      goto LAB_00abd538;
    }
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar6 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    param_3 = *plVar2;
  }
  puVar4 = PTR_DAT_04bb63f8;
  *PTR_DAT_04bb63f0 = 1;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
  param_1[0x16] = *(long *)(param_2 + 0xb0);
  lVar5 = param_3;
  if (param_3 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar6 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar2;
  }
LAB_00abd538:
  param_1[0x15] = lVar5;
  param_1[0x17] = param_2;
  if (**(char **)(param_2 + 0x10) == '\0') {
    (**(code **)(*param_1 + 0x38))(param_1);
    return 0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2 + 8,param_3);
  lVar6 = *(long *)puVar3;
  uVar7 = 0;
  lVar5 = lVar6 + 8;
  do {
    if (*(long **)(lVar5 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) == param_1) {
      return 1;
    }
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar1;
  } while (uVar1 != 0x100);
  uVar7 = 0;
  do {
    if (*(long *)(lVar5 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) == 0) {
      lVar8 = (long)(int)uVar7 * 8;
      *(long **)(lVar5 + lVar8) = param_1;
      *(int *)(lVar6 + 0x82c) = *(int *)(lVar6 + 0x82c) + 1;
      if (*(long *)(*(long *)(lVar5 + lVar8) + 0xb8) == 0) {
        *(int *)(lVar6 + 0x828) = *(int *)(lVar6 + 0x828) + 1;
        return 1;
      }
      return 1;
    }
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar1;
  } while (uVar1 != 0x100);
  return 1;
}

