
undefined8 FUN_01409dd0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb4a98;
  if (*(long *)(param_2 + 0xb0) == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_2 + 0xb0) + 8) == 0) {
    return 0;
  }
  lVar4 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
  if (lVar4 == 0 || lVar4 != param_3) {
    lVar4 = (**(code **)(**(long **)puVar3 + 0x18))();
    if ((lVar4 != 0) || (lVar4 = param_3, param_3 != 0)) {
      DAT_051b7168 = 1;
      DAT_051b716c = 0xffffffffffffffff;
      DAT_051b7174 = 0xffffffffffffffff;
      DAT_051b717c = 0xffffffffffffffff;
      DAT_051b7184 = 0xffffffffffffffff;
      DAT_051b720c = 0xffffffff;
      DAT_051b718c = 0xffffffffffffffff;
      DAT_051b7194 = 0xffffffffffffffff;
      DAT_051b719c = 0xffffffffffffffff;
      DAT_051b71a4 = 0xffffffffffffffff;
      DAT_051b71ac = 0xffffffffffffffff;
      DAT_051b71b4 = 0xffffffffffffffff;
      DAT_051b71bc = 0xffffffffffffffff;
      DAT_051b71c4 = 0xffffffffffffffff;
      DAT_051b71cc = 0xffffffffffffffff;
      DAT_051b71d4 = 0xffffffffffffffff;
      DAT_051b71dc = 0xffffffffffffffff;
      DAT_051b71e4 = 0xffffffffffffffff;
      DAT_051b71ec = 0xffffffffffffffff;
      DAT_051b71f4 = 0xffffffffffffffff;
      DAT_051b71fc = 0xffffffffffffffff;
      DAT_051b7204 = 0xffffffffffffffff;
      param_1[0x16] = *(long *)(param_2 + 0xb0);
      param_3 = lVar4;
      goto LAB_01409f58;
    }
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0xa8);
    }
    param_3 = *plVar2;
  }
  DAT_051b7168 = 1;
  DAT_051b716c = 0xffffffffffffffff;
  DAT_051b7174 = 0xffffffffffffffff;
  DAT_051b717c = 0xffffffffffffffff;
  DAT_051b7184 = 0xffffffffffffffff;
  DAT_051b720c = 0xffffffff;
  DAT_051b718c = 0xffffffffffffffff;
  DAT_051b7194 = 0xffffffffffffffff;
  DAT_051b719c = 0xffffffffffffffff;
  DAT_051b71a4 = 0xffffffffffffffff;
  DAT_051b71ac = 0xffffffffffffffff;
  DAT_051b71b4 = 0xffffffffffffffff;
  DAT_051b71bc = 0xffffffffffffffff;
  DAT_051b71c4 = 0xffffffffffffffff;
  DAT_051b71cc = 0xffffffffffffffff;
  DAT_051b71d4 = 0xffffffffffffffff;
  DAT_051b71dc = 0xffffffffffffffff;
  DAT_051b71e4 = 0xffffffffffffffff;
  DAT_051b71ec = 0xffffffffffffffff;
  DAT_051b71f4 = 0xffffffffffffffff;
  DAT_051b71fc = 0xffffffffffffffff;
  DAT_051b7204 = 0xffffffffffffffff;
  param_1[0x16] = *(long *)(param_2 + 0xb0);
  lVar4 = param_3;
  if (param_3 == 0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0xa8);
    }
    lVar4 = *plVar2;
  }
LAB_01409f58:
  param_1[0x15] = lVar4;
  param_1[0x17] = param_2;
  if (**(char **)(param_2 + 0x10) == '\0') {
    (**(code **)(*param_1 + 0x38))(param_1);
    return 0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2 + 8,param_3);
  lVar5 = *(long *)puVar3;
  uVar6 = 0;
  lVar4 = lVar5 + 8;
  do {
    if (*(long **)(lVar4 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) == param_1) {
      return 1;
    }
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
  } while (uVar1 != 0x100);
  uVar6 = 0;
  do {
    if (*(long *)(lVar4 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) == 0) {
      lVar7 = (long)(int)uVar6 * 8;
      *(long **)(lVar4 + lVar7) = param_1;
      *(int *)(lVar5 + 0x82c) = *(int *)(lVar5 + 0x82c) + 1;
      if (*(long *)(*(long *)(lVar4 + lVar7) + 0xb8) == 0) {
        *(int *)(lVar5 + 0x828) = *(int *)(lVar5 + 0x828) + 1;
        return 1;
      }
      return 1;
    }
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
  } while (uVar1 != 0x100);
  return 1;
}

