
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02525a10(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  byte *pbVar17;
  uint uVar18;
  byte local_6c [12];
  
  puVar3 = PTR_DAT_04bb27c0;
  if (((param_2 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    uVar5 = nn::os::GetSystemTick();
    FUN_02507c6c(local_6c,1,1,0,0);
    puVar3 = PTR_DAT_04bb32e0;
    uVar11 = (uint)local_6c[0];
    if (local_6c[0] < 8) {
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
      uVar15 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar18 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4;
      puVar1 = PTR_DAT_04bb3780 + 0x10;
      do {
        uVar13 = (uint)(byte)*puVar3;
        if (7 < uVar13) {
          uVar13 = 0xff;
        }
        if (uVar11 != uVar13) {
          puVar2 = (uint *)PTR_DAT_04bb3238;
          if (DAT_054f5738 != 0) {
            puVar2 = (uint *)(DAT_054f5738 + (ulong)uVar11 * 4 + 0xde8);
          }
          uVar11 = *puVar2;
          if (uVar11 == 0) {
            return 0;
          }
          lVar12 = *(long *)PTR_DAT_04bb27c0;
          if (lVar12 == 0) {
            return 0;
          }
          plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8));
          if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar16 + 0x46) != uVar11)) {
            plVar16 = (long *)0x0;
          }
          if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar12 = *(long *)PTR_DAT_04bb27c0;
            iVar6 = (**(code **)(*plVar9 + 0x60))();
            if (iVar6 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02525c10;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_02525c10:
            uVar11 = 0;
          }
          if (plVar16 == (long *)0x0) {
            return 0;
          }
          lVar12 = plVar16[0x2a];
          uVar13 = *(uint *)(plVar16 + 0x49);
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3770);
          if ((int)lVar12 != 1) {
            return 0;
          }
          if ((uVar7 & uVar11) == 0) {
            return 0;
          }
          if ((uVar13 >> 4 & 1) == 0) {
            return 0;
          }
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar13 = uVar5 >> 8 ^ uVar18 >> 0x13 ^ uVar5 ^ uVar18;
          FUN_0241cf70(plVar16,(ulong)uVar13 * 0x15 >> 0x20);
          bVar4 = local_6c[0];
          uVar14 = (ulong)local_6c[0];
          if (7 < local_6c[0]) {
            return 1;
          }
          if (uVar14 + 1 == 8) {
LAB_02525b04:
            uVar11 = 0xff;
          }
          else {
            pbVar17 = PTR_DAT_04bb5038 + uVar14 + 1;
            uVar10 = FUN_02507924(local_6c,pbVar17);
            if ((uVar10 & 1) == 0) {
              if (uVar14 + 2 == 8) goto LAB_02525b04;
              pbVar17 = PTR_DAT_04bb5038 + uVar14 + 2;
              uVar10 = FUN_02507924(local_6c,pbVar17);
              if ((uVar10 & 1) == 0) {
                if (uVar14 + 3 == 8) goto LAB_02525b04;
                pbVar17 = PTR_DAT_04bb5038 + uVar14 + 3;
                uVar10 = FUN_02507924(local_6c,pbVar17);
                if ((uVar10 & 1) == 0) {
                  if (uVar14 + 4 == 8) goto LAB_02525b04;
                  pbVar17 = PTR_DAT_04bb5038 + uVar14 + 4;
                  uVar10 = FUN_02507924(local_6c,pbVar17);
                  if ((uVar10 & 1) == 0) {
                    if (uVar14 + 5 == 8) goto LAB_02525b04;
                    pbVar17 = PTR_DAT_04bb5038 + uVar14 + 5;
                    uVar10 = FUN_02507924(local_6c,pbVar17);
                    if ((uVar10 & 1) == 0) {
                      if (uVar14 + 6 == 8) goto LAB_02525b04;
                      pbVar17 = PTR_DAT_04bb5038 + uVar14 + 6;
                      uVar10 = FUN_02507924(local_6c,pbVar17);
                      if ((uVar10 & 1) == 0) {
                        if (uVar14 + 7 == 8) goto LAB_02525b04;
                        pbVar17 = PTR_DAT_04bb5038 + uVar14 + 7;
                        uVar10 = FUN_02507924(local_6c,pbVar17);
                        if ((uVar10 & 1) == 0) {
                          if (bVar4 == 0) goto LAB_02525b04;
                          pbVar17 = PTR_DAT_04bb5038 + uVar14 + 8;
                          FUN_02507924(local_6c,pbVar17);
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar11 = (uint)*pbVar17;
            if (7 < uVar11) {
              uVar11 = 0xff;
            }
          }
          local_6c[0] = (byte)uVar11;
          uVar5 = uVar8;
          uVar8 = uVar15;
          uVar15 = uVar18;
          uVar18 = uVar13;
        }
      } while (uVar11 < 8);
    }
    return 1;
  }
  if ((ulong)*param_1 < 8) {
    puVar2 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar2 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar11 = *puVar2;
  }
  else {
    uVar11 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 0;
  }
  plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8)
                      );
  if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar16 + 0x46) != uVar11)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
      goto joined_r0x02525f34;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02525f34;
    }
  }
  uVar11 = 0;
joined_r0x02525f34:
  if (plVar16 == (long *)0x0) {
    return 0;
  }
  lVar12 = plVar16[0x2a];
  uVar5 = *(uint *)(plVar16 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3770);
  if ((int)lVar12 != 1) {
    return 0;
  }
  if ((uVar8 & uVar11) == 0) {
    return 0;
  }
  if ((uVar5 >> 4 & 1) == 0) {
    return 0;
  }
  FUN_0241cf70(plVar16,0);
  return 1;
}

