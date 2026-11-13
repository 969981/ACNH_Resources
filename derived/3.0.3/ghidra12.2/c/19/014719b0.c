
/* WARNING: Removing unreachable block (ram,0x01472204) */
/* WARNING: Removing unreachable block (ram,0x014721f4) */
/* WARNING: Removing unreachable block (ram,0x0147222c) */

void FUN_014719b0(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  puVar7 = PTR_DAT_04bb5928;
  puVar3 = PTR_DAT_04bb5920;
  if ((((*param_2 >> 3 & 1) == 0) && (*(int *)(param_1 + 0x300) != 0)) &&
     (lVar20 = *(long *)(param_1 + 0x2f8), lVar20 != param_1 + 0x2f0)) {
    lVar16 = lVar20 + -8;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    do {
      lVar20 = *(long *)(lVar20 + 8);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x230));
      FUN_0071c8d0(&local_78,lVar16,&local_88,0);
      plVar21 = local_78;
      if (local_78 != (long *)0x0) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar7);
        }
        uVar14 = (**(code **)(*plVar21 + 0x20))(plVar21,puVar3);
        if ((uVar14 & 1) == 0) {
          local_70._0_2_ = (ushort)(byte)local_70;
        }
      }
      if ((local_70._1_1_ != '\0') && (local_78 != (long *)0x0)) {
        FUN_014719b0(local_78,param_2);
      }
      lVar16 = lVar20 + -8;
    } while (lVar16 != param_1 + 0x2e8);
  }
  puVar3 = PTR_DAT_04bb6258;
  uVar6 = *(ushort *)(param_1 + 0x284);
  uVar14 = (ulong)uVar6;
  if ((uVar14 < 1000) &&
     (piVar4 = (int *)(PTR_DAT_04bb6258 + uVar14 * 0x10), *piVar4 == *(int *)(param_1 + 0x230))) {
    *piVar4 = 0;
    puVar7 = PTR_DAT_04bb6260;
    piVar4[2] = -1;
    piVar4[3] = -1;
    if (*(uint *)puVar7 == (uint)uVar6) {
      do {
        uVar12 = (uint)uVar14;
        piVar4 = (int *)(puVar3 + uVar14 * 0x10);
        if (999 < uVar12) {
          piVar4 = (int *)puVar3;
        }
        if (*piVar4 != 0) goto LAB_01471b20;
        uVar14 = (ulong)(uVar12 - 1);
        *(uint *)puVar7 = uVar12 - 1;
      } while (0 < (int)uVar12);
      *(undefined4 *)puVar7 = 0xffffffff;
    }
  }
LAB_01471b20:
  puVar8 = PTR_DAT_04bb5928;
  puVar1 = PTR_DAT_04bb5920;
  puVar7 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if ((*param_2 >> 1 & 1) != 0) {
    if ((*param_2 >> 3 & 1) == 0) {
      if ((*(int *)(param_1 + 0x300) != 0) &&
         (lVar20 = *(long *)(param_1 + 0x2f8), lVar20 != param_1 + 0x2f0)) {
        puVar17 = (uint *)(lVar20 + -8);
        puVar2 = PTR_DAT_04bb3290 + 0x10;
        do {
          lVar20 = *(long *)(lVar20 + 8);
          lVar16 = *(long *)puVar3;
          if (lVar16 != 0) {
            uVar12 = *puVar17;
            if ((((uVar12 == 0) ||
                 (plVar21 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                      ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0))
                || ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar21 + 0x46) != uVar12)) {
              plVar21 = (long *)0x0;
            }
            if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
              plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
              lVar16 = *(long *)puVar3;
              iVar10 = (**(code **)(*plVar15 + 0x60))();
              if (iVar10 < 0x11) {
                uVar12 = 1;
              }
              else {
                uVar12 = *(uint *)(lVar16 + 0x5e8);
                if (4 < uVar12) goto LAB_01471c30;
                uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
              }
            }
            else {
LAB_01471c30:
              uVar12 = 0;
            }
            if (plVar21 != (long *)0x0) {
              if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                *(undefined **)puVar1 = puVar2;
                __cxa_guard_release(puVar8);
              }
              uVar11 = (**(code **)(*plVar21 + 0x20))(plVar21,puVar1);
              if ((uVar12 & uVar11) == 1) {
                FUN_01472270(plVar21,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
              }
            }
          }
          puVar17 = (uint *)(lVar20 + -8);
        } while (puVar17 != (uint *)(param_1 + 0x2e8));
      }
      puVar7 = PTR_DAT_04bc0510;
      puVar3 = PTR_DAT_04bb43c0;
      local_78 = (long *)CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x2d0));
      if (*(int *)(param_1 + 0x2d0) == 0) {
        local_80 = 0;
        local_70 = *(undefined4 *)(param_1 + 0x288);
        local_68 = 0;
        local_78 = (long *)(PTR_DAT_04bc0510 + 0x10);
        local_6c = *(undefined4 *)(param_1 + 0x28c);
        lVar20 = *(long *)PTR_DAT_04bb43c0;
        uVar12 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(param_1 + 0x288);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (uVar12 < *(uint *)(lVar20 + 0x1d8)) {
              lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8);
              if (lVar20 != 0) {
                local_68 = lVar20;
              }
            }
          }
        }
        FUN_01afb1a0(&local_78,&local_88);
        uVar12 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
        local_90 = CONCAT44(local_90._4_4_,uVar12);
        local_78 = (long *)CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x2d0));
        iVar18 = (int)local_80;
        iVar10 = local_80._4_4_;
        if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
          iVar10 = (int)local_80;
          iVar18 = local_80._4_4_;
          if ((uVar12 & 0x80000001) != 1) {
            iVar10 = local_80._4_4_;
            iVar18 = (int)local_80;
          }
        }
        local_70 = 0;
        iVar5 = *(int *)(param_1 + 0x2c8);
        iVar22 = *(int *)(param_1 + 0x2cc);
        lVar20 = *(long *)PTR_DAT_04bb2720;
        if (lVar20 == 0) {
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = &DAT_055c04a0;
          if (*(long *)(lVar20 + 0x330) != 0) {
            puVar19 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
            iVar13 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar13 != 0x758f7eaf) {
              puVar19 = &DAT_055c04a0;
            }
          }
        }
        local_6c = *(undefined4 *)(puVar19 + 7);
        uVar9 = FUN_017baf44();
        local_68 = CONCAT71(local_68._1_7_,uVar9) & 0xffffffffffffff01;
        local_78 = (long *)(PTR_DAT_04bb3140 + 0x10);
        local_90 = 0xfffe;
        FUN_0277d4ac(&local_90);
        if (iVar10 != 0) {
          iVar10 = iVar22 + iVar10;
          puVar3 = PTR_DAT_04bb2010 + 0x10;
          iVar13 = iVar5;
          do {
            local_80 = CONCAT44(iVar22,iVar13);
            local_88 = puVar3;
            FUN_01a50240(&local_98,&local_78,1,&local_88);
            local_90 = CONCAT44(uStack_94,local_98);
            uVar14 = FUN_0277e158(&local_90);
            puVar1 = PTR_DAT_04bb43c0;
            if ((uVar14 & 1) != 0) {
              local_70 = *(undefined4 *)(param_1 + 0x288);
              local_78 = (long *)(puVar7 + 0x10);
              local_80 = 0;
              local_6c = *(undefined4 *)(param_1 + 0x28c);
              local_68 = 0;
              lVar20 = *(long *)PTR_DAT_04bb43c0;
              uVar12 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar1 != 0) {
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                  lVar20 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(param_1 + 0x288);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                  if (uVar12 < *(uint *)(lVar20 + 0x1d8)) {
                    lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8);
                    if (lVar20 != 0) {
                      local_68 = lVar20;
                    }
                  }
                }
              }
              FUN_01afb1a0(&local_78,&local_88);
              puVar3 = PTR_DAT_04bb3140;
              uVar12 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
              local_90 = CONCAT44(local_90._4_4_,uVar12);
              local_78 = (long *)CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x2d0));
              iVar18 = (int)local_80;
              iVar10 = local_80._4_4_;
              if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
                iVar10 = (int)local_80;
                iVar18 = local_80._4_4_;
                if ((uVar12 & 0x80000001) != 1) {
                  iVar10 = local_80._4_4_;
                  iVar18 = (int)local_80;
                }
              }
              local_70 = 0;
              iVar5 = *(int *)(param_1 + 0x2c8);
              iVar22 = *(int *)(param_1 + 0x2cc);
              lVar20 = *(long *)PTR_DAT_04bb2720;
              if (lVar20 == 0) {
                puVar19 = &DAT_055c04a0;
              }
              else {
                puVar19 = &DAT_055c04a0;
                if (*(long *)(lVar20 + 0x330) != 0) {
                  puVar19 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
                  iVar13 = FUN_006bd550(*puVar19,0);
                  puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar13 != 0x758f7eaf) {
                    puVar19 = &DAT_055c04a0;
                  }
                }
              }
              local_6c = *(undefined4 *)(puVar19 + 7);
              uVar9 = FUN_017baf44();
              local_68 = CONCAT71(local_68._1_7_,uVar9) & 0xffffffffffffff01;
              local_78 = (long *)(puVar3 + 0x10);
              local_90 = 0xfffe;
              FUN_0277d4ac(&local_90);
              puVar7 = PTR_DAT_04bb4778;
              puVar3 = PTR_DAT_04bb27a8;
              if (iVar10 != 0) {
                iVar10 = iVar22 + iVar10;
                puVar1 = PTR_DAT_04bb2010 + 0x10;
                iVar13 = iVar5;
                do {
                  local_80 = CONCAT44(iVar22,iVar13);
                  local_88 = puVar1;
                  FUN_01a50240(&local_98,&local_78,1,&local_88);
                  local_90 = CONCAT44(uStack_94,local_98);
                  uVar14 = FUN_0277e158(&local_90);
                  if ((uVar14 & 1) != 0) {
                    uVar14 = FUN_01a4f798(&local_78,1,&local_88);
                    if ((uVar14 & 1) != 0) {
                      local_98 = 1;
                      lVar20 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0xe0);
                      if (lVar20 != 0) {
                        FUN_012e5af4(lVar20,&local_88);
                      }
                    }
                    FUN_01225ba0(*(undefined8 *)puVar7,&local_88,0);
                  }
                  if (iVar13 < iVar18 + iVar5 + -1) {
                    iVar13 = iVar13 + 1;
                  }
                  else {
                    iVar22 = iVar22 + 1;
                    iVar13 = iVar5;
                  }
                } while ((iVar5 != iVar13) || (iVar10 != iVar22));
              }
              break;
            }
            if (iVar13 < iVar18 + iVar5 + -1) {
              iVar13 = iVar13 + 1;
            }
            else {
              iVar22 = iVar22 + 1;
              iVar13 = iVar5;
            }
          } while ((iVar5 != iVar13) || (iVar10 != iVar22));
        }
      }
    }
    FUN_01472270(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_014786e0(param_1);
    puVar3 = PTR_DAT_04bb3238;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)puVar3;
  }
  if ((*param_2 >> 4 & 1) == 0) {
    if ((*param_2 & 1) != 0) {
      local_78 = (long *)CONCAT44(local_78._4_4_,9);
      lVar20 = *(long *)(param_1 + 0x70);
      if ((lVar20 != 0) && (*(int *)(lVar20 + 0x280) != 9)) {
        FUN_03ebb160(lVar20 + 0x278);
      }
      FUN_006fb3d0(param_1);
      return;
    }
    iVar10 = 3;
  }
  else {
    iVar10 = 0xb;
  }
  local_78 = (long *)CONCAT44(local_78._4_4_,iVar10);
  lVar20 = *(long *)(param_1 + 0x70);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0x280) != iVar10)) {
    FUN_03ebb160(lVar20 + 0x278);
  }
  return;
}

