
void FUN_014ee504(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_2 + 0x18) == 1) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    uVar8 = *(uint *)(param_2 + 0x8c);
    if ((uVar8 == 0) ||
       (((plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0 ||
         ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014ee5d0;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar7 != (long *)0x0) goto LAB_014ee5e4;
      goto LAB_014ee630;
    }
LAB_014ee5d0:
    uVar8 = 0;
    if (plVar7 == (long *)0x0) goto LAB_014ee630;
LAB_014ee5e4:
    lVar6 = plVar7[0x2a];
    uVar1 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
    if ((((int)lVar6 != 1) || ((uVar4 & uVar8) == 0)) || ((uVar1 >> 4 & 1) == 0)) goto LAB_014ee630;
    lVar6 = plVar7[0xd];
LAB_014ee770:
    *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + 0x2b0);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar6 + 0x2b4);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x2b8);
  }
  else {
LAB_014ee630:
    if ((*(int *)(param_2 + 0x98) != 0) &&
       (plVar7 = (long *)FUN_014ba988(param_2 + 0x90), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ee660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(param_1);
      return;
    }
    puVar2 = PTR_DAT_04bb27c0;
    if ((*(int *)(param_2 + 0x18) == 3) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
      uVar8 = *(uint *)(param_2 + 0x8c);
      if ((uVar8 == 0) ||
         (((plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                               ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0 ||
           ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
        plVar7 = (long *)0x0;
      }
      if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar6 = *(long *)puVar2;
        iVar3 = (**(code **)(*plVar5 + 0x60))();
        if (iVar3 < 0x11) {
          uVar8 = 1;
        }
        else {
          if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014ee714;
          uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_014ee714:
        uVar8 = 0;
      }
      if (plVar7 != (long *)0x0) {
        lVar6 = plVar7[0x2a];
        uVar1 = *(uint *)(plVar7 + 0x49);
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
        if ((((int)lVar6 == 1) && ((uVar4 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
          lVar6 = plVar7[0xd];
          goto LAB_014ee770;
        }
      }
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

