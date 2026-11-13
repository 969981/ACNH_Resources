
void FUN_00e6d390(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x00e6d44c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e6d44c;
    }
  }
  uVar10 = 0;
joined_r0x00e6d44c:
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      plVar9 = (long *)plVar9[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((plVar9 != (long *)0x0) &&
         (uVar5 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb6708), (uVar5 & 1) != 0)) {
        if (*(short *)((long)plVar9 + 0x12184) != -1) {
          iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0xe0);
          if (iVar3 != 0) {
            lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
            lVar6 = 0;
            lVar8 = (long)iVar3 << 3;
            do {
              if (*(short *)(*(long *)(lVar7 + lVar6 * 8) + 0x38) ==
                  *(short *)((long)plVar9 + 0x12184)) {
                if ((*(ushort *)(*(long *)(lVar7 + lVar6 * 8) + 0x114) >> 5 & 1) != 0) {
                  return;
                }
                break;
              }
              lVar6 = lVar6 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        uVar5 = (**(code **)(*plVar9 + 0x568))(plVar9,*(undefined8 *)(param_1 + 0x18),1);
        if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e6d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x568))(plVar9,*(undefined8 *)(param_1 + 0x18),0);
          return;
        }
      }
    }
  }
  return;
}

