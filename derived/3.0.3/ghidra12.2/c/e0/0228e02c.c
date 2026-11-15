
undefined8 FUN_0228e02c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  
  puVar7 = PTR_DAT_04bb27c0;
  uVar13 = *(uint *)(param_1 + 0x308);
  if ((uVar13 != 0) && (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 != 0)) {
    plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                        ((ulong)(uVar13 >> 0x11) & 0x7ff8));
    if ((plVar12 == (long *)0x0) ||
       (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar7;
      iVar8 = (**(code **)(*plVar9 + 0x60))();
      if (iVar8 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0228e0f0;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0228e0f0:
      uVar13 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x2a];
      if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9e0);
      }
      uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe9d8);
      uVar1 = 0;
      if ((int)lVar11 == 1) {
        uVar1 = uVar13;
      }
      if (((uVar10 & 1) != 0) && (uVar1 != 0)) {
        iVar8 = *(int *)(param_2 + 0x20);
        iVar3 = *(int *)(param_2 + 0x24);
        iVar5 = (int)((float)(int)*(float *)(plVar12 + 0x5d) / 5.0) -
                (uint)(*(float *)(plVar12 + 0x5d) < 0.0);
        iVar6 = (int)((float)(int)*(float *)(plVar12 + 0x5e) / 5.0) -
                (uint)(*(float *)(plVar12 + 0x5e) < 0.0);
        iVar2 = *(int *)(param_2 + 0x10);
        iVar4 = *(int *)(param_2 + 0x14);
        if (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && iVar6 == iVar3 ||
            (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && iVar6 - iVar3 < 0) !=
            (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && SBORROW4(iVar6,iVar3))) {
          if (plVar12[0xe] == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(plVar12[0xe] + 0x280);
            if (iVar8 == 4) goto LAB_0228e244;
          }
          if (iVar8 != 6) {
            uVar13 = *(uint *)(plVar12 + 0x54);
            if ((int)uVar13 < 2) {
              lVar11 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar13 * 0xd8;
              if (1 < uVar13) {
                lVar11 = *(long *)PTR_DAT_04bb4848 + 8;
              }
              *(uint *)(lVar11 + 0x1c) = uVar13;
              *(undefined8 *)(lVar11 + 8) = 0;
              *(undefined4 *)(lVar11 + 0x10) = 0;
              *(undefined8 *)(lVar11 + 0x20) = 9;
            }
            FUN_006fb3d0(plVar12);
            lVar11 = 0;
            if (plVar12[0xe] != 0) {
              lVar11 = plVar12[0xe] + 0x278;
            }
            FUN_03ebb160(lVar11,7);
          }
        }
      }
    }
  }
LAB_0228e244:
  uVar13 = *(uint *)(param_1 + 0x340);
  if (uVar13 == 0) {
    return 1;
  }
  lVar11 = *(long *)puVar7;
  if (lVar11 == 0) {
    return 1;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar7;
    iVar8 = (**(code **)(*plVar9 + 0x60))();
    if (iVar8 < 0x11) {
      uVar13 = 1;
      goto joined_r0x0228e2e4;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0228e2e4;
    }
  }
  uVar13 = 0;
joined_r0x0228e2e4:
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe9d8);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar10 & 1) != 0) && (uVar1 != 0)) {
      iVar8 = *(int *)(param_2 + 0x20);
      iVar3 = *(int *)(param_2 + 0x24);
      iVar5 = (int)((float)(int)*(float *)(plVar12 + 0x5d) / 5.0) -
              (uint)(*(float *)(plVar12 + 0x5d) < 0.0);
      iVar6 = (int)((float)(int)*(float *)(plVar12 + 0x5e) / 5.0) -
              (uint)(*(float *)(plVar12 + 0x5e) < 0.0);
      iVar2 = *(int *)(param_2 + 0x10);
      iVar4 = *(int *)(param_2 + 0x14);
      if (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && iVar6 == iVar3 ||
          (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && iVar6 - iVar3 < 0) !=
          (((iVar2 <= iVar5 && iVar5 <= iVar8) && iVar4 <= iVar6) && SBORROW4(iVar6,iVar3))) {
        if (plVar12[0xe] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(plVar12[0xe] + 0x280);
          if (iVar8 == 4) {
            return 1;
          }
        }
        if (iVar8 != 6) {
          uVar13 = *(uint *)(plVar12 + 0x54);
          if ((int)uVar13 < 2) {
            lVar11 = *(long *)PTR_DAT_04bb4848 + 8 + (ulong)uVar13 * 0xd8;
            if (1 < uVar13) {
              lVar11 = *(long *)PTR_DAT_04bb4848 + 8;
            }
            *(uint *)(lVar11 + 0x1c) = uVar13;
            *(undefined8 *)(lVar11 + 8) = 0;
            *(undefined4 *)(lVar11 + 0x10) = 0;
            *(undefined8 *)(lVar11 + 0x20) = 9;
          }
          FUN_006fb3d0(plVar12);
          lVar11 = 0;
          if (plVar12[0xe] != 0) {
            lVar11 = plVar12[0xe] + 0x278;
          }
          FUN_03ebb160(lVar11,7);
        }
      }
    }
  }
  return 1;
}

