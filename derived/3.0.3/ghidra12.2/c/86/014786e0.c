
void FUN_014786e0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x2d4);
  if (uVar9 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0147879c;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0147879c;
    }
  }
  uVar9 = 0;
joined_r0x0147879c:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
    if ((uVar9 & uVar3) == 1) {
      plVar4 = plVar8 + 0x5e;
      plVar6 = plVar4;
      do {
        plVar6 = (long *)plVar6[1];
        if (plVar6 == plVar4) goto LAB_01478814;
      } while (*(int *)(param_1 + 0x230) != (int)plVar6[-1]);
      if (((ulong)plVar6 | 8) != 8) {
        plVar6 = plVar4;
        do {
          plVar6 = (long *)plVar6[1];
          if (plVar6 == plVar4) goto LAB_01478814;
          plVar7 = plVar6 + -1;
        } while (*(int *)(param_1 + 0x230) != (int)*plVar7);
        if ((plVar6 != (long *)0x0) && (plVar7 != (long *)0x0)) {
          if (*plVar6 != 0) {
            *(long *)(*plVar6 + 8) = plVar6[1];
          }
          if ((long *)plVar6[1] != (long *)0x0) {
            *(long *)plVar6[1] = *plVar6;
          }
          *plVar6 = 0;
          plVar6[1] = 0;
          *(int *)(plVar8 + 0x60) = (int)plVar8[0x60] + -1;
          plVar6[-1] = plVar8[0x61];
          plVar8[0x61] = (long)plVar7;
        }
      }
LAB_01478814:
      FUN_014858d0(plVar8[0x150]);
      return;
    }
  }
  return;
}

