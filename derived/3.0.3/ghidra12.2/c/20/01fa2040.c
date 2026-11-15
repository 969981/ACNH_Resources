
bool FUN_01fa2040(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return false;
  }
  uVar4 = *param_2;
  if ((((uVar4 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar4)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01fa2108;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fa2108:
    uVar4 = 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
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
    lVar8 = *(long *)(param_1[1] + 0x68);
    fVar13 = *(float *)(plVar11[0xd] + 0x278) - *(float *)(lVar8 + 0x278);
    fVar14 = *(float *)(plVar11[0xd] + 0x280) - *(float *)(lVar8 + 0x280);
    iVar3 = *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14);
    fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
    if ((*(uint *)((long)param_1 + 0xaf8c) < 6) &&
       ((1 << (ulong)(*(uint *)((long)param_1 + 0xaf8c) & 0x1f) & 0x2cU) != 0)) {
      plVar6 = param_1 + 0x23f9;
      if (*(short *)((long)param_1 + 0x12184) != -1) {
        iVar5 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
        if (iVar5 != 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
          lVar8 = 0;
          lVar10 = (long)iVar5 << 3;
          do {
            if (*(short *)(*(long *)(lVar9 + lVar8 * 8) + 0x38) ==
                *(short *)((long)param_1 + 0x12184)) {
              if ((*(ushort *)(*(long *)(lVar9 + lVar8 * 8) + 0x114) >> 5 & 1) != 0) {
                return false;
              }
              break;
            }
            lVar8 = lVar8 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
      puVar12 = (undefined8 *)plVar11[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if (((puVar12 != (undefined8 *)0x0) &&
          (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) &&
         (*(short *)((long)puVar12 + 0x12184) != -1)) {
        iVar5 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
        if (iVar5 != 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
          lVar8 = 0;
          lVar10 = (long)iVar5 << 3;
          do {
            if (*(short *)(*(long *)(lVar9 + lVar8 * 8) + 0x38) ==
                *(short *)((long)puVar12 + 0x12184)) {
              if ((*(ushort *)(*(long *)(lVar9 + lVar8 * 8) + 0x114) >> 5 & 1) != 0) {
                return false;
              }
              break;
            }
            lVar8 = lVar8 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
      puVar2 = PTR_DAT_04bb43c0;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(plVar6);
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_58 = 0;
          local_60 = (undefined4)*plVar6;
          uStack_5c = *(undefined4 *)((long)param_1 + 0x11fcc);
          local_68 = PTR_DAT_04bc0510 + 0x10;
          uVar4 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar2 != 0) {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar8 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(plVar6);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                 (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
                local_58 = lVar8;
              }
            }
          }
          if (((*(byte *)(param_1 + 0x15f6) >> 3 & 1) == 0) &&
             (*(int *)((long)param_1 + 0xaf8c) != 5)) {
            iVar5 = FUN_01b0fe30(&local_68);
          }
          else {
            iVar5 = FUN_01b11680(&local_68);
          }
          if (iVar5 == 0) goto LAB_01fa249c;
          if (fVar13 < 225.0) {
            return true;
          }
        }
      }
    }
    else if ((*(int *)(param_1[1] + 0x750) != 3) &&
            ((4 < (int)param_1[0xef6] - 3U &&
             (uVar7 = (**(code **)(*param_1 + 0x608))(param_1), (uVar7 & 1) == 0)))) {
      if ((char)param_1[0x15f2] != '\0' || *(char *)((long)param_1 + 0xaf9c) != '\0') {
        return false;
      }
      if (*(int *)((long)param_1 + 0x77f4) == 0x3e) {
        return false;
      }
      if ((int)param_1[0xef6] == 0x3e) {
        return false;
      }
      uVar7 = (**(code **)(*param_1 + 0x540))(param_1);
      if ((uVar7 & 1) != 0) {
LAB_01fa249c:
        fVar14 = 900.0;
        if (iVar3 != 6) {
          fVar14 = 400.0;
        }
        return fVar13 < fVar14;
      }
    }
  }
  return false;
}

