
void FUN_02627260(long param_1,int *param_2,int param_3,uint param_4,byte *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  long *plVar23;
  short *psVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  uint local_f4;
  undefined8 local_f0;
  uint local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  uint local_70;
  uint local_6c;
  
  if (0 < *param_2) {
    lVar16 = 0;
    puVar19 = *(undefined8 **)(param_2 + 4);
    do {
      puVar21 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar21 = puVar19;
      *(undefined8 **)(param_2 + 4) = puVar21;
      puVar19 = puVar21;
    } while (lVar16 < *param_2);
  }
  *param_2 = 0;
  puVar3 = PTR_DAT_04bb2020;
  bVar17 = *param_5;
  bVar18 = *PTR_DAT_04bb32e0;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_74 = param_3;
  if (bVar17 == bVar18 || param_3 != 0xc) {
    if (param_3 == 0xe) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "ImmQ_A_Complete";
      local_90 = puVar1;
      uVar14 = FUN_0273f0a0(&local_90);
      if ((uVar14 & 1) == 0) {
        local_88 = "ImmQ_A_SetHousing";
        local_90 = puVar1;
        uVar14 = FUN_0273f0a0(&local_90);
        if ((uVar14 & 1) == 0) {
          local_c4 = 0x3f;
        }
        else {
          puVar2 = puVar3 + 0x10;
          local_88 = "ImmQ_A_Interior1Donate";
          local_90 = puVar2;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_A_Interior2Donate";
          local_c4 = 0;
          if ((uVar14 & 1) == 0) {
            local_c4 = 8;
          }
          local_90 = puVar2;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_A_Interior3Donate";
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x10;
          }
          local_90 = puVar2;
          uVar14 = FUN_0273f0a0(&local_90);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x20;
          }
          uVar10 = FUN_01e24634(&local_90,0,0);
          local_c4 = local_c4 | ~uVar10 & 1;
          uVar14 = FUN_01e24634(&local_90,0,1);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 2;
          }
          uVar14 = FUN_01e24634(&local_90,0,2);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 4;
          }
        }
      }
      else {
        local_c4 = 0;
      }
      local_88 = "ImmQ_B_Complete";
      local_90 = puVar1;
      uVar14 = FUN_0273f0a0(&local_90);
      if ((uVar14 & 1) == 0) {
        puVar1 = puVar3 + 0x10;
        local_88 = "ImmQ_B_SetHousing";
        local_90 = puVar1;
        uVar14 = FUN_0273f0a0(&local_90);
        if ((uVar14 & 1) == 0) {
          local_c4 = local_c4 | 0xfc0;
        }
        else {
          local_88 = "ImmQ_B_Interior1Donate";
          local_90 = puVar1;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_B_Interior2Donate";
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x200;
          }
          local_90 = puVar1;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_B_Interior3Donate";
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x400;
          }
          local_90 = puVar1;
          uVar14 = FUN_0273f0a0(&local_90);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x800;
          }
          uVar14 = FUN_01e24634(&local_90,1,0);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x40;
          }
          uVar14 = FUN_01e24634(&local_90,1,1);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x80;
          }
          uVar14 = FUN_01e24634(&local_90,1,2);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x100;
          }
        }
      }
      local_88 = "ImmQ_C_Complete";
      local_90 = puVar3 + 0x10;
      uVar14 = FUN_0273f0a0(&local_90);
      if ((uVar14 & 1) == 0) {
        local_88 = "ImmQ_C_SetHousing";
        local_90 = puVar3 + 0x10;
        uVar14 = FUN_0273f0a0(&local_90);
        if ((uVar14 & 1) == 0) {
          local_c4 = local_c4 | 0x3f000;
        }
        else {
          puVar3 = puVar3 + 0x10;
          local_88 = "ImmQ_C_Interior1Donate";
          local_90 = puVar3;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_C_Interior2Donate";
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x8000;
          }
          local_90 = puVar3;
          uVar14 = FUN_0273f0a0(&local_90);
          local_88 = "ImmQ_C_Interior3Donate";
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x10000;
          }
          local_90 = puVar3;
          uVar14 = FUN_0273f0a0(&local_90);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x20000;
          }
          uVar14 = FUN_01e24634(&local_90,2,0);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x1000;
          }
          uVar14 = FUN_01e24634(&local_90,2,1);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x2000;
          }
          uVar14 = FUN_01e24634(&local_90,2,2);
          if ((uVar14 & 1) == 0) {
            local_c4 = local_c4 | 0x4000;
          }
        }
        local_f0 = 0;
        local_f4 = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        local_f0 = 0;
        local_f4 = 0;
      }
    }
    else {
      uVar10 = 0;
      local_f0 = 0;
      local_f4 = 0;
      local_c4 = 0;
    }
  }
  else {
    uVar10 = FUN_02612f30(param_5,0x300000000,0);
    uVar10 = uVar10 & 0xffff;
    uVar8 = FUN_02612f30(param_5,0x300000000,1);
    uVar9 = FUN_02612f30(param_5,0x300000000,2);
    local_f0 = CONCAT44(uVar8,uVar9) & 0xffff0000ffff;
    local_f4 = FUN_02612f30(param_5,0x300000000,3);
    local_f4 = local_f4 & 0xffff;
    local_c4 = 0;
  }
  lVar16 = *(long *)(param_1 + 0xdd7b8);
  if (lVar16 != param_1 + 0xdd7b0) {
    plVar23 = (long *)(lVar16 + -8);
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar1 = PTR_DAT_04bb43c0;
      switch(local_74) {
      case 1:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          local_90 = puVar3;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
LAB_02628090:
            uVar8 = 8;
            goto LAB_02628298;
          }
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_02628090;
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar11) ||
             (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar20 == (uint *)0x0)) goto LAB_02628090;
          uVar8 = 8;
LAB_02627ef0:
          uVar11 = 0;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
          uVar13 = *puVar20;
          if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
            puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
            uVar11 = 0;
            if (*puVar22 != 0) {
              uVar11 = puVar22[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar27 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar27 = 0x1c;
                }
                lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar27 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar20 - lVar27) / (ulong)uVar11);
                  }
                  if (*puVar22 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *(uint *)PTR_DAT_04bc0170) &&
                     (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0170 + 8) + (long)(int)uVar13 * 2),
                     uVar11 = (uint)uVar5, uVar5 < 0xf)) goto LAB_026282a0;
                }
              }
              uVar11 = 0;
            }
          }
LAB_026282a0:
          uVar13 = (uint)local_a8;
LAB_026282ac:
          if (uVar11 == uVar13) goto switchD_02627750_default;
        }
        break;
      case 2:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
            uVar8 = 1;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar20 != (uint *)0x0)) {
                uVar8 = 1;
                goto LAB_02627ef0;
              }
            }
            uVar8 = 1;
          }
LAB_02628298:
          uVar11 = 0;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
          goto LAB_026282a0;
        }
        break;
      case 3:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
            uVar8 = 2;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar20 != (uint *)0x0)) {
                uVar8 = 2;
                goto LAB_02627ef0;
              }
            }
            uVar8 = 2;
          }
          goto LAB_02628298;
        }
        break;
      case 4:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
            uVar8 = 3;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar20 != (uint *)0x0)) {
                uVar8 = 3;
                goto LAB_02627ef0;
              }
            }
            uVar8 = 3;
          }
          goto LAB_02628298;
        }
        break;
      case 5:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 == -2) break;
        local_80 = 0;
        local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
        local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
        local_90 = PTR_DAT_04bc0510 + 0x10;
        lVar26 = *(long *)PTR_DAT_04bb43c0;
        uVar11 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar1 == 0) {
LAB_026280c0:
          uVar11 = 0;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,4);
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_026280c0;
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar11) ||
             (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar20 == (uint *)0x0)) goto LAB_026280c0;
          uVar11 = 0;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,4);
          uVar13 = *puVar20;
          if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
            puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
            uVar11 = 0;
            if (*puVar22 != 0) {
              uVar11 = puVar22[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar27 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar27 = 0x1c;
                }
                lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar27 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar20 - lVar27) / (ulong)uVar11);
                  }
                  if (*puVar22 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *(uint *)PTR_DAT_04bc0170) &&
                     (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0170 + 8) + (long)(int)uVar13 * 2),
                     uVar11 = (uint)uVar5, uVar5 < 0xf)) goto LAB_026280c8;
                }
              }
              uVar11 = 0;
            }
          }
        }
LAB_026280c8:
        if (uVar11 != (uint)local_a8) {
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          lVar27 = *(long *)puVar1;
          puVar25 = (undefined4 *)(*plVar23 + 8);
          local_a0 = *puVar25;
          uStack_9c = *(undefined4 *)(*plVar23 + 0xc);
          local_98 = 0;
          uVar11 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar1 == 0) {
LAB_026282e8:
            local_6c = 0;
          }
          else {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((*(uint *)(lVar27 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_026282e8;
            lVar27 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(puVar25);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((*(uint *)(lVar27 + 0x1d8) <= uVar11) ||
               (puVar20 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar20 == (uint *)0x0)) goto LAB_026282e8;
            local_6c = 0;
            uVar11 = *puVar20;
            if ((uVar11 != 0) && (puVar20 != (uint *)(ulong)uVar11)) {
              puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar11);
              local_6c = 0;
              if (*puVar22 != 0) {
                uVar11 = puVar22[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar27 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar20 - lVar27) / (ulong)uVar11);
                    }
                    if (*puVar22 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc0170) &&
                       (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0170 + 8) + (long)(int)uVar13 * 2)
                       , local_6c = (uint)uVar5, uVar5 < 0xf)) goto LAB_026282f0;
                  }
                }
                local_6c = 0;
              }
            }
          }
LAB_026282f0:
          if (local_6c == 9) goto LAB_02628304;
          lVar27 = *(long *)puVar1;
          puVar25 = (undefined4 *)(*plVar23 + 8);
          local_b8 = *puVar25;
          uStack_b4 = *(undefined4 *)(*plVar23 + 0xc);
          local_b0 = 0;
          uVar11 = FUN_0277d6c4(&local_b8);
          if (*(long *)puVar1 == 0) {
LAB_02628684:
            uVar11 = 0;
          }
          else {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((*(uint *)(lVar27 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_02628684;
            lVar27 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(puVar25);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((*(uint *)(lVar27 + 0x1d8) <= uVar11) ||
               (puVar20 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar20 == (uint *)0x0)) goto LAB_02628684;
            uVar11 = 0;
            uVar13 = *puVar20;
            if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
              puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
              uVar11 = 0;
              if (*puVar22 != 0) {
                uVar11 = puVar22[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar27 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar20 - lVar27) / (ulong)uVar11);
                    }
                    if (*puVar22 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc0170) &&
                       (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0170 + 8) + (long)(int)uVar13 * 2)
                       , uVar11 = (uint)uVar5, uVar5 < 0xf)) goto LAB_02628690;
                  }
                }
                uVar11 = 0;
              }
            }
          }
LAB_02628690:
          local_6c = 10;
          uVar13 = 10;
          local_70 = uVar11;
          goto LAB_026282ac;
        }
LAB_02628304:
        puVar15 = (ushort *)*plVar23;
        goto joined_r0x0262830c;
      case 6:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
LAB_02628228:
            uVar13 = 0xbc;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            uVar13 = 0xbc;
            if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) == 0)
              goto LAB_02628228;
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              uVar13 = 0xbc;
              if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
                puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8);
                if (puVar20 == (uint *)0x0) goto LAB_02628228;
                uVar11 = *puVar20;
                uVar13 = 0;
                if ((uVar11 != 0) && (puVar20 != (uint *)(ulong)uVar11)) {
                  puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar11);
                  uVar13 = 0;
                  if (*puVar22 != 0) {
                    uVar11 = puVar22[1];
                    if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar22 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                      if (lVar27 != 0) {
                        uVar13 = 0;
                        if ((ulong)uVar11 != 0) {
                          uVar13 = (uint)((ulong)((long)puVar20 - lVar27) / (ulong)uVar11);
                        }
                        if (*puVar22 <= uVar13) {
                          uVar13 = 0xffffffff;
                        }
                        if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar13 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2
                                            ), uVar13 < 0xbd)) goto LAB_0262822c;
                      }
                    }
                    uVar13 = 0;
                  }
                }
              }
            }
          }
LAB_0262822c:
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar13);
          if ((uVar13 - 0xc < 9) || (uVar13 - 8 < 3)) goto LAB_02628304;
        }
        break;
      case 7:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 == 0) {
            uVar8 = 7;
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar20 != (uint *)0x0)) {
                uVar8 = 7;
                goto LAB_02627ef0;
              }
            }
            uVar8 = 7;
          }
          goto LAB_02628298;
        }
        break;
      case 8:
        sVar6 = *(short *)(*plVar23 + 8);
        cVar4 = *(char *)(*plVar23 + 0x25);
        goto LAB_02627f94;
      case 9:
        uVar14 = FUN_02624e04(param_1,*(undefined2 *)*plVar23);
        if ((uVar14 & 1) != 0) goto switchD_02627750_default;
        break;
      case 10:
        lVar27 = *plVar23;
        sVar6 = *(short *)(lVar27 + 8);
        if (sVar6 != -2) {
          local_80 = 0;
          local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar27 + 10),sVar6);
          local_88 = (char *)CONCAT44(*(undefined4 *)(lVar27 + 0xc),(undefined4)local_88);
          local_90 = PTR_DAT_04bc0510 + 0x10;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar1 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4((short *)(lVar27 + 8));
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                 (puVar20 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar20 != (uint *)0x0)) {
                uVar8 = 0xb;
                goto LAB_02627ef0;
              }
            }
          }
          uVar8 = 0xb;
          goto LAB_02628298;
        }
        break;
      case 0xb:
        sVar6 = *(short *)(*plVar23 + 8);
        cVar4 = *(char *)(*plVar23 + 0x27);
LAB_02627f94:
        if (sVar6 != -2 && cVar4 != '\0') {
switchD_02627750_default:
          puVar15 = (ushort *)*plVar23;
joined_r0x0262830c:
          if (((param_4 & 1) == 0) ||
             ((uVar5 = *puVar15, uVar5 < 0x800 &&
              ((*(byte *)(param_1 + 0xe97e0 + (ulong)(uVar5 >> 3)) >> (ulong)(uVar5 & 7) & 1) != 0))
             )) {
            FUN_00dbf7b0(param_2);
          }
        }
        break;
      case 0xc:
        uVar5 = *(ushort *)*plVar23;
        if (((uVar10 == uVar5 || local_f0._4_4_ == uVar5) || (uint)local_f0 == uVar5) ||
            local_f4 == uVar5) goto switchD_02627750_default;
        break;
      case 0xd:
        if (*(short *)(*plVar23 + 8) != -2) {
          iVar12 = FUN_0277d6c4();
          if (iVar12 == 0x1c2b) goto switchD_02627750_default;
          iVar12 = FUN_0277d6c4(*plVar23 + 8);
          if (iVar12 == 0x1755) {
            local_90 = (undefined *)0x1755;
            FUN_0277d4ac(&local_90);
            iVar12 = FUN_02679690(param_5,&local_90);
            if (iVar12 < 4) goto switchD_02627750_default;
          }
        }
        break;
      case 0xe:
        psVar24 = (short *)(*plVar23 + 8);
        if (*psVar24 != -2) {
          iVar12 = FUN_0277d6c4(psVar24);
          if (iVar12 == 0xa37) {
            uVar11 = FUN_026788f0(param_5,psVar24);
            if (0x27 < uVar11) goto switchD_02627750_default;
          }
          else {
            iVar12 = FUN_0277d6c4(psVar24);
            if (iVar12 == 0xc86) {
              if ((local_c4 >> 9 & 1) == 0) {
                uVar11 = 0;
              }
              else {
                local_90 = (undefined *)0xc85;
                FUN_0277d4ac(&local_90);
                uVar11 = FUN_026788f0(param_5,&local_90);
                uVar11 = (uint)(0x27 < uVar11);
              }
              if ((local_c4 >> 10 & 1) != 0) {
                local_90 = (undefined *)0x61d;
                FUN_0277d4ac(&local_90);
                uVar13 = FUN_026788f0(param_5,&local_90);
                if ((0x13 < uVar13) && (0x13 < uVar13 - 0x14)) {
                  uVar11 = uVar11 + 1;
                }
              }
              local_90 = (undefined *)0xc86;
              FUN_0277d4ac(&local_90);
              iVar12 = FUN_02679690(param_5,&local_90);
              if (iVar12 < (int)uVar11) goto switchD_02627750_default;
            }
            else {
              bVar7 = false;
              uVar11 = 1;
              lVar27 = -0x150;
              do {
                lVar26 = *(long *)PTR_DAT_04bb48f0;
                FUN_01e2543c(lVar26);
                lVar26 = lVar26 + lVar27;
                uVar13 = local_c4 >> (ulong)(uVar11 - 1 & 0x1f);
                if ((uVar13 & 1) == 0) {
LAB_026283c0:
                  if ((local_c4 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
                    local_90 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_90);
                    local_90 = *(undefined **)(lVar26 + 0x194);
                    if ((*(short *)(lVar26 + 0x194) != -2) &&
                       (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) != 0))
                    goto LAB_02628334;
                  }
                  if ((uVar13 >> 2 & 1) != 0) {
                    local_90 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_90);
                    local_90 = *(undefined **)(lVar26 + 0x19c);
                    if ((*(short *)(lVar26 + 0x19c) != -2) &&
                       (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) != 0))
                    goto LAB_02628334;
                  }
                  if ((uVar13 >> 3 & 1) != 0) {
                    local_90 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_90);
                    local_90 = *(undefined **)(lVar26 + 0x1a4);
                    if ((*(short *)(lVar26 + 0x1a4) != -2) &&
                       (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) != 0))
                    goto LAB_02628334;
                  }
                  if ((uVar13 >> 4 & 1) != 0) {
                    local_90 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_90);
                    local_90 = *(undefined **)(lVar26 + 0x1ac);
                    if ((*(short *)(lVar26 + 0x1ac) != -2) &&
                       (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) != 0))
                    goto LAB_02628334;
                  }
                  if ((uVar13 >> 5 & 1) != 0) {
                    local_90 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_90);
                    local_90 = *(undefined **)(lVar26 + 0x1b4);
                    if ((*(short *)(lVar26 + 0x1b4) != -2) &&
                       (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) != 0))
                    goto LAB_02628334;
                  }
                }
                else {
                  local_90 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_90);
                  local_90 = *(undefined **)(lVar26 + 0x18c);
                  if ((*(short *)(lVar26 + 0x18c) == -2) ||
                     (uVar14 = FUN_0277d7b4(psVar24,&local_90), (uVar14 & 1) == 0))
                  goto LAB_026283c0;
LAB_02628334:
                  uVar13 = FUN_026788f0(param_5,psVar24);
                  bVar7 = (bool)(0x27 < uVar13 | bVar7);
                }
                lVar27 = lVar27 + 0x70;
                uVar11 = uVar11 + 6;
              } while (lVar27 != 0);
              if (bVar7) goto switchD_02627750_default;
            }
          }
        }
        break;
      case 0xf:
        if ((*(short *)(*plVar23 + 8) != -2) && (iVar12 = FUN_0277d6c4(), iVar12 == 0x142e))
        goto switchD_02627750_default;
        break;
      default:
        goto switchD_02627750_default;
      }
      lVar16 = *(long *)(lVar16 + 8);
      plVar23 = (long *)(lVar16 + -8);
    } while (plVar23 != (long *)(param_1 + 0xdd7a8));
  }
  return;
}

