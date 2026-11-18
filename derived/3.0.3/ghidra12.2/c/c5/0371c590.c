
/* WARNING: Removing unreachable block (ram,0x0371c7ac) */
/* WARNING: Removing unreachable block (ram,0x0371c7bc) */

undefined8 FUN_0371c590(long param_1,float *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  long local_a0;
  undefined8 local_98;
  undefined8 local_80;
  ulong local_78;
  
  nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar14 = (undefined8 *)
              (**(code **)(*DAT_05aed668 + 0x18))
                        (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar13 = FUN_006bd550(*puVar14,0);
    if (((iVar13 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      if (DAT_05292338 == 0) {
        iVar13 = 0;
        iVar17 = 0;
        iVar18 = 0x10;
        iVar19 = 0x10;
      }
      else {
        iVar13 = *(int *)(DAT_05292338 + 0xd88);
        iVar17 = *(int *)(DAT_05292338 + 0xd8c);
        iVar19 = *(int *)(DAT_05292338 + 0xd98);
        iVar18 = *(int *)(DAT_05292338 + 0xd9c);
      }
      iVar21 = iVar13;
      if (iVar19 <= iVar13) {
        iVar21 = iVar19;
      }
      if (iVar13 <= iVar19) {
        iVar13 = iVar19;
      }
      iVar19 = iVar17;
      if (iVar18 <= iVar17) {
        iVar19 = iVar18;
      }
      if (iVar17 <= iVar18) {
        iVar17 = iVar18;
      }
      iVar13 = iVar13 + -1;
      iVar17 = iVar17 + -1;
      iVar18 = iVar21;
      if (iVar13 <= iVar21) {
        iVar18 = iVar13;
      }
      if (iVar21 <= iVar13) {
        iVar21 = iVar13;
      }
      iVar13 = iVar19;
      if (iVar17 <= iVar19) {
        iVar13 = iVar17;
      }
      if (iVar19 <= iVar17) {
        iVar19 = iVar17;
      }
      if (iVar19 + 1 == iVar13) {
        return 0;
      }
      bVar12 = false;
      fVar22 = -3.4028235e+38;
      local_98 = 0;
      iVar17 = iVar18;
      do {
        iVar8 = (iVar17 + 1) - (uint)*(ushort *)(param_1 + 0x1470);
        if (-1 < iVar8) {
          iVar4 = *(int *)(param_1 + 0x147c);
          if (iVar8 < iVar4) {
            iVar9 = (iVar13 + 1) - (uint)*(ushort *)(param_1 + 0x1472);
            if (-1 < iVar9) {
              if (iVar9 < *(int *)(param_1 + 0x1480)) {
                iVar10 = iVar17 - (uint)*(ushort *)(param_1 + 0x1470);
                if ((-1 < iVar10) && (iVar10 < iVar4)) {
                  iVar11 = iVar13 - (uint)*(ushort *)(param_1 + 0x1472);
                  if ((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 0x1480))) {
                    lVar20 = *(long *)(param_1 + 0x1490);
                    bVar5 = *(byte *)(lVar20 + (long)(iVar9 * iVar4 + iVar8) * 0x28 + 6);
                    if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                      bVar5 = *(byte *)(lVar20 + (long)(iVar11 * iVar4 + iVar8) * 0x28 + 6);
                      if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                        bVar5 = *(byte *)(lVar20 + (long)(iVar9 * iVar4 + iVar10) * 0x28 + 6);
                        if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                          bVar5 = *(byte *)(lVar20 + (long)(iVar11 * iVar4 + iVar10) * 0x28 + 6);
                          if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                            puVar16 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                            uVar3 = puVar16[3];
                            uVar2 = *puVar16 ^ *puVar16 << 0xb;
                            *puVar16 = puVar16[1];
                            puVar16[1] = puVar16[2];
                            uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                            puVar16[2] = uVar3;
                            puVar16[3] = uVar2;
                            fVar23 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
                            if (fVar22 < fVar23) {
                              local_98 = CONCAT44(iVar13,iVar17);
                              bVar12 = true;
                              fVar22 = fVar23;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar1 = iVar21 <= iVar17;
        iVar17 = iVar17 + 1;
        if (bVar1) {
          iVar13 = iVar13 + 1;
          iVar17 = iVar18;
        }
      } while ((iVar18 != iVar17) || (iVar19 + 1 != iVar13));
      goto LAB_0371c9ec;
    }
  }
  if ((param_3 & 1) == 0) {
    iVar18 = *(int *)(DAT_05abff60 + 0x38) + -1;
    iVar13 = *(int *)(DAT_05abff60 + 0x28);
    iVar17 = *(int *)(DAT_05abff60 + 0x2c);
    iVar21 = *(int *)(DAT_05abff60 + 0x3c) + -1;
    iVar19 = iVar13;
    if (iVar18 <= iVar13) {
      iVar19 = iVar18;
    }
    if (iVar13 <= iVar18) {
      iVar13 = iVar18;
    }
    iVar18 = iVar17;
    if (iVar21 <= iVar17) {
      iVar18 = iVar21;
    }
    if (iVar17 <= iVar21) {
      iVar17 = iVar21;
    }
  }
  else {
    local_78 = local_78 & 0xffffffff00000000;
    local_80 = 0;
    uVar15 = FUN_021d9820(&local_80,1);
    if ((uVar15 & 1) == 0) {
      return 0;
    }
    iVar13 = (int)((float)(int)((float)local_80 + -10.0) / 5.0) -
             (uint)((float)local_80 + -10.0 < 0.0);
    iVar17 = (int)((float)(int)((float)local_78 + -5.0) / 5.0) -
             (uint)((float)local_78 + -5.0 < 0.0);
    fVar22 = ((float)iVar13 * 5.0 + (float)(iVar13 + 3) * 5.0 + 5.0) * 0.5;
    fVar23 = ((float)iVar17 * 5.0 + (float)(iVar17 + 2) * 5.0 + 5.0) * 0.5;
    iVar13 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    iVar19 = iVar13 + -3;
    iVar13 = iVar13 + 2;
    iVar18 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iVar17 = iVar18 + 5;
  }
  local_80 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
  local_78 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  if (iVar17 + 1 == iVar18) {
    return 0;
  }
  local_98 = 0;
  fVar22 = -3.4028235e+38;
  bVar12 = false;
  iVar21 = iVar19;
  do {
    iVar8 = iVar21 + 1;
    iVar4 = iVar18 + 1;
    iVar9 = iVar8 - (uint)*(ushort *)(param_1 + 0x1470);
    if (-1 < iVar9) {
      iVar10 = *(int *)(param_1 + 0x147c);
      if (iVar9 < iVar10) {
        iVar11 = iVar4 - (uint)*(ushort *)(param_1 + 0x1472);
        if (-1 < iVar11) {
          if (iVar11 < *(int *)(param_1 + 0x1480)) {
            iVar6 = iVar21 - (uint)*(ushort *)(param_1 + 0x1470);
            if ((-1 < iVar6) && (iVar6 < iVar10)) {
              iVar7 = iVar18 - (uint)*(ushort *)(param_1 + 0x1472);
              if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x1480))) {
                lVar20 = *(long *)(param_1 + 0x1490);
                bVar5 = *(byte *)(lVar20 + (long)(iVar11 * iVar10 + iVar9) * 0x28 + 6);
                if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                  bVar5 = *(byte *)(lVar20 + (long)(iVar7 * iVar10 + iVar9) * 0x28 + 6);
                  if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                    bVar5 = *(byte *)(lVar20 + (long)(iVar11 * iVar10 + iVar6) * 0x28 + 6);
                    if ((bVar5 < 5) && ((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0)) {
                      bVar5 = *(byte *)(lVar20 + (long)(iVar7 * iVar10 + iVar6) * 0x28 + 6);
                      if (((bVar5 < 5) &&
                          (((((1 << (ulong)(bVar5 & 0x1f) & 0x13U) != 0 &&
                             (uVar15 = FUN_0373a9dc(iVar21,iVar18), (uVar15 & 1) != 0)) &&
                            (uVar15 = FUN_035aa210(iVar21,iVar18,&local_80), (uVar15 & 1) != 0)) &&
                           ((uVar15 = FUN_035aa210(iVar21,iVar4,&local_80), (uVar15 & 1) != 0 &&
                            (uVar15 = FUN_035aa210(iVar8,iVar18,&local_80), (uVar15 & 1) != 0))))))
                         && (uVar15 = FUN_035aa210(iVar8,iVar4,&local_80), (uVar15 & 1) != 0)) {
                        puVar16 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                        uVar3 = puVar16[3];
                        uVar2 = *puVar16 ^ *puVar16 << 0xb;
                        *puVar16 = puVar16[1];
                        puVar16[1] = puVar16[2];
                        uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                        puVar16[2] = uVar3;
                        puVar16[3] = uVar2;
                        fVar23 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
                        if (fVar22 < fVar23) {
                          local_98 = CONCAT44(iVar18,iVar21);
                          bVar12 = true;
                          fVar22 = fVar23;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = iVar13 <= iVar21;
    iVar21 = iVar8;
    if (bVar1) {
      iVar18 = iVar4;
      iVar21 = iVar19;
    }
  } while ((iVar19 != iVar21) || (iVar17 + 1 != iVar18));
LAB_0371c9ec:
  local_a0 = param_1 + 0x1470;
  if (bVar12) {
    FUN_035a4360(local_a0,local_98 & 0xffffffff,local_98._4_4_,0);
    FUN_035a4360(local_a0,local_98 & 0xffffffff,local_98._4_4_ + (uint)DAT_057763a8,0);
    FUN_035a4360(local_a0,(int)local_98 + (uint)DAT_057763b0,local_98._4_4_,0);
    FUN_035a4360(local_a0,(int)local_98 + (uint)DAT_057763b8,local_98._4_4_ + (uint)DAT_057763c0,0);
    if (param_2 != (float *)0x0) {
      *param_2 = (float)(int)local_98 * 5.0 + 5.0;
      param_2[2] = (float)local_98._4_4_ * 5.0 + 5.0;
    }
    return 1;
  }
  return 0;
}

