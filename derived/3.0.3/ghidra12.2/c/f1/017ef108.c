
/* WARNING: Removing unreachable block (ram,0x017ef174) */
/* WARNING: Removing unreachable block (ram,0x017efa34) */

void FUN_017ef108(long param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 uVar20;
  undefined1 *puVar21;
  undefined1 auStack_de [2];
  undefined1 auStack_dc [2];
  undefined1 auStack_da [2];
  undefined1 auStack_d8 [2];
  undefined1 auStack_d6 [2];
  undefined1 auStack_d4 [2];
  undefined1 auStack_d2 [2];
  undefined1 auStack_d0 [2];
  undefined1 auStack_ce [2];
  undefined1 auStack_cc [2];
  undefined1 auStack_ca [2];
  undefined1 auStack_c8 [2];
  undefined1 auStack_c6 [2];
  undefined1 auStack_c4 [2];
  undefined1 auStack_c2 [2];
  undefined1 auStack_c0 [2];
  undefined1 auStack_be [2];
  undefined1 auStack_bc [2];
  undefined1 auStack_ba [2];
  undefined1 auStack_b8 [2];
  undefined1 auStack_b6 [2];
  undefined1 auStack_b4 [2];
  undefined1 auStack_b2 [2];
  undefined1 auStack_b0 [2];
  undefined1 auStack_ae [2];
  undefined1 auStack_ac [2];
  undefined1 auStack_aa [2];
  undefined8 local_a8;
  char *local_a0;
  undefined1 local_98;
  byte local_97;
  undefined1 auStack_8a [2];
  undefined1 auStack_88 [2];
  undefined1 auStack_86 [2];
  int local_84;
  undefined1 auStack_7e [2];
  undefined1 auStack_7c [2];
  undefined1 auStack_7a [2];
  undefined *local_78;
  long local_70;
  ulong local_68;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  FUN_017ebc00(param_1,0);
  puVar4 = PTR_DAT_04bb46b0;
  if ((param_2 & 1) == 0) {
    uVar3 = *(ushort *)PTR_DAT_04bb6298;
    uVar10 = (ulong)(short)uVar3;
    if (uVar10 == 0xffffffffffffffff) {
LAB_017ef43c:
      uVar10 = FUN_0180b3e0();
      if (((uVar10 & 1) == 0) && (uVar10 = FUN_0180b340(), (uVar10 & 1) == 0)) {
        uVar10 = FUN_0180b660();
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_017b7888(*(undefined8 *)PTR_DAT_04bb5ce0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          lVar17 = FUN_02643020();
          if (lVar17 == 0) {
            return;
          }
          uVar8 = FUN_0180da90();
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
          local_68 = local_68 & 0xffffffffffffff00;
          lVar18 = lVar17 + 0xe0 + (ulong)uVar8 * 0x2488;
          if (5 < uVar8) {
            lVar18 = lVar17 + 0xe0;
          }
          local_70 = lVar18 + 0x1ea0;
          if (*(long *)(lVar18 + 0x1ec8) == 0) {
            uVar5 = 0;
          }
          else {
            puVar12 = *(undefined8 **)(*(long *)(lVar18 + 0x1ec8) + 0x10);
            uVar5 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar12)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar5,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_78 = PTR_DAT_04bb4cb0 + 0x10;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar13 = FUN_017ebae8(&local_78);
          uVar5 = *(undefined1 *)(param_1 + 0xfe);
          uVar20 = *(undefined1 *)(param_1 + 0x13c);
          FUN_007ef010(auStack_da,param_1 + 0xd8);
          puVar21 = auStack_dc;
          FUN_007ef010(auStack_dc,param_1 + 0xfc);
          puVar15 = auStack_de;
          FUN_007ef010(auStack_de,param_1 + 0xbc);
          uVar16 = *(undefined4 *)(param_1 + 0x140);
          puVar14 = auStack_da;
        }
        else {
          lVar17 = FUN_016c7ab8();
          if (lVar17 == 0) {
            return;
          }
          local_70 = lVar17 + 0x118;
          local_68 = local_68 & 0xffffffffffffff00;
          if (*(long *)(lVar17 + 0x140) == 0) {
            uVar5 = 0;
          }
          else {
            puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x140) + 0x10);
            uVar5 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar12)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar5,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_78 = PTR_DAT_04bb4cb0 + 0x10;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar13 = FUN_017ebae8(&local_78);
          uVar5 = *(undefined1 *)(param_1 + 0xfe);
          uVar20 = *(undefined1 *)(param_1 + 0x13c);
          FUN_007ef010(auStack_d4,param_1 + 0xd8);
          puVar21 = auStack_d6;
          FUN_007ef010(auStack_d6,param_1 + 0xfc);
          puVar15 = auStack_d8;
          FUN_007ef010(auStack_d8,param_1 + 0xbc);
          uVar16 = *(undefined4 *)(param_1 + 0x140);
          puVar14 = auStack_d4;
        }
LAB_017efbe0:
        FUN_0285a20c(uVar13,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,uVar20,puVar14,
                     puVar21,puVar15,uVar16);
LAB_017efc08:
        FUN_02640184(&local_78);
        return;
      }
LAB_017ef44c:
      lVar17 = FUN_03776f00();
      if (lVar17 == 0) {
        return;
      }
      lVar18 = *(long *)(lVar17 + 0x140);
      if (lVar18 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x100);
        uVar10 = 0;
      }
      else {
        if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          lVar18 = *(long *)(lVar17 + 0x140);
          uVar10 = uVar10 & 0xffffffff;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          if (lVar18 == 0) goto LAB_017ef578;
        }
        plVar11 = *(long **)(lVar18 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(undefined **)(lVar17 + 0x120);
          local_70 = *(long *)(lVar17 + 0x128);
          local_68 = 0x24;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
LAB_017ef578:
      lVar18 = *(long *)(lVar17 + 0x120);
      lVar19 = *(long *)(lVar17 + 0x128);
      uVar5 = *(undefined1 *)(param_1 + 0xfe);
      uVar20 = *(undefined1 *)(param_1 + 0x13c);
      FUN_007ef010(auStack_ce,param_1 + 0xd8);
      FUN_007ef010(auStack_d0,param_1 + 0xfc);
      FUN_007ef010(auStack_d2,param_1 + 0xbc);
      FUN_0285a20c(lVar19 + lVar18,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,uVar20,
                   auStack_ce,auStack_d0,auStack_d2,*(undefined4 *)(param_1 + 0x140));
      if ((uVar10 & 1) == 0) {
        return;
      }
      lVar17 = *(long *)(lVar17 + 0x140);
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
      if (0xff < (uint)(int)(short)uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
        if (0xff < uVar3) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 7 & 1) != 0) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x138));
          lVar17 = *(long *)PTR_DAT_04bb46b0;
          if (lVar17 == 0) {
            return;
          }
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
          if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
            lVar17 = (**(code **)(*(long *)*puVar12 + 0x38))();
            if (lVar17 == 0) {
              return;
            }
            lVar17 = lVar17 + 0x70;
          }
          else {
            if (puVar12 == (undefined8 *)0x0) {
              return;
            }
            if ((long *)puVar12[0x26] == (long *)0x0) {
              return;
            }
            lVar17 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
            if (lVar17 == 0) {
              return;
            }
          }
          if (9 < (uint)local_78) {
            return;
          }
          lVar18 = lVar17 + 0x1962d8 + ((ulong)local_78 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_78) {
            lVar18 = lVar17 + 0x1962d8;
          }
          local_68 = CONCAT71(local_68._1_7_,1);
          local_70 = lVar18;
          if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar12 == (undefined8 *)0x0)) {
            bVar6 = 0;
          }
          else {
            bVar6 = (**(code **)*puVar12)();
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(bVar6,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_a8 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
          local_78 = PTR_DAT_04bb6ba8 + 0x10;
          cVar2 = *(char *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1c4);
          local_84 = (int)cVar2;
          uVar10 = FUN_0290d828();
          if ((uVar10 & 1) == 0) {
            local_a8 = PTR_DAT_04bb2020 + 0x10;
            local_a0 = "NpcInteriorCoordinate";
            iVar9 = FUN_02743000(&local_a8);
            if ((iVar9 == 0) || ((param_3 & 1) != 0)) {
              if ((param_3 & 1) == 0) {
                uVar10 = FUN_02663fa0(&local_84);
                if ((uVar10 & 1) == 0) {
                  lVar17 = FUN_0265c3e0((int)cVar2);
                  if (lVar17 != 0) {
                    local_98 = 0;
                    local_a0 = (char *)(lVar17 + 0xf928);
                    if (*(long *)(lVar17 + 0xf950) == 0) {
                      local_97 = 0;
                    }
                    else {
                      puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0xf950) + 0x10);
                      local_97 = 0;
                      if (puVar12 != (undefined8 *)0x0) {
                        local_97 = (**(code **)*puVar12)();
                      }
                    }
                    local_97 = local_97 & 1;
                    local_a8 = PTR_DAT_04bb4cb0 + 0x10;
                    uVar7 = *(undefined4 *)(param_1 + 0x100);
                    uVar13 = FUN_017ebae8(&local_a8);
                    uVar5 = *(undefined1 *)(param_1 + 0xfe);
                    uVar20 = *(undefined1 *)(param_1 + 0x13c);
                    FUN_007ef010(auStack_b6,param_1 + 0xd8);
                    FUN_007ef010(auStack_b8,param_1 + 0xfc);
                    puVar21 = auStack_ba;
                    FUN_007ef010(auStack_ba,param_1 + 0xbc);
                    uVar16 = *(undefined4 *)(param_1 + 0x140);
                    puVar15 = auStack_b6;
                    puVar14 = auStack_b8;
                    goto LAB_017efef4;
                  }
                }
                else {
                  lVar17 = FUN_02663e20(&local_84);
                  if (lVar17 != 0) {
                    local_a0 = (char *)(lVar17 + 0x118);
                    local_98 = 0;
                    if (*(long *)(lVar17 + 0x140) == 0) {
                      local_97 = 0;
                    }
                    else {
                      puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x140) + 0x10);
                      local_97 = 0;
                      if (puVar12 != (undefined8 *)0x0) {
                        local_97 = (**(code **)*puVar12)();
                      }
                    }
                    local_97 = local_97 & 1;
                    local_a8 = PTR_DAT_04bb4cb0 + 0x10;
                    uVar7 = *(undefined4 *)(param_1 + 0x100);
                    uVar13 = FUN_017ebae8(&local_a8);
                    uVar5 = *(undefined1 *)(param_1 + 0xfe);
                    uVar20 = *(undefined1 *)(param_1 + 0x13c);
                    FUN_007ef010(auStack_b0,param_1 + 0xd8);
                    FUN_007ef010(auStack_b2,param_1 + 0xfc);
                    puVar21 = auStack_b4;
                    FUN_007ef010(auStack_b4,param_1 + 0xbc);
                    uVar16 = *(undefined4 *)(param_1 + 0x140);
                    puVar15 = auStack_b0;
                    puVar14 = auStack_b2;
LAB_017efef4:
                    FUN_0285a20c(uVar13,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,
                                 uVar20,puVar15,puVar14,puVar21,uVar16);
                    FUN_02640184(&local_a8);
                  }
                }
              }
              else if ((((uint)(int)cVar2 < 10) && (*(long *)puVar4 != 0)) &&
                      (lVar17 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) +
                                            0x30))(), lVar17 != 0)) {
                local_98 = 0;
                lVar17 = lVar17 + (ulong)(uint)(int)cVar2 * 0x888;
                local_a0 = (char *)(lVar17 + 0x27f9c8);
                lVar17 = *(long *)(lVar17 + 0x27f9f0);
                if (lVar17 == 0) {
                  local_97 = 0;
                }
                else {
                  puVar12 = *(undefined8 **)(lVar17 + 0x10);
                  local_97 = 0;
                  if (puVar12 != (undefined8 *)0x0) {
                    local_97 = (**(code **)*puVar12)();
                  }
                }
                local_97 = local_97 & 1;
                local_a8 = PTR_DAT_04bb4cb0 + 0x10;
                uVar7 = *(undefined4 *)(param_1 + 0x100);
                uVar13 = FUN_017ebae8(&local_a8);
                uVar5 = *(undefined1 *)(param_1 + 0xfe);
                uVar20 = *(undefined1 *)(param_1 + 0x13c);
                FUN_007ef010(auStack_aa,param_1 + 0xd8);
                FUN_007ef010(auStack_ac,param_1 + 0xfc);
                puVar21 = auStack_ae;
                FUN_007ef010(auStack_ae,param_1 + 0xbc);
                uVar16 = *(undefined4 *)(param_1 + 0x140);
                puVar15 = auStack_aa;
                puVar14 = auStack_ac;
                goto LAB_017efef4;
              }
            }
          }
          else {
            lVar17 = *(long *)PTR_DAT_04bb2800;
            if (lVar17 == 0) goto LAB_017efc08;
            uVar7 = *(undefined4 *)(param_1 + 0x100);
            uVar5 = *(undefined1 *)(param_1 + 0xfe);
            uVar20 = *(undefined1 *)(param_1 + 0x13c);
            FUN_007ef010(auStack_86,param_1 + 0xd8);
            FUN_007ef010(auStack_88,param_1 + 0xfc);
            FUN_007ef010(auStack_8a,param_1 + 0xbc);
            FUN_0285a20c(lVar17 + 0x261c,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,
                         uVar20,auStack_86,auStack_88,auStack_8a,*(undefined4 *)(param_1 + 0x140));
          }
          if ((bVar6 & 1) == 0) {
            return;
          }
          if (*(long *)(lVar18 + 0x28) == 0) {
            return;
          }
          puVar12 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8);
          goto joined_r0x017eff34;
        }
      }
      local_78._0_4_ = 6;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
      if (0xff < uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
        if (0xff < uVar3) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x15 & 1) == 0) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
          if (0xff < uVar3) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar1 >> 0x19 & 1) == 0) ||
             (local_78 = (undefined *)CONCAT44(local_78._4_4_,7), (*puVar1 >> 7 & 1) == 0))
          goto LAB_017ef43c;
          goto LAB_017ef44c;
        }
        uVar10 = FUN_01810f30();
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = FUN_026f480c();
        }
        if ((uVar10 & 1) == 0) {
          uVar8 = FUN_0180d8d0();
          if (lVar17 == 0) {
            return;
          }
          local_68 = local_68 & 0xffffffffffffff00;
          if (4 < (int)uVar8) {
            uVar8 = 5;
          }
          lVar18 = lVar17 + 0x118 + (ulong)uVar8 * 0x2488;
          if (5 < uVar8) {
            lVar18 = lVar17 + 0x118;
          }
          local_70 = lVar18 + 0x1ea0;
          if (*(long *)(lVar18 + 0x1ec8) == 0) {
            uVar5 = 0;
          }
          else {
            puVar12 = *(undefined8 **)(*(long *)(lVar18 + 0x1ec8) + 0x10);
            uVar5 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar12)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar5,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_78 = PTR_DAT_04bb4cb0 + 0x10;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar13 = FUN_017ebae8(&local_78);
          uVar5 = *(undefined1 *)(param_1 + 0xfe);
          uVar20 = *(undefined1 *)(param_1 + 0x13c);
          FUN_007ef010(auStack_c8,param_1 + 0xd8);
          puVar21 = auStack_ca;
          FUN_007ef010(auStack_ca,param_1 + 0xfc);
          puVar15 = auStack_cc;
          FUN_007ef010(auStack_cc,param_1 + 0xbc);
          uVar16 = *(undefined4 *)(param_1 + 0x140);
          puVar14 = auStack_c8;
        }
        else {
          if (lVar17 == 0) {
            return;
          }
          local_68 = local_68 & 0xffffffffffffff00;
          local_70 = lVar17 + 0xfae8;
          if (*(long *)(lVar17 + 0xfb10) == 0) {
            uVar5 = 0;
          }
          else {
            puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0xfb10) + 0x10);
            uVar5 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar12)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar5,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_78 = PTR_DAT_04bb4cb0 + 0x10;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar13 = FUN_017ebae8(&local_78);
          uVar5 = *(undefined1 *)(param_1 + 0xfe);
          uVar20 = *(undefined1 *)(param_1 + 0x13c);
          FUN_007ef010(auStack_c2,param_1 + 0xd8);
          puVar21 = auStack_c4;
          FUN_007ef010(auStack_c4,param_1 + 0xfc);
          puVar15 = auStack_c6;
          FUN_007ef010(auStack_c6,param_1 + 0xbc);
          uVar16 = *(undefined4 *)(param_1 + 0x140);
          puVar14 = auStack_c2;
        }
        goto LAB_017efbe0;
      }
      local_84 = 0;
      lVar17 = *(long *)PTR_DAT_04bb2720;
      if (lVar17 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar9 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      uVar10 = FUN_02b5f400(&local_84,*(undefined4 *)(puVar12 + 7));
      iVar9 = local_84;
      if ((uVar10 & 1) == 0) {
        return;
      }
      uVar7 = FUN_0180da90();
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar7);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar9);
      lVar17 = *(long *)PTR_DAT_04bb46b0;
      if (lVar17 == 0) {
        return;
      }
      puVar12 = *(undefined8 **)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
        lVar17 = (**(code **)(*(long *)*puVar12 + 0x38))();
        if (lVar17 == 0) {
          return;
        }
        lVar17 = lVar17 + 0x70;
      }
      else {
        if (puVar12 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar12[0x26] == (long *)0x0) {
          return;
        }
        lVar17 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
        if (lVar17 == 0) {
          return;
        }
      }
      if (7 < (uint)local_78) {
        return;
      }
      lVar18 = lVar17 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_78) {
        lVar18 = lVar17 + 0x119228;
      }
      lVar17 = lVar18 + 0x1df8 + ((ulong)local_a8 & 0xffffffff) * 0x2488;
      if (5 < (uint)local_a8) {
        lVar17 = lVar18 + 0x1df8;
      }
      lVar18 = *(long *)(lVar17 + 0x1ec8);
      if (lVar18 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x100);
        uVar10 = 0;
      }
      else {
        if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          lVar18 = *(long *)(lVar17 + 0x1ec8);
          uVar10 = uVar10 & 0xffffffff;
          uVar7 = *(undefined4 *)(param_1 + 0x100);
          if (lVar18 == 0) goto LAB_017efc70;
        }
        plVar11 = *(long **)(lVar18 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(undefined **)(lVar17 + 0x1ea8);
          local_70 = *(long *)(lVar17 + 0x1eb0);
          local_68 = 0x24;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
LAB_017efc70:
      lVar18 = *(long *)(lVar17 + 0x1ea8);
      lVar19 = *(long *)(lVar17 + 0x1eb0);
      uVar5 = *(undefined1 *)(param_1 + 0xfe);
      uVar20 = *(undefined1 *)(param_1 + 0x13c);
      FUN_007ef010(auStack_bc,param_1 + 0xd8);
      FUN_007ef010(auStack_be,param_1 + 0xfc);
      FUN_007ef010(auStack_c0,param_1 + 0xbc);
      FUN_0285a20c(lVar19 + lVar18,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,uVar20,
                   auStack_bc,auStack_be,auStack_c0,*(undefined4 *)(param_1 + 0x140));
      if ((uVar10 & 1) == 0) {
        return;
      }
      lVar17 = *(long *)(lVar17 + 0x1ec8);
    }
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb46b0;
    if (lVar17 == 0) {
      return;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    if (((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) != 0) {
      return;
    }
    lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x30))();
    if (lVar17 == 0) {
      return;
    }
    lVar18 = *(long *)(lVar17 + 0x5d4020);
    if (lVar18 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x100);
      uVar10 = 0;
    }
    else {
      if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
        uVar7 = *(undefined4 *)(param_1 + 0x100);
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        lVar18 = *(long *)(lVar17 + 0x5d4020);
        uVar10 = uVar10 & 0xffffffff;
        uVar7 = *(undefined4 *)(param_1 + 0x100);
        if (lVar18 == 0) goto LAB_017ef694;
      }
      plVar11 = *(long **)(lVar18 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *(undefined **)(lVar17 + 0x5d4000);
        local_70 = *(long *)(lVar17 + 0x5d4008);
        local_68 = 0x24;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
LAB_017ef694:
    lVar18 = *(long *)(lVar17 + 0x5d4000);
    lVar19 = *(long *)(lVar17 + 0x5d4008);
    uVar5 = *(undefined1 *)(param_1 + 0xfe);
    uVar20 = *(undefined1 *)(param_1 + 0x13c);
    FUN_007ef010(auStack_7a,param_1 + 0xd8);
    FUN_007ef010(auStack_7c,param_1 + 0xfc);
    FUN_007ef010(auStack_7e,param_1 + 0xbc);
    FUN_0285a20c(lVar19 + lVar18,uVar7,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,uVar5,uVar20,
                 auStack_7a,auStack_7c,auStack_7e,*(undefined4 *)(param_1 + 0x140));
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar17 = *(long *)(lVar17 + 0x5d4020);
  }
  if (lVar17 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0x18);
joined_r0x017eff34:
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)();
  }
  return;
}

