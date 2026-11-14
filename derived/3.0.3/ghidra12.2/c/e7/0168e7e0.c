
/* WARNING: Removing unreachable block (ram,0x0168f02c) */

void FUN_0168e7e0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  uint local_98;
  uint uStack_94;
  undefined *local_90;
  uint local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_74;
  uint local_6c;
  
  local_74 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_74);
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    puVar16 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar16 + 0x38))();
      lVar15 = 0;
      if (lVar13 != 0) {
        lVar15 = lVar13 + 0x70;
      }
      goto LAB_0168e86c;
    }
    if (puVar16 != (undefined8 *)0x0) {
      lVar15 = 0;
      if ((long *)puVar16[0x26] != (long *)0x0) {
        lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
      }
      goto LAB_0168e86c;
    }
  }
  lVar15 = 0;
LAB_0168e86c:
  if ((*(long **)(lVar15 + 0x1c24e8) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x1c24e8), puVar16 == (undefined8 *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)*puVar16)();
    uVar14 = uVar14 & 0xffffffff;
  }
  local_90 = (undefined *)
             (ulong)*(ushort *)(*(long *)(lVar15 + 0x1c24d0) + *(long *)(lVar15 + 0x1c24c8) + 0x900)
  ;
  FUN_0277d4ac(&local_90);
  local_74 = local_90;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x1c24e8) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x1c24e8) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  local_88 = 0;
  puVar16 = &DAT_055c04a0;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x330) != 0)) {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar11 = FUN_006bd550(*puVar16,0);
    puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar11 != 0x758f7eaf) {
      puVar16 = &DAT_055c04a0;
    }
  }
  local_84 = *(undefined4 *)(puVar16 + 7);
  local_80 = FUN_017baf44();
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  lVar15 = FUN_01a4fa00(&local_90);
  puVar10 = PTR_DAT_04bb43c0;
  uVar1 = *(int *)(lVar15 + 0x24) + 1;
  uVar21 = *(uint *)(lVar15 + 0x14);
  if (uVar1 != uVar21) {
    uVar9 = *(uint *)(lVar15 + 0x10);
    puVar2 = PTR_DAT_04bbbad8 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    puVar5 = PTR_DAT_04bbfe68 + 0x10;
    puVar6 = PTR_DAT_04bb5438 + 0x10;
    uVar20 = uVar9;
    do {
      local_a8 = 0;
      local_b0 = puVar3;
      puStack_a0 = puVar2;
      local_98 = uVar20;
      uStack_94 = uVar21;
      FUN_01a5033c(&local_b8,&local_90,0,&puStack_a0,&local_b0);
      lVar22 = *(long *)puVar10;
      uVar12 = FUN_0277d6c4(&local_b8);
      lVar13 = *(long *)puVar10;
      if (lVar13 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          local_c0 = 0;
          local_d0 = PTR_DAT_04bc0510 + 0x10;
          local_c8 = local_b8;
          uStack_c4 = uStack_b4;
          uVar12 = FUN_0277d6c4(&local_c8);
          if (*(long *)puVar10 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_b8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if (uVar12 < *(uint *)(lVar13 + 0x1d8)) {
                lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8);
                if (lVar13 != 0) {
                  local_c0 = lVar13;
                }
              }
            }
          }
          iVar11 = FUN_0277d6c4(&local_b8);
          if ((iVar11 == 0x595) && (uVar14 = FUN_01ae59b0(&local_d0), (uVar14 & 1) != 0)) {
            local_e0 = 0;
            lVar13 = *(long *)PTR_DAT_04bb2720;
            local_e8 = puVar5;
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0x330) == 0)) {
              puVar16 = &DAT_055c04a0;
            }
            else {
              puVar16 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
              iVar11 = FUN_006bd550(*puVar16,0);
              puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar11 != 0x758f7eaf) {
                puVar16 = &DAT_055c04a0;
              }
            }
            local_dc = *(undefined4 *)(puVar16 + 7);
            local_d8 = FUN_017baf44();
            local_d8 = local_d8 & 1;
            local_e8 = puVar6;
            FUN_014fd424(&local_e8,1,&local_b0,0);
          }
        }
      }
      if (((local_98 | uStack_94) & 1) == 0) {
        lVar22 = *(long *)puVar10;
        uVar12 = FUN_0277d6c4(&local_b8);
        lVar13 = *(long *)puVar10;
        if (lVar13 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            local_c0 = 0;
            local_d0 = PTR_DAT_04bc0510 + 0x10;
            local_c8 = local_b8;
            uStack_c4 = uStack_b4;
            uVar12 = FUN_0277d6c4(&local_c8);
            if (*(long *)puVar10 == 0) {
LAB_0168ed40:
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x57);
              local_6c = 0xbc;
            }
            else {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((*(uint *)(lVar13 + 0x1d8) <= uVar12) ||
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
              goto LAB_0168ed40;
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_b8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((*(uint *)(lVar13 + 0x1d8) <= uVar12) ||
                 (puVar18 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8),
                 puVar18 == (uint *)0x0)) goto LAB_0168ed40;
              local_6c = 0;
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x57);
              uVar12 = *puVar18;
              if ((uVar12 != 0) && (puVar18 != (uint *)(ulong)uVar12)) {
                puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
                local_6c = 0;
                if (*puVar19 != 0) {
                  uVar12 = puVar19[1];
                  if ((uVar12 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar19 + 10) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
                    if (lVar13 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar12 != 0) {
                        uVar8 = (uint)((ulong)((long)puVar18 - lVar13) / (ulong)uVar12);
                      }
                      if (*puVar19 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_6c = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2)
                         , local_6c < 0xbd)) goto LAB_0168ed4c;
                    }
                  }
                  local_6c = 0;
                }
              }
            }
LAB_0168ed4c:
            if (local_6c == (uint)local_e8) {
              FUN_011f3390(&local_90,0,&local_74,&local_b0);
              goto LAB_0168efd0;
            }
            lVar13 = *(long *)puVar10;
          }
        }
        uVar12 = FUN_0277d6c4(&local_b8);
        lVar22 = *(long *)puVar10;
        if (lVar22 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            local_c0 = 0;
            local_c8 = local_b8;
            uStack_c4 = uStack_b4;
            local_d0 = puVar4;
            uVar12 = FUN_0277d6c4(&local_c8);
            if (*(long *)puVar10 == 0) {
LAB_0168eed0:
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x6c);
              local_6c = 0xbc;
            }
            else {
              lVar13 = *(long *)(lVar22 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((*(uint *)(lVar13 + 0x1d8) <= uVar12) ||
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
              goto LAB_0168eed0;
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_b8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((*(uint *)(lVar13 + 0x1d8) <= uVar12) ||
                 (puVar18 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8),
                 puVar18 == (uint *)0x0)) goto LAB_0168eed0;
              local_6c = 0;
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x6c);
              uVar12 = *puVar18;
              if ((uVar12 != 0) && (puVar18 != (uint *)(ulong)uVar12)) {
                puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
                local_6c = 0;
                if (*puVar19 != 0) {
                  uVar12 = puVar19[1];
                  if ((uVar12 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar19 + 10) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
                    if (lVar13 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar12 != 0) {
                        uVar8 = (uint)((ulong)((long)puVar18 - lVar13) / (ulong)uVar12);
                      }
                      if (*puVar19 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_6c = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2)
                         , local_6c < 0xbd)) goto LAB_0168eedc;
                    }
                  }
                  local_6c = 0;
                }
              }
            }
LAB_0168eedc:
            if (local_6c == (uint)local_e8) {
              uVar14 = FUN_01a4f798(&local_90,0,&local_b0);
              if ((uVar14 & 1) == 0) goto LAB_0168efd0;
              if (local_88 == 0) {
                local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
LAB_0168f008:
                plVar17 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_0168f00c:
                lVar13 = *plVar17;
              }
              else {
                local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_88);
                if (local_88 != 0) {
                  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,local_88);
                  if (local_88 == 0) goto LAB_0168f008;
                  plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                  plVar17 = plVar7 + local_88;
                  if (0x38 < local_88) {
                    plVar17 = plVar7;
                  }
                  goto LAB_0168f00c;
                }
                lVar13 = 0;
              }
              local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
              if (*(long *)(lVar13 + 0xd0) != 0) {
                FUN_012e5af4(*(long *)(lVar13 + 0xd0),&local_b0);
              }
              goto LAB_0168efd0;
            }
          }
        }
        if ((*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1) &&
           ((iVar11 = FUN_0277d6c4(&local_b8), iVar11 == 0xeacb ||
            (iVar11 = FUN_0277d6c4(&local_b8), iVar11 == 0xec23)))) {
          FUN_011f3520(&local_90,0,&local_b0);
          local_d0 = (undefined *)0xead6;
          FUN_0277d4ac(&local_d0);
          FUN_011f3880(&local_90,0,&local_d0,&local_b0);
        }
      }
LAB_0168efd0:
      if ((int)uVar20 < *(int *)(lVar15 + 0x20)) {
        uVar20 = uVar20 + 1;
      }
      else {
        uVar21 = uVar21 + 1;
        uVar20 = *(uint *)(lVar15 + 0x10);
      }
    } while ((uVar9 != uVar20) || (uVar1 != uVar21));
  }
  return;
}

