
/* WARNING: Type propagation algorithm not settling */

bool FUN_0076e4a0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined *local_40;
  char *pcStack_38;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)PTR_DAT_04bb3968 != 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "-Wherearen:Officer";
    uVar4 = FUN_020a4f40(*(long *)PTR_DAT_04bb3968,&local_40,PTR_DAT_04bb3238,1);
    if (uVar4 != *(uint *)puVar3) {
      lVar8 = *(long *)puVar2;
      if (lVar8 == 0) {
        return false;
      }
      if ((((uVar4 == 0) ||
           (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8
                               ), plVar9 == (long *)0x0)) ||
          ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar4)) {
        plVar9 = (long *)0x0;
      }
      if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
        plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)puVar2;
        iVar5 = (**(code **)(*plVar6 + 0x60))();
        if (iVar5 < 0x11) {
          uVar4 = 1;
        }
        else {
          if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0076e6ac;
          uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0076e6ac:
        uVar4 = 0;
      }
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar9[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
        uVar1 = 0;
        if ((int)lVar8 == 1) {
          uVar1 = uVar4;
        }
        if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && ((int)plVar9[0xea] != 3)) {
          return false;
        }
      }
    }
  }
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return false;
  }
  uVar4 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar4 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar4)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto joined_r0x0076e644;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0076e644;
    }
  }
  uVar4 = 0;
joined_r0x0076e644:
  if (plVar9 == (long *)0x0) {
    return false;
  }
  lVar8 = plVar9[0x2a];
  if (((*PTR_DAT_04bb3930 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3930);
  }
  uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3928);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar4;
  }
  if ((uVar7 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  return (char)plVar9[0x5e] != '\0';
}

