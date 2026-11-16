
/* WARNING: Type propagation algorithm not settling */

bool FUN_02526530(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  bool bVar17;
  ulong uVar18;
  uint local_74 [3];
  uint local_68;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (((param_2 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    bVar17 = true;
    FUN_02507c6c(local_74,1,1,0,0);
    puVar7 = PTR_DAT_04bb3770;
    puVar6 = PTR_DAT_04bb32e0;
    puVar5 = PTR_DAT_04bb3238;
    puVar4 = PTR_DAT_04bb27c0;
    uVar13 = local_74[0] & 0xff;
    if (7 < (byte)local_74[0]) {
      return true;
    }
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    do {
      if (7 < (byte)*puVar6 || (byte)*puVar6 != uVar13) {
        puVar2 = (uint *)puVar5;
        if (DAT_054f5738 != 0) {
          puVar2 = (uint *)(DAT_054f5738 + (ulong)uVar13 * 4 + 0xde8);
        }
        uVar13 = *puVar2;
        if (uVar13 == 0) {
          return false;
        }
        lVar14 = *(long *)puVar4;
        if (lVar14 == 0) {
          return false;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8));
        if (((plVar15 == (long *)0x0) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar15 + 0x46) != uVar13)) {
          plVar15 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar4;
          iVar9 = (**(code **)(*plVar11 + 0x60))();
          if (iVar9 < 0x11) {
            uVar13 = 1;
          }
          else {
            uVar13 = *(uint *)(lVar14 + 0x5e8);
            if (4 < uVar13) goto LAB_025266d0;
            uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
          }
        }
        else {
LAB_025266d0:
          uVar13 = 0;
        }
        if (plVar15 == (long *)0x0) {
          return false;
        }
        lVar14 = plVar15[0x2a];
        uVar3 = *(uint *)(plVar15 + 0x49);
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar9 != 0)) {
          *(undefined **)puVar7 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar10 = (**(code **)(*plVar15 + 0x20))(plVar15,puVar7);
        if ((int)lVar14 != 1) {
          return false;
        }
        if ((uVar10 & uVar13) == 0) {
          return false;
        }
        if ((uVar3 >> 4 & 1) == 0) {
          return false;
        }
        local_64 = 0x135;
        local_68 = 0;
        if (plVar15[0xe] != 0) {
          uVar13 = *(uint *)(plVar15[0xe] + 0x280);
          local_68 = 0;
          if (uVar13 < 0x149) {
            local_68 = uVar13;
          }
        }
        bVar8 = (byte)local_74[0];
        uVar18 = (ulong)(byte)local_74[0];
        bVar17 = (bool)(bVar17 & local_68 == 0x135);
        if (7 < (byte)local_74[0]) {
          return bVar17;
        }
        if (uVar18 + 1 == 8) {
LAB_02526600:
          uVar13 = 0xff;
        }
        else {
          pbVar16 = PTR_DAT_04bb5038 + uVar18 + 1;
          uVar12 = FUN_02507924(local_74,pbVar16);
          if ((uVar12 & 1) == 0) {
            if (uVar18 + 2 == 8) goto LAB_02526600;
            pbVar16 = PTR_DAT_04bb5038 + uVar18 + 2;
            uVar12 = FUN_02507924(local_74,pbVar16);
            if ((uVar12 & 1) == 0) {
              if (uVar18 + 3 == 8) goto LAB_02526600;
              pbVar16 = PTR_DAT_04bb5038 + uVar18 + 3;
              uVar12 = FUN_02507924(local_74,pbVar16);
              if ((uVar12 & 1) == 0) {
                if (uVar18 + 4 == 8) goto LAB_02526600;
                pbVar16 = PTR_DAT_04bb5038 + uVar18 + 4;
                uVar12 = FUN_02507924(local_74,pbVar16);
                if ((uVar12 & 1) == 0) {
                  if (uVar18 + 5 == 8) goto LAB_02526600;
                  pbVar16 = PTR_DAT_04bb5038 + uVar18 + 5;
                  uVar12 = FUN_02507924(local_74,pbVar16);
                  if ((uVar12 & 1) == 0) {
                    if (uVar18 + 6 == 8) goto LAB_02526600;
                    pbVar16 = PTR_DAT_04bb5038 + uVar18 + 6;
                    uVar12 = FUN_02507924(local_74,pbVar16);
                    if ((uVar12 & 1) == 0) {
                      if (uVar18 + 7 == 8) goto LAB_02526600;
                      pbVar16 = PTR_DAT_04bb5038 + uVar18 + 7;
                      uVar12 = FUN_02507924(local_74,pbVar16);
                      if ((uVar12 & 1) == 0) {
                        if (bVar8 == 0) goto LAB_02526600;
                        pbVar16 = PTR_DAT_04bb5038 + uVar18 + 8;
                        FUN_02507924(local_74,pbVar16);
                      }
                    }
                  }
                }
              }
            }
          }
          uVar13 = (uint)*pbVar16;
          if (7 < uVar13) {
            uVar13 = 0xff;
          }
        }
        local_74[0] = CONCAT31(local_74[0]._1_3_,(char)uVar13);
      }
      if (7 < uVar13) {
        return bVar17;
      }
    } while( true );
  }
  if ((ulong)*param_1 < 8) {
    puVar2 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar2 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar13 = *puVar2;
  }
  else {
    uVar13 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar13 == 0) {
    return false;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return false;
  }
  plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar15 == (long *)0x0) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar15 + 0x46) != uVar13)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar4;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar13 = 1;
      goto joined_r0x02526a0c;
    }
    if (*(uint *)(lVar14 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02526a0c;
    }
  }
  uVar13 = 0;
joined_r0x02526a0c:
  if (plVar15 == (long *)0x0) {
    return false;
  }
  lVar14 = plVar15[0x2a];
  uVar3 = *(uint *)(plVar15 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar10 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
  if ((int)lVar14 != 1) {
    return false;
  }
  if ((uVar10 & uVar13) == 0) {
    return false;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    return false;
  }
  uVar13 = 0;
  if (plVar15[0xe] != 0) {
    uVar3 = *(uint *)(plVar15[0xe] + 0x280);
    uVar13 = 0;
    if (uVar3 < 0x149) {
      uVar13 = uVar3;
    }
  }
  return uVar13 == 0x135;
}

