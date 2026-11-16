
undefined8 FUN_02525370(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  byte local_80 [4];
  byte local_7c [12];
  undefined *local_70;
  char *pcStack_68;
  
  puVar5 = PTR_DAT_04bb27c0;
  if (((param_2 & 1) == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
    if ((ulong)*param_1 < 8) {
      puVar3 = (uint *)PTR_DAT_04bb3238;
      if (DAT_054f5738 != 0) {
        puVar3 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
      uVar7 = *puVar3;
    }
    else {
      uVar7 = *(uint *)PTR_DAT_04bb3238;
    }
    if ((uVar7 != 0) && (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 != 0)) {
      plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                          ((ulong)(uVar7 >> 0x11) & 0x7ff8));
      if ((plVar15 == (long *)0x0) ||
         (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar7)))) {
        plVar15 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar8 = (**(code **)(*plVar11 + 0x60))();
        if (iVar8 < 0x11) {
          uVar7 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_025258b8;
          uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_025258b8:
        uVar7 = 0;
      }
      if (plVar15 != (long *)0x0) {
        lVar14 = plVar15[0x2a];
        uVar19 = *(uint *)(plVar15 + 0x49);
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar10 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
        if ((int)lVar14 != 1) {
          return 0;
        }
        if ((uVar10 & uVar7) == 0) {
          return 0;
        }
        if ((uVar19 >> 4 & 1) == 0) {
          return 0;
        }
        FUN_0241c62c(plVar15,0);
        if ((7 < *(byte *)(*(long *)PTR_DAT_04bb4128 + 0x269)) ||
           (((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0 &&
             (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) ||
            ((*(ushort *)(*(long *)PTR_DAT_04bb4128 + 0x26e) >> (ulong)(*param_1 & 0x1f) & 1) != 0))
           )) {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "PV_Cafe_DrinkCoffee";
          FUN_01b5c520(&local_70,1,param_1);
          return 1;
        }
        goto LAB_0252599c;
      }
    }
LAB_025259ac:
    uVar17 = 0;
  }
  else {
    uVar7 = nn::os::GetSystemTick();
    FUN_02507c6c(local_7c,1,1,0,0);
    puVar5 = PTR_DAT_04bb32e0;
    uVar18 = (ulong)local_7c[0];
    if (local_7c[0] < 8) {
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      uVar19 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
      uVar10 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 3;
      uVar20 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4;
      puVar1 = PTR_DAT_04bb3780 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_80[0] = (byte)uVar18;
        uVar13 = (uint)(byte)*puVar5;
        if (7 < uVar13) {
          uVar13 = 0xff;
        }
        if ((uint)uVar18 != uVar13) {
          puVar3 = (uint *)PTR_DAT_04bb3238;
          if (DAT_054f5738 != 0) {
            puVar3 = (uint *)(DAT_054f5738 + uVar18 * 4 + 0xde8);
          }
          uVar13 = *puVar3;
          if ((uVar13 == 0) || (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 == 0)) goto LAB_025259ac;
          plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar13 >> 0x11) & 0x7ff8));
          if ((plVar15 == (long *)0x0) ||
             (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar13))))
          {
            plVar15 = (long *)0x0;
          }
          if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
            plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar14 = *(long *)PTR_DAT_04bb27c0;
            iVar8 = (**(code **)(*plVar11 + 0x60))();
            if (iVar8 < 0x11) {
              uVar13 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_02525630;
              uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_02525630:
            uVar13 = 0;
          }
          if (plVar15 == (long *)0x0) goto LAB_025259ac;
          lVar14 = plVar15[0x2a];
          uVar4 = *(uint *)(plVar15 + 0x49);
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
          if ((((int)lVar14 != 1) || ((uVar9 & uVar13) == 0)) || ((uVar4 >> 4 & 1) == 0))
          goto LAB_025259ac;
          uVar7 = uVar7 ^ uVar7 << 0xb;
          uVar13 = uVar7 >> 8 ^ uVar20 >> 0x13 ^ uVar7 ^ uVar20;
          FUN_0241c62c(plVar15,(ulong)uVar13 * 0x15 >> 0x20);
          if (((7 < *(byte *)(*(long *)PTR_DAT_04bb4128 + 0x269)) ||
              ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0 &&
               (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)))) ||
             ((*(ushort *)(*(long *)PTR_DAT_04bb4128 + 0x26e) >> (ulong)(local_80[0] & 0x1f) & 1) !=
              0)) {
            pcStack_68 = "PV_Cafe_DrinkCoffee";
            local_70 = puVar2;
            FUN_01b5c520(&local_70,1,local_80);
          }
          bVar6 = local_7c[0];
          uVar18 = (ulong)local_7c[0];
          if (local_7c[0] < 8) {
            if (uVar18 + 1 == 8) {
LAB_02525524:
              uVar18 = 0xff;
            }
            else {
              pbVar16 = PTR_DAT_04bb5038 + uVar18 + 1;
              uVar12 = FUN_02507924(local_7c,pbVar16);
              if ((uVar12 & 1) == 0) {
                if (uVar18 + 2 == 8) goto LAB_02525524;
                pbVar16 = PTR_DAT_04bb5038 + uVar18 + 2;
                uVar12 = FUN_02507924(local_7c,pbVar16);
                if ((uVar12 & 1) == 0) {
                  if (uVar18 + 3 == 8) goto LAB_02525524;
                  pbVar16 = PTR_DAT_04bb5038 + uVar18 + 3;
                  uVar12 = FUN_02507924(local_7c,pbVar16);
                  if ((uVar12 & 1) == 0) {
                    if (uVar18 + 4 == 8) goto LAB_02525524;
                    pbVar16 = PTR_DAT_04bb5038 + uVar18 + 4;
                    uVar12 = FUN_02507924(local_7c,pbVar16);
                    if ((uVar12 & 1) == 0) {
                      if (uVar18 + 5 == 8) goto LAB_02525524;
                      pbVar16 = PTR_DAT_04bb5038 + uVar18 + 5;
                      uVar12 = FUN_02507924(local_7c,pbVar16);
                      if ((uVar12 & 1) == 0) {
                        if (uVar18 + 6 == 8) goto LAB_02525524;
                        pbVar16 = PTR_DAT_04bb5038 + uVar18 + 6;
                        uVar12 = FUN_02507924(local_7c,pbVar16);
                        if ((uVar12 & 1) == 0) {
                          if (uVar18 + 7 == 8) goto LAB_02525524;
                          pbVar16 = PTR_DAT_04bb5038 + uVar18 + 7;
                          uVar12 = FUN_02507924(local_7c,pbVar16);
                          if ((uVar12 & 1) == 0) {
                            if (bVar6 == 0) goto LAB_02525524;
                            pbVar16 = PTR_DAT_04bb5038 + uVar18 + 8;
                            FUN_02507924(local_7c,pbVar16);
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar7 = (uint)*pbVar16;
              if (7 < uVar7) {
                uVar7 = 0xff;
              }
              uVar18 = (ulong)uVar7;
            }
            local_7c[0] = (byte)uVar18;
          }
          uVar7 = uVar19;
          uVar19 = uVar10;
          uVar10 = uVar20;
          uVar20 = uVar13;
        }
      } while ((uint)uVar18 < 8);
    }
LAB_0252599c:
    uVar17 = 1;
  }
  return uVar17;
}

