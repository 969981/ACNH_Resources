
void FUN_00a77ec0(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  if (DAT_04da4ab8 == 0) {
    return;
  }
  if ((*(int *)(DAT_04da4ab8 + 0x614) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x610) - 7U)) {
    if ((*(int *)(DAT_04da4ab8 + 0x63c) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x638) - 7U)) {
      if ((*(int *)(DAT_04da4ab8 + 0x664) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x660) - 7U)) {
        if ((*(int *)(DAT_04da4ab8 + 0x68c) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x688) - 7U)) {
          if ((*(int *)(DAT_04da4ab8 + 0x6b4) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x6b0) - 7U)) {
            if ((*(int *)(DAT_04da4ab8 + 0x6dc) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x6d8) - 7U))
            {
              if ((*(int *)(DAT_04da4ab8 + 0x704) == 0) || (1 < *(int *)(DAT_04da4ab8 + 0x700) - 7U)
                 ) {
                if ((*(int *)(DAT_04da4ab8 + 0x72c) == 0) ||
                   (1 < *(int *)(DAT_04da4ab8 + 0x728) - 7U)) {
                  if (*(int *)(DAT_04da4ab8 + 0x754) == 0) {
                    return;
                  }
                  if (1 < *(int *)(DAT_04da4ab8 + 0x750) - 7U) {
                    return;
                  }
                  lVar5 = 8;
                }
                else {
                  lVar5 = 7;
                }
              }
              else {
                lVar5 = 6;
              }
            }
            else {
              lVar5 = 5;
            }
          }
          else {
            lVar5 = 4;
          }
        }
        else {
          lVar5 = 3;
        }
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
  }
  else {
    lVar5 = 0;
  }
  *(undefined4 *)(DAT_04da4ab8 + lVar5 * 0x28 + 0x618) = 5;
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  uVar7 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x00a780b8;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00a780b8;
    }
  }
  uVar7 = 0;
joined_r0x00a780b8:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3278);
    if ((uVar7 & uVar3) == 1) {
      FUN_009002a0(plVar6);
      return;
    }
  }
  return;
}

