
undefined8 FUN_011e36b0(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 8;
  }
  if (DAT_050dfb28 == 0) {
    return 8;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 8;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_050dfb28)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x011e37a8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e37a8;
    }
  }
  uVar9 = 0;
joined_r0x011e37a8:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) && (iVar3 = (int)plVar8[0x49ef], 0 < iVar3)) {
      plVar8 = plVar8 + 0x4f;
      do {
        if (((((*(ushort *)(plVar8 + 0xd) >> 3 & 1) != 0) && (*(char *)((long)plVar8 + 0x6e) < '\0')
             ) && (*(int *)(param_2 + 8) == (int)plVar8[3])) &&
           (*(int *)(param_2 + 0xc) == *(int *)((long)plVar8 + 0x1c))) {
          uVar6 = FUN_01257a24(plVar8,param_1,param_3 & 1);
          return uVar6;
        }
        plVar8 = plVar8 + 0xf;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 8;
}

