
void FUN_0136d040(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (8 < *(int *)(param_1 + 0x40) - 1U) {
    return;
  }
  switch(*(int *)(param_1 + 0x40)) {
  case 1:
    uVar10 = FUN_0136dfd0(param_1,0);
    if ((uVar10 & 1) != 0) {
      param_1[0x40] = 2;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    break;
  case 2:
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar14 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_0136daac:
      if (*pbVar14 < 8) goto LAB_0136db24;
LAB_0136dab8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0136db1c:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_0136db24;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar15 = *(byte *)(lVar18 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar15 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
        if (7 < bVar15) {
          puVar4 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar14 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar15 = *pbVar14;
      bVar7 = 7 < bVar15;
      if (bVar7) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
      if (bVar7) goto LAB_0136db1c;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0136daac;
        }
        goto LAB_0136dab8;
      }
LAB_0136db24:
      bVar15 = *pbVar14;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
    }
    uVar8 = FUN_01372630(param_1 + 0x90);
    FUN_0267d7d0(&local_98,uVar8);
    param_1[0x40] = 3;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    break;
  case 3:
    uVar10 = FUN_0136e3d0(param_1);
    if ((uVar10 & 1) != 0) {
      param_1[0x40] = 4;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    break;
  case 4:
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar14 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_0136db60:
      if (*pbVar14 < 8) goto LAB_0136dbd8;
LAB_0136db6c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0136dbd0:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_0136dbd8;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar15 = *(byte *)(lVar18 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar15 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
        if (7 < bVar15) {
          puVar4 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar14 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar15 = *pbVar14;
      bVar7 = 7 < bVar15;
      if (bVar7) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
      if (bVar7) goto LAB_0136dbd0;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0136db60;
        }
        goto LAB_0136db6c;
      }
LAB_0136dbd8:
      bVar15 = *pbVar14;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
    }
    iVar11 = FUN_0267c230(&local_98);
    if (iVar11 != 0) {
      FUN_0267d7d0(&local_98,iVar11);
    }
    uVar5 = *(uint *)(param_1 + 0x90);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    puVar1 = PTR_DAT_04bb37e0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (uVar5 != 0) {
      lVar18 = *(long *)(param_1 + 0x98);
      uVar19 = 0;
      do {
        puVar3 = (undefined2 *)(lVar18 + ((long)((ulong)uVar19 << 0x20) >> 0x1c));
        *puVar3 = *(undefined2 *)puVar1;
        *(undefined *)(puVar3 + 1) = puVar1[2];
        *(undefined *)((long)puVar3 + 3) = puVar1[3];
        uVar8 = *(undefined4 *)(puVar1 + 4);
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined4 *)(puVar3 + 2) = uVar8;
        uVar19 = uVar19 + 1;
      } while (uVar5 != uVar19);
    }
    param_1[0x40] = 5;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    break;
  case 5:
    lVar18 = nn::os::GetSystemTick();
    puVar1 = PTR_DAT_04bb2010;
    local_98 = *(uint *)(param_1 + 4);
    if ((local_98 & 0xfffffffe) == 2) {
      bVar15 = *param_1;
      local_68 = CONCAT71(0x10100000000,bVar15 >> 2 & 1);
      local_68 = CONCAT53(0x1010000,CONCAT12(bVar15 >> 4,(undefined2)local_68)) & 0xffffffffff01ffff
      ;
      local_68 = CONCAT44(local_68._4_4_,CONCAT13(bVar15 >> 5,(int3)local_68)) & 0xffffffff01ffffff;
      local_94 = 0xffffffff;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      local_80 = *(undefined8 *)(param_1 + 0x28);
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_70 = *(undefined8 *)(param_1 + 0x38);
      local_68 = CONCAT17(*(int *)(param_1 + 0xdc) == 0,
                          (int7)CONCAT62(local_68._2_6_,CONCAT11(bVar15 >> 3,(undefined1)local_68)))
                 & 0xffffffffffff01ff;
      local_78 = puStack_88;
      FUN_0136f340(param_1 + 0x48,&local_98);
      if (*(int *)(param_1 + 0xdc) == 0) {
        param_1[0xdc] = 1;
        param_1[0xdd] = 0;
        param_1[0xde] = 0;
        param_1[0xdf] = 0;
        return;
      }
    }
    else {
      local_70 = 0;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      bVar15 = *param_1;
      local_80 = 0;
      local_68 = CONCAT71(0x101000000,bVar15 >> 2 & 1);
      local_68 = CONCAT53(0x10100,CONCAT12(bVar15 >> 4,(undefined2)local_68)) & 0xffffffffff01ffff;
      local_68 = CONCAT62(local_68._2_6_,CONCAT11(bVar15 >> 3,(undefined1)local_68)) &
                 0xffffffffffff01ff;
      local_68 = CONCAT44(local_68._4_4_,CONCAT13(bVar15 >> 5,(int3)local_68)) & 0xffffffff01ffffff;
      lVar24 = *(long *)PTR_DAT_04bb29d0;
      local_78 = puStack_88;
      do {
        uVar5 = *(uint *)(param_1 + 0xdc);
        pbVar14 = param_1 + 0xa0 + (ulong)uVar5 * 4;
        if (0xe < uVar5) {
          pbVar14 = param_1 + 0xa0;
        }
        if (*(int *)pbVar14 < 0) {
LAB_0136d780:
          iVar11 = uVar5 + 1;
          *(int *)(param_1 + 0xdc) = iVar11;
        }
        else {
          puStack_b8 = puVar1 + 0x10;
          local_b0 = 0;
          local_a0 = 0;
          local_c0 = PTR_DAT_04bbc1a0 + 0x10;
          local_a8 = puStack_b8;
          local_94 = *(int *)pbVar14;
          FUN_01378228(&local_c0);
          if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
            iVar17 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
            iVar23 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c);
            iVar12 = iVar23 + 2;
            iVar11 = iVar17 + 2;
            if (-1 < iVar17 + 1) {
              iVar11 = iVar17 + 1;
            }
            iVar11 = iVar11 >> 1;
            if (-1 < iVar23 + 1) {
              iVar12 = iVar23 + 1;
            }
            iVar12 = iVar12 >> 1;
          }
          else {
            iVar11 = 8;
            if (*(int *)(param_1 + 8) != 0xa8) {
              iVar11 = 4;
            }
            iVar12 = iVar11;
          }
          iVar17 = 0;
          if (iVar11 != 0) {
            iVar17 = *(int *)(param_1 + 0xc) / iVar11;
          }
          iVar23 = 0;
          if (iVar11 != 0) {
            iVar23 = (((int)local_a0 - (int)local_b0) + 1) / iVar11;
          }
          iVar11 = (int)local_b0 + (*(int *)(param_1 + 0xc) - iVar17 * iVar11) * iVar23;
          iVar21 = 0;
          if (iVar12 != 0) {
            iVar21 = ((local_a0._4_4_ - local_b0._4_4_) + 1) / iVar12;
          }
          iVar12 = local_b0._4_4_ + iVar17 * iVar21;
          local_80 = CONCAT44(iVar12,iVar11);
          local_70 = CONCAT44(iVar21 + iVar12 + -1,iVar23 + iVar11 + -1);
          FUN_0136f340(param_1 + 0x48,&local_98);
          if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
            iVar17 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
            iVar23 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c);
            iVar12 = iVar23 + 2;
            iVar11 = iVar17 + 2;
            if (-1 < iVar17 + 1) {
              iVar11 = iVar17 + 1;
            }
            iVar11 = iVar11 >> 1;
            if (-1 < iVar23 + 1) {
              iVar12 = iVar23 + 1;
            }
            iVar12 = iVar12 >> 1;
          }
          else {
            iVar11 = 8;
            if (*(int *)(param_1 + 8) != 0xa8) {
              iVar11 = 4;
            }
            iVar12 = iVar11;
          }
          iVar17 = *(int *)(param_1 + 0xc);
          *(int *)(param_1 + 0xc) = iVar17 + 1;
          if (iVar12 * iVar11 <= iVar17 + 1) {
            uVar5 = *(uint *)(param_1 + 0xdc);
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            goto LAB_0136d780;
          }
          iVar11 = *(int *)(param_1 + 0xdc);
        }
        if (iVar11 == 0xf) goto LAB_0136dd4c;
        lVar9 = nn::os::GetSystemTick();
        lVar9 = lVar9 - lVar18;
        if (lVar9 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000000) / lVar24;
          }
        }
        else if (lVar9 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000) / lVar24;
          }
          lVar13 = lVar13 * 1000;
        }
        else {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = lVar9 / lVar24;
          }
          lVar13 = lVar13 * 1000000;
        }
      } while (lVar13 < 0xfa1);
      if (*(int *)(param_1 + 0xdc) != 0xf) {
        return;
      }
LAB_0136dd4c:
      param_1[0xdc] = 0;
      param_1[0xdd] = 0;
      param_1[0xde] = 0;
      param_1[0xdf] = 0;
    }
    param_1[0x40] = 6;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    break;
  case 6:
    local_70 = 0;
    bVar15 = *param_1;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    local_68._0_3_ = (uint3)(bVar15 >> 4 & 1) << 0x10;
    local_68 = CONCAT53(0x10100,(int3)local_68);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_68 = CONCAT71(local_68._1_7_,bVar15 >> 2) & 0xffffffffffffff01;
    local_68 = CONCAT62(local_68._2_6_,CONCAT11(bVar15 >> 3,(undefined1)local_68)) &
               0xffffffffffff01ff;
    local_68 = CONCAT44(local_68._4_4_,CONCAT13(bVar15 >> 5,(int3)local_68)) & 0xffffffff01ffffff;
    local_80 = 0;
    local_90 = puVar1;
    puStack_88 = puVar2;
    local_78 = puVar2;
    lVar18 = nn::os::GetSystemTick();
    local_98 = *(uint *)(param_1 + 4);
    if ((local_98 & 0xfffffffe) == 2) {
      local_98 = 0;
      iVar17 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
      iVar23 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c);
      iVar11 = iVar17 + 2;
      iVar12 = iVar23 + 2;
      if (-1 < iVar17 + 1) {
        iVar11 = iVar17 + 1;
      }
      if (-1 < iVar23 + 1) {
        iVar12 = iVar23 + 1;
      }
      lVar24 = *(long *)PTR_DAT_04bb29d0;
      do {
        iVar17 = *(int *)(param_1 + 0x2c);
        if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
          iVar16 = *(int *)(param_1 + 0x28);
          iVar21 = *(int *)(param_1 + 0x38) - iVar16;
          iVar20 = iVar21 + 1;
          iVar23 = iVar21 + 2;
          if (-1 < iVar20) {
            iVar23 = iVar21 + 1;
          }
          iVar6 = *(int *)(param_1 + 0x3c) - iVar17;
          iVar21 = iVar6 + 1;
          iVar22 = iVar6 + 2;
          iVar23 = iVar23 >> 1;
          if (-1 < iVar21) {
            iVar22 = iVar6 + 1;
          }
          iVar22 = iVar22 >> 1;
        }
        else {
          iVar21 = (*(int *)(param_1 + 0x3c) - iVar17) + 1;
          iVar16 = *(int *)(param_1 + 0x28);
          iVar23 = 8;
          if (*(int *)(param_1 + 8) != 0xa8) {
            iVar23 = 4;
          }
          iVar20 = (*(int *)(param_1 + 0x38) - iVar16) + 1;
          iVar22 = iVar23;
        }
        local_94 = *(int *)(param_1 + 0xc);
        iVar6 = 0;
        if (iVar23 != 0) {
          iVar6 = iVar20 / iVar23;
        }
        iVar20 = 0;
        if (iVar23 != 0) {
          iVar20 = local_94 / iVar23;
        }
        iVar16 = iVar16 + (local_94 - iVar20 * iVar23) * iVar6;
        iVar23 = 0;
        if (iVar22 != 0) {
          iVar23 = iVar21 / iVar22;
        }
        iVar17 = iVar17 + iVar20 * iVar23;
        local_80 = CONCAT44(iVar17,iVar16);
        local_70 = CONCAT44(iVar23 + iVar17 + -1,iVar6 + iVar16 + -1);
        FUN_0136f340(param_1 + 0x48,&local_98);
        iVar17 = *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0xc) = iVar17 + 1;
        if ((iVar12 >> 1) * (iVar11 >> 1) <= iVar17 + 1) {
          param_1[8] = 0xa9;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          break;
        }
        lVar9 = nn::os::GetSystemTick();
        lVar9 = lVar9 - lVar18;
        if (lVar9 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000000) / lVar24;
          }
        }
        else if (lVar9 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000) / lVar24;
          }
          lVar13 = lVar13 * 1000;
        }
        else {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = lVar9 / lVar24;
          }
          lVar13 = lVar13 * 1000000;
        }
      } while (lVar13 < 0xfa1);
    }
    else {
      lVar24 = *(long *)PTR_DAT_04bb29d0;
      do {
        iVar11 = *(int *)(param_1 + 8);
        if ((((((iVar11 == *(int *)(param_1 + 0xa0)) || (iVar11 == *(int *)(param_1 + 0xa4))) ||
              (iVar11 == *(int *)(param_1 + 0xa8))) ||
             ((iVar11 == *(int *)(param_1 + 0xac) || (iVar11 == *(int *)(param_1 + 0xb0))))) ||
            (((iVar11 == *(int *)(param_1 + 0xb4) ||
              ((iVar11 == *(int *)(param_1 + 0xb8) || (iVar11 == *(int *)(param_1 + 0xbc))))) ||
             (iVar11 == *(int *)(param_1 + 0xc0))))) ||
           ((((iVar11 == *(int *)(param_1 + 0xc4) || (iVar11 == *(int *)(param_1 + 200))) ||
             (iVar11 == *(int *)(param_1 + 0xcc))) ||
            (((iVar11 == *(int *)(param_1 + 0xd0) || (iVar11 == *(int *)(param_1 + 0xd4))) ||
             (iVar11 == *(int *)(param_1 + 0xd8))))))) {
LAB_0136da30:
          iVar11 = iVar11 + 1;
          *(int *)(param_1 + 8) = iVar11;
        }
        else {
          local_b0 = 0;
          local_a0 = 0;
          local_c0 = puVar1;
          puStack_b8 = puVar2;
          local_a8 = puVar2;
          local_94 = iVar11;
          FUN_01378228(&local_c0);
          if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
            iVar17 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
            iVar23 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c);
            iVar12 = iVar23 + 2;
            iVar11 = iVar17 + 2;
            if (-1 < iVar17 + 1) {
              iVar11 = iVar17 + 1;
            }
            iVar11 = iVar11 >> 1;
            if (-1 < iVar23 + 1) {
              iVar12 = iVar23 + 1;
            }
            iVar12 = iVar12 >> 1;
          }
          else {
            iVar11 = 8;
            if (*(int *)(param_1 + 8) != 0xa8) {
              iVar11 = 4;
            }
            iVar12 = iVar11;
          }
          iVar17 = 0;
          if (iVar11 != 0) {
            iVar17 = *(int *)(param_1 + 0xc) / iVar11;
          }
          iVar23 = 0;
          if (iVar11 != 0) {
            iVar23 = (((int)local_a0 - (int)local_b0) + 1) / iVar11;
          }
          iVar11 = (int)local_b0 + (*(int *)(param_1 + 0xc) - iVar17 * iVar11) * iVar23;
          iVar21 = 0;
          if (iVar12 != 0) {
            iVar21 = ((local_a0._4_4_ - local_b0._4_4_) + 1) / iVar12;
          }
          iVar12 = local_b0._4_4_ + iVar17 * iVar21;
          local_80 = CONCAT44(iVar12,iVar11);
          local_70 = CONCAT44(iVar21 + iVar12 + -1,iVar23 + iVar11 + -1);
          FUN_0136f340(param_1 + 0x48,&local_98);
          if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
            iVar11 = *(int *)(param_1 + 8);
            iVar17 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
            iVar23 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c);
            iVar12 = iVar17 + 2;
            if (-1 < iVar17 + 1) {
              iVar12 = iVar17 + 1;
            }
            iVar17 = iVar23 + 2;
            if (-1 < iVar23 + 1) {
              iVar17 = iVar23 + 1;
            }
            iVar12 = iVar12 >> 1;
            iVar17 = iVar17 >> 1;
          }
          else {
            iVar11 = *(int *)(param_1 + 8);
            iVar12 = 8;
            if (iVar11 != 0xa8) {
              iVar12 = 4;
            }
            iVar17 = iVar12;
          }
          iVar23 = *(int *)(param_1 + 0xc);
          *(int *)(param_1 + 0xc) = iVar23 + 1;
          if (iVar17 * iVar12 <= iVar23 + 1) {
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            goto LAB_0136da30;
          }
        }
        if (0xa8 < iVar11) break;
        lVar9 = nn::os::GetSystemTick();
        lVar9 = lVar9 - lVar18;
        if (lVar9 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000000) / lVar24;
          }
        }
        else if (lVar9 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = (lVar9 * 1000) / lVar24;
          }
          lVar13 = lVar13 * 1000;
        }
        else {
          lVar13 = 0;
          if (lVar24 != 0) {
            lVar13 = lVar9 / lVar24;
          }
          lVar13 = lVar13 * 1000000;
        }
      } while (lVar13 < 0xfa1);
    }
    if (0xa8 < *(int *)(param_1 + 8)) {
      param_1[0x40] = 7;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    break;
  case 7:
    uVar10 = FUN_0136dfd0(param_1,1);
    if ((uVar10 & 1) != 0) {
      param_1[0x40] = 8;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    break;
  case 8:
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar14 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_0136dc74:
      if (*pbVar14 < 8) goto LAB_0136dcec;
LAB_0136dc80:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0136dce4:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_0136dcec;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar15 = *(byte *)(lVar18 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar15 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
        if (7 < bVar15) {
          puVar4 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar14 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar15 = *pbVar14;
      bVar7 = 7 < bVar15;
      if (bVar7) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
      if (bVar7) goto LAB_0136dce4;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0136dc74;
        }
        goto LAB_0136dc80;
      }
LAB_0136dcec:
      bVar15 = *pbVar14;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_98 = CONCAT31(local_98._1_3_,bVar15);
    }
    uVar8 = FUN_01372630(param_1 + 0x90);
    FUN_0267d7d0(&local_98,uVar8);
    param_1[0x40] = 9;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    break;
  case 9:
    uVar10 = FUN_0136e3d0(param_1);
    if ((uVar10 & 1) == 0) {
      return;
    }
    bVar15 = *param_1;
    *param_1 = bVar15 & 0xfc | 2;
    if ((bVar15 >> 2 & 1) == 0) {
      lVar18 = *(long *)PTR_DAT_04bb39b0;
      pbVar14 = PTR_DAT_04bb32e0;
      if (lVar18 == 0) {
LAB_0136dd64:
        if (*pbVar14 < 8) goto LAB_0136dddc;
LAB_0136dd70:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0136ddd4:
          pbVar14 = PTR_DAT_04bb5038;
          goto LAB_0136dddc;
        }
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar15 = *(byte *)(lVar18 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar15 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
          if (7 < bVar15) {
            puVar4 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar14 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar15 = *pbVar14;
        bVar7 = 7 < bVar15;
        if (bVar7) {
          bVar15 = 0xff;
        }
        local_98 = CONCAT31(local_98._1_3_,bVar15);
        if (bVar7) goto LAB_0136ddd4;
      }
      else {
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar14 = (byte *)(lVar18 + 0x158);
        }
        if (7 < *pbVar14) {
          if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0136dd64;
          }
          goto LAB_0136dd70;
        }
LAB_0136dddc:
        bVar15 = *pbVar14;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        local_98 = CONCAT31(local_98._1_3_,bVar15);
      }
      FUN_02649500(&local_98);
    }
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  return;
}

