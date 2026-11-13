
undefined8 FUN_0140c580(long *param_1,long param_2,long param_3)

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
      DAT_051b7230 = 1;
      DAT_051b7234 = 0xffffffffffffffff;
      DAT_051b723c = 0xffffffffffffffff;
      DAT_051b7244 = 0xffffffffffffffff;
      DAT_051b724c = 0xffffffffffffffff;
      DAT_051b72d4 = 0xffffffff;
      DAT_051b7254 = 0xffffffffffffffff;
      DAT_051b725c = 0xffffffffffffffff;
      DAT_051b7264 = 0xffffffffffffffff;
      DAT_051b726c = 0xffffffffffffffff;
      DAT_051b7274 = 0xffffffffffffffff;
      DAT_051b727c = 0xffffffffffffffff;
      DAT_051b7284 = 0xffffffffffffffff;
      DAT_051b728c = 0xffffffffffffffff;
      DAT_051b7294 = 0xffffffffffffffff;
      DAT_051b729c = 0xffffffffffffffff;
      DAT_051b72a4 = 0xffffffffffffffff;
      DAT_051b72ac = 0xffffffffffffffff;
      DAT_051b72b4 = 0xffffffffffffffff;
      DAT_051b72bc = 0xffffffffffffffff;
      DAT_051b72c4 = 0xffffffffffffffff;
      DAT_051b72cc = 0xffffffffffffffff;
      param_1[0x16] = *(long *)(param_2 + 0xb0);
      param_3 = lVar4;
      goto LAB_0140c708;
    }
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0xa8);
    }
    param_3 = *plVar2;
  }
  DAT_051b7230 = 1;
  DAT_051b7234 = 0xffffffffffffffff;
  DAT_051b723c = 0xffffffffffffffff;
  DAT_051b7244 = 0xffffffffffffffff;
  DAT_051b724c = 0xffffffffffffffff;
  DAT_051b72d4 = 0xffffffff;
  DAT_051b7254 = 0xffffffffffffffff;
  DAT_051b725c = 0xffffffffffffffff;
  DAT_051b7264 = 0xffffffffffffffff;
  DAT_051b726c = 0xffffffffffffffff;
  DAT_051b7274 = 0xffffffffffffffff;
  DAT_051b727c = 0xffffffffffffffff;
  DAT_051b7284 = 0xffffffffffffffff;
  DAT_051b728c = 0xffffffffffffffff;
  DAT_051b7294 = 0xffffffffffffffff;
  DAT_051b729c = 0xffffffffffffffff;
  DAT_051b72a4 = 0xffffffffffffffff;
  DAT_051b72ac = 0xffffffffffffffff;
  DAT_051b72b4 = 0xffffffffffffffff;
  DAT_051b72bc = 0xffffffffffffffff;
  DAT_051b72c4 = 0xffffffffffffffff;
  DAT_051b72cc = 0xffffffffffffffff;
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
LAB_0140c708:
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

