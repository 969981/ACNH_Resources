
/* WARNING: Removing unreachable block (ram,0x022c1a74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_022c0670(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  short sVar9;
  undefined *puVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  byte bVar17;
  short sVar18;
  ushort uVar19;
  uint *puVar20;
  long lVar21;
  long *plVar22;
  ushort uVar23;
  int iVar24;
  uint *puVar25;
  undefined8 *puVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  byte local_b4 [4];
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb2010;
  ppuVar15 = &local_d0;
  ppuVar16 = &local_d0;
  pbVar4 = PTR_DAT_04bb5038 + (uint)(int)*(char *)(param_1 + 0x17);
  if (7 < (uint)(int)*(char *)(param_1 + 0x17)) {
    pbVar4 = PTR_DAT_04bb32e0;
  }
  switch(*(undefined1 *)(param_1 + 0x16)) {
  case 1:
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_78 = puVar1;
    FUN_01a5033c(&local_d0,param_2,*(byte *)(param_1 + 0x19) & 7,&local_78,0);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = puVar1;
    FUN_011f3520(param_2,*(byte *)(param_1 + 0x19) & 7,&local_78);
    puVar10 = PTR_DAT_04bb6298;
    if (*(short *)PTR_DAT_04bb6298 == *(short *)(param_1 + 0x14)) {
      local_80 = (int)*(short *)(param_1 + 0xc);
      iStack_7c = (int)*(short *)(param_1 + 0xe);
      local_88 = puVar1;
      FUN_011e5580(&local_88,0,*(undefined4 *)PTR_DAT_04bb3238);
    }
    lVar21 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
       ((*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0 &&
        ((((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
          (*(long *)(lVar21 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0))))))
    {
      uVar12 = FUN_0277d6c4(&local_d0);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        FUN_0124c030(&local_78,&local_d0);
        iVar13 = FUN_0123db50(&local_70,CONCAT44(iStack_64,local_68));
        if (iVar13 - 0x12U < 6) {
          iVar13 = FUN_0124ffb0(&local_78);
        }
        else {
          iVar13 = -1;
        }
        uVar14 = FUN_0124ee28(&local_78);
        if ((uVar14 & 1) != 0) {
          uVar14 = FUN_0122449c(pbVar4,0);
          if ((0 < iVar13) && ((uVar14 & 1) != 0)) {
            local_98 = (undefined *)CONCAT44(local_98._4_4_,3);
            uVar14 = FUN_0290cbcc(&local_98);
            if ((uVar14 & 1) != 0) {
              local_98 = PTR_DAT_04bb2020 + 0x10;
              local_90 = "HarvestVegetable";
              FUN_0279a9f0(pbVar4,&local_98,iVar13);
            }
          }
          local_98 = (undefined *)CONCAT44(local_98._4_4_,0x20);
          uVar14 = FUN_0290cbcc(&local_98);
          if (((uVar14 & 1) == 0) &&
             (iVar13 = FUN_013837d0(*(undefined2 *)(param_1 + 0x14)), iVar13 != 0x32)) {
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),
                                        (int)*(short *)(param_1 + 0xc));
            FUN_011f3880(param_2,*(byte *)(param_1 + 0x19) & 7,&local_70,&local_98);
            uVar14 = FUN_0123d890(CONCAT44(iStack_64,local_68),4);
            if (((uVar14 & 1) != 0) && (*(short *)puVar10 == *(short *)(param_1 + 0x14))) {
              local_a0 = (int)*(short *)(param_1 + 0xc);
              iStack_9c = (int)*(short *)(param_1 + 0xe);
              local_a8 = puVar2 + 0x10;
              FUN_011e5580(&local_a8,1,*(undefined4 *)PTR_DAT_04bb3238);
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((*(short *)(param_1 + 0xc) == -1) && (*(short *)(param_1 + 0xe) == -1)) {
      return;
    }
  case 3:
  case 0x1e:
  case 0x23:
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
    if (((ulong)local_98 & 0xffff) != 0xfffe) {
      local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
      local_78 = PTR_DAT_04bb2010 + 0x10;
      FUN_011f3880(param_2,*(byte *)(param_1 + 0x19) & 7,&local_98,&local_78);
    }
    break;
  case 4:
    if ((*(byte *)(param_1 + 0x1c) >> 1 & 1) != 0) {
      if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
        local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
        local_78 = PTR_DAT_04bb2010 + 0x10;
        FUN_0122acc0(&local_78,*(undefined2 *)(param_1 + 0x14));
      }
      else {
        local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
        local_78 = PTR_DAT_04bb2010 + 0x10;
        FUN_0122aa10(&local_78,*(undefined2 *)(param_1 + 0x14));
      }
    }
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
    uVar19 = *(ushort *)(param_1 + 0xc);
    uVar23 = *(ushort *)(param_1 + 0xe);
    if ((uVar19 < 0x120) && (uVar23 < 0x100)) {
      lVar21 = (ulong)(uint)(((int)((uint)uVar23 << 0x10) >> 0x11) * 0x90) +
               (ulong)(uint)((int)((uint)uVar19 << 0x10) >> 0x11);
      if ((uint)lVar21 != 0xffffffff) {
        if (8 < (uint)lVar21 >> 0xb) {
          lVar21 = 0;
        }
        *(undefined1 *)(*(long *)PTR_DAT_04bb4778 + lVar21 + 0x2a58) = 0;
        uVar19 = *(ushort *)(param_1 + 0xc);
        uVar23 = *(ushort *)(param_1 + 0xe);
      }
    }
    puVar2 = PTR_DAT_04bb2010;
    local_70 = (char *)CONCAT44((int)(short)uVar23,(int)(short)uVar19);
    local_78 = PTR_DAT_04bb2010 + 0x10;
    FUN_011f3880(param_2,*(byte *)(param_1 + 0x19) & 7,&local_98,&local_78);
    if ((((*pbVar4 < 8) && (uVar12 = FUN_02582d8c(pbVar4,1), uVar12 < 8)) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d6) != '\0')) {
      bVar17 = *(byte *)(param_1 + 0x1a);
      local_38 = 0xfffe;
      FUN_0277d4ac(&local_38);
      local_38 = *(undefined8 *)(param_1 + 4);
      local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
      local_78 = puVar2 + 0x10;
      FUN_022c1a90(pbVar4,bVar17 >> 4 & 7,&local_38,&local_78);
    }
    break;
  case 5:
  case 6:
    bVar17 = *(byte *)(param_1 + 0x19);
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
    goto LAB_022c07c8;
  case 7:
    goto switchD_022c06d8_caseD_7;
  case 8:
    if ((*(byte *)(param_1 + 0x19) & 0xe0) != 0x20) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "ValidatePlayerSaveFlag";
      iVar13 = FUN_0274bce0(pbVar4,&local_78);
      if (iVar13 == 0) {
        return;
      }
    }
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_78 = puVar2;
    FUN_01a5033c(&local_98,param_2,0,&local_78,0);
    lVar21 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))) {
      uVar12 = FUN_0277d6c4(&local_98);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        FUN_0124c030(&local_78,&local_98);
        iVar13 = FUN_0123db50(&local_70,CONCAT44(iStack_64,local_68));
        if ((iVar13 - 2U & 0xfffffff9) == 0) {
          return;
        }
      }
    }
    local_d0 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_d0);
    local_d0 = *(undefined **)(param_1 + 4);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = puVar2;
    goto LAB_022c0cc8;
  case 9:
    local_78 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_78);
    if (*(short *)(param_1 + 4) == -2) {
      local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
      local_78 = PTR_DAT_04bb2010 + 0x10;
      FUN_011f3520(param_2,0,&local_78);
      return;
    }
    goto switchD_022c06d8_caseD_7;
  case 0xb:
    if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      return;
    }
    local_90 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_98 = puVar2;
    FUN_01a5033c(&local_b0,param_2,0,&local_98,0);
    FUN_0124c030(&local_78,&local_b0);
    local_b4[0] = *pbVar4;
    if (7 < local_b4[0]) {
      local_b4[0] = 0xff;
    }
    uVar14 = FUN_01251510(&local_78,local_b4,0);
    if ((uVar14 & 1) != 0) {
      return;
    }
    local_c0 = 0xfffe;
    FUN_0277d4ac(&local_c0);
    local_c0 = *(undefined8 *)(param_1 + 4);
    ppuVar15 = (undefined **)&local_c0;
    local_c8 = (int)*(short *)(param_1 + 0xc);
    iStack_c4 = (int)*(short *)(param_1 + 0xe);
    local_d0 = puVar2;
    goto LAB_022c0ccc;
  case 0xc:
  case 0xd:
    sVar18 = *(short *)PTR_DAT_04bb6298;
    if (sVar18 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
      puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar18 * 8);
      if (0xff < (uint)(int)sVar18) {
        puVar20 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((((*puVar20 >> 0x11 & 1) != 0) &&
           (uVar12 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
           uVar12 < DAT_0534f408)) &&
          (puVar20 = *(uint **)(DAT_0534f410 + (long)(int)uVar12 * 8), puVar20 != (uint *)0x0)) &&
         (uVar12 = *puVar20, uVar12 != 0 && puVar20 != (uint *)(ulong)uVar12)) {
        puVar25 = (uint *)((long)puVar20 - (long)(ulong)uVar12);
        if (((*puVar25 != 0) && (uVar12 = puVar25[1], uVar12 != 0)) &&
           ((ulong)(ushort)puVar25[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar25 + lVar21 + (ulong)(ushort)puVar25[2] * 8;
          if (lVar21 != 0) {
            uVar6 = 0;
            if ((ulong)uVar12 != 0) {
              uVar6 = (uint)((ulong)((long)puVar20 - lVar21) / (ulong)uVar12);
            }
            if (*puVar25 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0e98) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar6 * 2) == 1)) {
              local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),
                                          (int)*(short *)(param_1 + 0xc));
              local_78 = PTR_DAT_04bb2010 + 0x10;
              uVar14 = FUN_01a4f798(param_2,0,&local_78);
              if ((uVar14 & 1) == 0) {
                return;
              }
              iVar13 = *(int *)(param_2 + 8);
              if (iVar13 == 0) {
                local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
              }
              else {
                local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar13);
                if (iVar13 == 0) {
                  lVar21 = 0;
                  goto LAB_022c1a60;
                }
                local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar13);
              }
              if ((uint)local_98 == 0) {
                plVar22 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
              }
              else {
                plVar3 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                plVar22 = plVar3 + ((ulong)local_98 & 0xffffffff);
                if (0x38 < (uint)local_98) {
                  plVar22 = plVar3;
                }
              }
              lVar21 = *plVar22;
LAB_022c1a60:
              local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
              if (*(long *)(lVar21 + 0xd0) == 0) {
                return;
              }
              FUN_012e5af4(*(long *)(lVar21 + 0xd0),&local_78);
              return;
            }
          }
        }
      }
    }
switchD_022c06d8_caseD_7:
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
    ppuVar15 = (undefined **)&local_98;
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
LAB_022c0cc8:
    ppuVar16 = &local_78;
LAB_022c0ccc:
    FUN_011f3390(param_2,0,ppuVar15,ppuVar16);
    break;
  case 0xe:
  case 0x10:
  case 0x11:
    local_78 = PTR_DAT_04bb2010 + 0x10;
    bVar17 = *(byte *)(param_1 + 0x19);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe) +
                                (uint)(*(byte *)(param_1 + 0x1d) >> 4) + -8,
                                (*(byte *)(param_1 + 0x1d) & 0xf) + (int)*(short *)(param_1 + 0xc) +
                                -8);
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
LAB_022c07c8:
    FUN_011f3880(param_2,bVar17 & 7,&local_98,&local_78);
    break;
  case 0x12:
    local_70._0_4_ = (int)*(short *)(param_1 + 0xc);
    local_70._4_4_ = (int)*(short *)(param_1 + 0xe);
    local_78 = PTR_DAT_04bb2010 + 0x10;
    bVar17 = *(byte *)(param_1 + 0x1f);
    cVar7 = *(char *)(param_1 + 0x1c);
    uVar11 = FUN_011bf0b0(pbVar4,&local_78,(uint)(int)cVar7 >> 5 & 3,*(undefined2 *)(param_1 + 0x14)
                          ,*(byte *)(param_1 + 0x18) >> 5,bVar17,(uint)(int)cVar7 >> 7 & 1);
    local_d0 = (undefined *)(CONCAT71(local_d0._1_7_,uVar11) & 0xffffffffffffff01);
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar18 = 0;
      puVar26 = DAT_055c1b60;
      do {
        if (*(int *)(puVar26 + -1) == 0x6622bd46) goto LAB_022c0e44;
        puVar26 = (undefined8 *)puVar26[1];
        sVar18 = sVar18 + 1;
      } while (puVar26 != &DAT_055c1b58);
    }
    sVar18 = -1;
LAB_022c0e44:
    if (*(short *)(param_1 + 0x14) != sVar18) {
      return;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      pbVar5 = (byte *)(lVar21 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
      if (7 < bVar8) {
        pbVar5 = (byte *)(lVar21 + 0x48);
      }
      if (((*pbVar5 >> 3 & 1) != 0) && (*(byte *)(lVar21 + 0x472) != bVar8)) {
        return;
      }
    }
    if (*(byte *)(lVar21 + 0x476) < 2) {
      return;
    }
    uVar14 = FUN_0122449c(pbVar4,0);
    if ((uVar14 & 1) != 0) {
      return;
    }
    bVar8 = *(byte *)(param_1 + 0x1c) >> 5 & 3;
    if (bVar8 == 0) {
      ppuVar15 = &local_78;
    }
    else {
      if (bVar8 == 1) {
        if (0x1f < *(byte *)(param_1 + 0x18)) {
          switch(*(byte *)(param_1 + 0x18) >> 5) {
          case 1:
            if ((bVar17 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + -2);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            }
            if ((bVar17 >> 1 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            }
            iVar13 = (int)local_70;
            iVar24 = local_70._4_4_;
            if ((bVar17 >> 3 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70 + -2);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
              iVar13 = (int)local_70;
              iVar24 = local_70._4_4_;
            }
            if (-1 < cVar7) {
              return;
            }
            local_70._0_4_ = iVar13;
            local_70._4_4_ = iVar24;
            goto LAB_022c175c;
          case 2:
            if ((bVar17 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + -2);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            }
            if ((bVar17 >> 1 & 1) == 0) goto switchD_022c14ac_caseD_3;
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            break;
          case 3:
switchD_022c14ac_caseD_3:
            break;
          case 4:
            goto switchD_022c14ac_caseD_4;
          case 5:
switchD_022c14ac_caseD_5:
            if (cVar7 < '\0') goto LAB_022c19e0;
LAB_022c17a0:
            if ((bVar17 >> 4 & 1) != 0) goto LAB_022c1a08;
            goto joined_r0x022c150c;
          case 6:
            if ((bVar17 >> 1 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
              if ((bVar17 >> 2 & 1) != 0) goto LAB_022c19b0;
              goto switchD_022c14ac_caseD_5;
            }
            if ((bVar17 >> 2 & 1) == 0) goto switchD_022c14ac_caseD_5;
LAB_022c19b0:
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + 2);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            if (-1 < cVar7) goto LAB_022c17a0;
LAB_022c19e0:
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            if ((bVar17 >> 4 & 1) == 0) goto joined_r0x022c150c;
LAB_022c1a08:
            iVar13 = (int)local_70 + 2;
            iVar24 = local_70._4_4_;
            goto LAB_022c1504;
          default:
            if ((bVar17 >> 1 & 1) != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
              FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
              if ((bVar17 >> 2 & 1) != 0) goto LAB_022c186c;
              goto joined_r0x022c1608;
            }
            if ((bVar17 >> 2 & 1) == 0) goto joined_r0x022c1608;
LAB_022c186c:
            iVar13 = (int)local_70 + 2;
            iVar24 = local_70._4_4_ + -2;
            goto LAB_022c1600;
          }
          if ((bVar17 >> 3 & 1) != 0) {
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70 + -2);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          }
          if (cVar7 < '\0') {
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          }
          iVar13 = (int)local_70;
          if ((bVar17 >> 5 & 1) != 0) {
            local_98 = puVar2 + 0x10;
            local_90 = (char *)CONCAT44(local_70._4_4_ + 2,(int)local_70 + -2);
            FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
            iVar13 = (int)local_70;
          }
          if ((bVar17 >> 6 & 1) == 0) {
            return;
          }
          local_70._0_4_ = iVar13;
          goto LAB_022c154c;
        }
        if ((bVar17 & 1) == 0) {
          if ((bVar17 >> 1 & 1) != 0) goto LAB_022c1584;
LAB_022c136c:
          if ((bVar17 >> 2 & 1) != 0) goto LAB_022c15b0;
LAB_022c1370:
          if ((bVar17 >> 3 & 1) == 0) goto joined_r0x022c1608;
LAB_022c15e0:
          iVar13 = (int)local_70 + -2;
          iVar24 = local_70._4_4_;
LAB_022c1600:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(iVar24,iVar13);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        else {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + -2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if ((bVar17 >> 1 & 1) == 0) goto LAB_022c136c;
LAB_022c1584:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if ((bVar17 >> 2 & 1) == 0) goto LAB_022c1370;
LAB_022c15b0:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + 2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if ((bVar17 >> 3 & 1) != 0) goto LAB_022c15e0;
        }
joined_r0x022c1608:
        iVar24 = local_70._4_4_;
        if (cVar7 < '\0') {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          iVar24 = local_70._4_4_;
        }
        if ((bVar17 >> 4 & 1) == 0) {
          return;
        }
        iVar13 = (int)local_70 + 2;
        local_70._4_4_ = iVar24;
      }
      else {
        if (bVar8 != 2) {
          return;
        }
        if ((bVar17 & 1) != 0) {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + -2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        if ((bVar17 >> 1 & 1) != 0) {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        if ((bVar17 >> 2 & 1) == 0) {
switchD_022c14ac_caseD_4:
        }
        else {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + -2,(int)local_70 + 2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        if ((bVar17 >> 3 & 1) == 0) {
          if (cVar7 < '\0') goto LAB_022c1430;
LAB_022c14cc:
          if ((bVar17 >> 4 & 1) != 0) goto LAB_022c1458;
LAB_022c14d0:
          if ((bVar17 >> 5 & 1) == 0) goto joined_r0x022c150c;
LAB_022c14e0:
          iVar13 = (int)local_70 + -2;
          iVar24 = local_70._4_4_ + 2;
LAB_022c1504:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(iVar24,iVar13);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        else {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70 + -2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if (-1 < cVar7) goto LAB_022c14cc;
LAB_022c1430:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if ((bVar17 >> 4 & 1) == 0) goto LAB_022c14d0;
LAB_022c1458:
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_,(int)local_70 + 2);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
          if ((bVar17 >> 5 & 1) != 0) goto LAB_022c14e0;
        }
joined_r0x022c150c:
        if ((bVar17 >> 6 & 1) != 0) {
          local_98 = puVar2 + 0x10;
          local_90 = (char *)CONCAT44(local_70._4_4_ + 2,(int)local_70);
          FUN_022c22f4(param_1,pbVar4,&local_98,&local_d0);
        }
        if (-1 < (char)bVar17) {
          return;
        }
        iVar13 = (int)local_70 + 2;
LAB_022c154c:
        iVar24 = local_70._4_4_ + 2;
      }
LAB_022c175c:
      local_98 = puVar2 + 0x10;
      ppuVar15 = (undefined **)&local_98;
      local_90 = (char *)CONCAT44(iVar24,iVar13);
    }
    FUN_022c22f4(param_1,pbVar4,ppuVar15,&local_d0);
    break;
  case 0x13:
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    puVar2 = PTR_DAT_04bb2010;
    local_98 = *(undefined **)(param_1 + 4);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
    FUN_011f3390(param_2,0,&local_98,&local_78);
    sVar18 = *(short *)PTR_DAT_04bb6298;
    if (sVar18 == -1) {
LAB_022c0f74:
      uVar14 = FUN_0122a4e0(*(undefined2 *)(param_1 + 0x14));
      if ((uVar14 & 1) == 0) {
        return;
      }
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar18 * 8);
      if (0xff < (uint)(int)sVar18) {
        puVar20 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar20 >> 3 & 1) == 0) goto LAB_022c0f74;
    }
    local_98 = puVar2 + 0x10;
    local_90 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
      local_78 = PTR_DAT_04bbc5d8 + 0x10;
      local_70 = PTR_DAT_04bb2018 + 0x10;
      fVar28 = (float)(int)*(short *)(param_1 + 0xc) * 0.5;
      fVar29 = (float)(int)*(short *)(param_1 + 0xe) * 0.5;
      uVar12 = 0;
      if (fVar28 != (float)(int)fVar28) {
        uVar12 = (uint)(fVar28 < 0.0);
      }
      local_68 = (int)fVar28 - uVar12;
      uVar12 = 0;
      if (fVar29 != (float)(int)fVar29) {
        uVar12 = (uint)(fVar29 < 0.0);
      }
      iStack_64 = (int)fVar29 - uVar12;
      local_60 = local_70;
      local_58 = local_68;
      iStack_54 = iStack_64;
      FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_78);
    }
    FUN_011dbc54(&local_98,0);
    break;
  case 0x14:
    local_d0 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_d0);
    local_d0 = *(undefined **)(param_1 + 4);
    FUN_0124c030(&local_78,&local_d0);
    local_b0 = 0xfffe;
    FUN_0277d4ac(&local_b0);
    local_b0 = *(undefined8 *)(param_1 + 4);
    ppuVar15 = (undefined **)&local_b0;
    ppuVar16 = (undefined **)&local_98;
    local_90 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_98 = PTR_DAT_04bb2010 + 0x10;
    goto LAB_022c0ccc;
  case 0x15:
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    bVar17 = *(byte *)(param_1 + 0x19);
    local_98 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_98);
    local_98 = *(undefined **)(param_1 + 4);
    FUN_011f3880(param_2,bVar17 & 7,&local_98,&local_78);
    FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_78,1);
    sVar18 = *(short *)(param_1 + 0xc);
    sVar9 = *(short *)(param_1 + 0xe);
    lVar27 = *(long *)PTR_DAT_04bb26a8;
    nn::os::LockMutex((MutexType *)(lVar27 + 0x1466a8));
    lVar21 = lVar27 + 0x146648 + (ulong)*(uint *)(lVar27 + 0x146640) * 0x20;
    if (1 < *(uint *)(lVar27 + 0x146640)) {
      lVar21 = lVar27 + 0x146648;
    }
    FUN_02a061d0(lVar21,(int)sVar18,(int)sVar9);
    nn::os::UnlockMutex((MutexType *)(lVar27 + 0x1466a8));
    break;
  case 0x16:
  case 0x1d:
    bVar17 = *(byte *)(param_1 + 0x19);
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    goto LAB_022c0968;
  case 0x18:
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
    FUN_01a5033c(&local_98,param_2,*(byte *)(param_1 + 0x19) & 7,&local_78,0);
    iVar13 = FUN_0277d6c4(&local_98);
    if (iVar13 != 0xea79) {
      return;
    }
    local_70 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    bVar17 = *(byte *)(param_1 + 0x19);
LAB_022c0968:
    local_78 = puVar2 + 0x10;
    FUN_011f3520(param_2,bVar17 & 7,&local_78);
  }
  return;
}

