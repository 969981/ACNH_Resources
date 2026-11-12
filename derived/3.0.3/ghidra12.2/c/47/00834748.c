
void FUN_00834748(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "CommuneExpanded";
    uVar4 = FUN_0273f0a0(&local_40);
    puVar2 = PTR_DAT_04bb27c0;
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)PTR_DAT_04bb27c0;
      if (lVar6 == 0) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x234);
      if ((((uVar9 == 0) ||
           (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                               ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
          ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
        plVar8 = (long *)0x0;
      }
      if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar6 = *(long *)puVar2;
        iVar3 = (**(code **)(*plVar5 + 0x60))();
        if (iVar3 < 0x11) {
          uVar9 = 1;
          goto joined_r0x008349c8;
        }
        if (*(uint *)(lVar6 + 0x5e8) < 5) {
          uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
          goto joined_r0x008349c8;
        }
      }
      uVar9 = 0;
joined_r0x008349c8:
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar6 = plVar8[0x2a];
      if (((*PTR_DAT_04bb5278 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5278), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5270 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5278);
      }
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5270);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar9;
      }
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (uVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x174) == 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x180);
      if (iVar3 == 0) {
        uVar4 = (ulong)*(uint *)(plVar8 + 0x56);
        if ((int)*(uint *)(plVar8 + 0x56) < 1) {
          return;
        }
        piVar7 = (int *)plVar8[0x57];
        while (*piVar7 != *(int *)(param_1 + 0x230)) {
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 1;
          if (uVar4 == 0) {
            return;
          }
        }
        iVar3 = 0;
      }
      else {
        uVar4 = (ulong)*(uint *)(plVar8 + 0x5a);
        if ((int)*(uint *)(plVar8 + 0x5a) < 1) {
          return;
        }
        piVar7 = (int *)plVar8[0x5b];
        while (*piVar7 != *(int *)(param_1 + 0x230)) {
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 1;
          if (uVar4 == 0) {
            return;
          }
        }
      }
      FUN_00839a90(plVar8,iVar3);
      return;
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x234);
  if (((uVar9 == 0) ||
      (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                          ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x008348ec;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x008348ec;
    }
  }
  uVar9 = 0;
joined_r0x008348ec:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb5288 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5288), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5280 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5288);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5280);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar4 & 1) != 0) && (uVar1 != 0)) &&
       (((((iVar3 = *(int *)(param_1 + 0x230), (int)plVar8[0x57] == iVar3 ||
           (((*(int *)((long)plVar8 + 700) == iVar3 || ((int)plVar8[0x58] == iVar3)) ||
            (*(int *)((long)plVar8 + 0x2c4) == iVar3)))) ||
          ((((int)plVar8[0x59] == iVar3 || (*(int *)((long)plVar8 + 0x2cc) == iVar3)) ||
           ((int)plVar8[0x5a] == iVar3)))) ||
         ((*(int *)((long)plVar8 + 0x2d4) == iVar3 || ((int)plVar8[0x5b] == iVar3)))) ||
        (*(int *)((long)plVar8 + 0x2dc) == iVar3)))) {
      FUN_0083d970(plVar8);
    }
  }
  return;
}

