
/* WARNING: Removing unreachable block (ram,0x02b1f078) */
/* WARNING: Removing unreachable block (ram,0x02b1f4e4) */
/* WARNING: Removing unreachable block (ram,0x02b1f010) */
/* WARNING: Removing unreachable block (ram,0x02b1f000) */
/* WARNING: Removing unreachable block (ram,0x02b1f01c) */
/* WARNING: Removing unreachable block (ram,0x02b1f044) */

void FUN_02b1efc0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined2 uVar11;
  bool bVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined4 uVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined8 local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined *local_e8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  puVar13 = PTR_DAT_04bb37e0;
  lVar17 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar17 == 0) {
    return;
  }
  uVar16 = (ulong)local_a0 >> 0x20;
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  if (*(long *)(lVar17 + 0xd0) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
    if (*(long *)(param_2 + 0xc0) != 0) {
      uVar14 = 10;
      local_a0 = (undefined *)CONCAT44((int)uVar16,10);
      lVar19 = *(long *)(*(long *)(param_2 + 0xc0) + 0xc0);
      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x48) != '\0')) goto LAB_02b1f098;
    }
    lVar19 = param_2 + 0x90;
  }
  else {
    uVar14 = 4;
LAB_02b1f098:
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar14);
    lVar19 = param_2 + 0xf8 + (ulong)uVar14 * 0x70;
    if (10 < uVar14) {
      lVar19 = param_2 + 0xf8;
    }
    lVar19 = lVar19 + 0x28;
  }
  local_c0 = lVar19 + 8;
  local_b8 = lVar19 + 0x18;
  local_a8 = *(int *)(lVar19 + 0x10);
  local_a4 = *(int *)(lVar19 + 0x14);
  iVar9 = *(int *)(lVar19 + 0x10);
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(lVar19 + 0x24) + 1;
  local_b0 = puVar2;
  if ((iVar9 != local_a8) || (iVar1 != local_a4)) {
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    puVar5 = PTR_DAT_04bbc5d8 + 0x10;
    puVar6 = PTR_DAT_04bb2018 + 0x10;
    plVar23 = (long *)PTR_DAT_04bbbc68;
    do {
      local_c8 = 0;
      local_d8 = (undefined *)0xfffe;
      local_d0 = puVar2;
      FUN_0277d4ac(&local_d8);
      if (*(long *)(lVar17 + 0xd0) == 0) {
        sVar10 = *(short *)puVar13;
        uVar18 = puVar13[2];
        uVar20 = puVar13[3];
        uVar22 = *(undefined4 *)(puVar13 + 4);
      }
      else {
        FUN_012e4f58(&local_a0,*(long *)(lVar17 + 0xd0),&local_b0,&local_d0);
        uVar18 = local_a0._2_1_;
        uVar20 = local_a0._3_1_;
        uVar22 = local_a0._4_4_;
        sVar10 = (short)local_a0;
      }
      local_d8 = (undefined *)CONCAT44(uVar22,CONCAT13(uVar20,CONCAT12(uVar18,sVar10)));
      if (sVar10 != -2) {
        uVar16 = FUN_02a7c208(param_2,&local_b0);
        if ((uVar16 & 1) == 0) {
          bVar12 = false;
        }
        else {
          lVar19 = *plVar23;
          if ((((((lVar19 != 0) && (*(long *)(lVar19 + 0xb0) != 0)) &&
                (*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0)) &&
               ((*(long *)(lVar19 + 0x488) != 0 && (*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0)))
               ) && (*(long *)(lVar19 + 0x2b0) != 0)) &&
             (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0)) {
            uVar14 = FUN_0277d6c4(&local_d8);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              FUN_0124c030(&local_a0,&local_d8);
              uVar16 = FUN_0123d890(local_90,4);
              if (((uVar16 & 1) != 0) ||
                 ((uVar16 = FUN_0124dcb0(&local_a0), (uVar16 & 1) != 0 ||
                  (iVar15 = FUN_0123db50(&local_98,local_90), (iVar15 - 2U & 0xfffffff9) == 0)))) {
                if (*(long *)(lVar17 + 0xd0) != 0) {
                  FUN_012e5af4(*(long *)(lVar17 + 0xd0),&local_b0);
                }
                bVar12 = true;
                goto LAB_02b1f324;
              }
            }
          }
          bVar12 = false;
        }
LAB_02b1f324:
        uVar16 = FUN_02a7c524(param_2,&local_b0);
        if (((((uVar16 & 1) != 0) && (lVar19 = *plVar23, lVar19 != 0)) &&
            (*(long *)(lVar19 + 0xb0) != 0)) &&
           (((*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0 && (*(long *)(lVar19 + 0x488) != 0)) &&
            ((*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0 &&
             ((*(long *)(lVar19 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0)))))
            ))) {
          uVar14 = FUN_0277d6c4(&local_d8);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            FUN_0124c030(&local_a0,&local_d8);
            iVar15 = FUN_0123db50(&local_98,local_90);
            if (iVar15 == 0x2e) {
              if (*(long *)(lVar17 + 0xd0) != 0) {
                FUN_012e5af4(*(long *)(lVar17 + 0xd0),&local_b0);
              }
              bVar12 = true;
            }
          }
        }
        uVar16 = FUN_02a7c074(param_2,&local_b0);
        if ((uVar16 & 1) == 0) {
LAB_02b1f6ac:
          if (!bVar12) goto LAB_02b1f774;
        }
        else {
          lVar19 = *plVar23;
          if ((((lVar19 != 0) && (*(long *)(lVar19 + 0xb0) != 0)) &&
              (*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0)) &&
             (((*(long *)(lVar19 + 0x488) != 0 && (*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0))
              && ((*(long *)(lVar19 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0)
                  ))))) {
            uVar14 = FUN_0277d6c4(&local_d8);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              FUN_0124c030(&local_a0,&local_d8);
              iVar15 = FUN_0123db50(&local_98,local_90);
              if (iVar15 == 0x2d) {
                bVar12 = true;
              }
            }
          }
          uVar16 = FUN_0277e294(&local_d8);
          if ((uVar16 & 1) != 0) {
            local_90 = 0;
            puVar7 = PTR_DAT_04bb2010 + 0x10;
            local_80 = 0;
            local_a0 = puVar3;
            local_98 = puVar7;
            local_88 = puVar7;
            FUN_0277f02c(&local_d8,&local_a0);
            iVar15 = (int)local_90 + (int)local_c8;
            local_dc = local_90._4_4_ + local_c8._4_4_;
            iVar8 = local_80._4_4_ + local_c8._4_4_;
            local_80 = CONCAT44(iVar8,(int)local_80 + (int)local_c8);
            local_90 = CONCAT44(local_dc,iVar15);
            if (*(long *)(lVar17 + 0xe0) == 0) {
              return;
            }
            local_f8 = &local_98;
            local_f0 = &local_88;
            local_e8 = puVar7;
            local_e0 = iVar15;
            while (iVar8 + 1 != local_dc) {
              do {
                local_100 = 0xfffe;
                FUN_0277d4ac(&local_100);
                if (*(long *)(lVar17 + 0xe0) == 0) {
                  uVar11 = *(undefined2 *)puVar13;
                  uVar18 = puVar13[2];
                  uVar20 = puVar13[3];
                  uVar22 = *(undefined4 *)(puVar13 + 4);
                }
                else {
                  FUN_012e4d78(&local_68,*(long *)(lVar17 + 0xe0),&local_e8);
                  uVar18 = local_66;
                  uVar20 = local_65;
                  uVar22 = local_64;
                  uVar11 = local_68;
                }
                local_100 = CONCAT44(uVar22,CONCAT13(uVar20,CONCAT12(uVar18,uVar11)));
                FUN_02b1f7e0(&local_100);
                if (local_e0 < *(int *)(local_f0 + 1)) {
                  local_e0 = local_e0 + 1;
                }
                else {
                  local_dc = local_dc + 1;
                  local_e0 = *(int *)(local_f8 + 1);
                }
              } while (iVar15 != local_e0);
            }
            FUN_02b1f7e0(&local_d8);
            FUN_01513b9c(&local_b0,0,1);
            puVar7 = PTR_DAT_04bb43c0;
            local_90 = 0;
            local_98 = local_d8;
            lVar19 = *(long *)PTR_DAT_04bb43c0;
            local_a0 = puVar4;
            uVar14 = FUN_0277d6c4(&local_98);
            if (*(long *)puVar7 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                lVar19 = *(long *)PTR_DAT_04bc0428;
                uVar14 = FUN_0277d6c4(&local_d8);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
                   (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8),
                   lVar19 != 0)) {
                  local_90 = lVar19;
                }
              }
            }
            uVar16 = FUN_01b0140c(&local_a0);
            if ((uVar16 & 1) != 0) {
              FUN_015547f0(*(long *)PTR_DAT_04bb4c80 + 0x2540,&local_b0);
            }
            plVar23 = (long *)PTR_DAT_04bbbc68;
            goto LAB_02b1f6ac;
          }
          uVar16 = FUN_0122cbac(&local_b0);
          if ((uVar16 & 1) == 0) {
            FUN_02b1f7e0(&local_d8);
          }
          if (*(long *)(lVar17 + 0xd0) != 0) {
            FUN_012e5af4(*(long *)(lVar17 + 0xd0),&local_b0);
          }
        }
        if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
          fVar24 = (float)(int)local_c8 * 0.5;
          uVar14 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar14 = (uint)(fVar24 < 0.0);
          }
          fVar25 = (float)local_c8._4_4_ * 0.5;
          uVar21 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar21 = (uint)(fVar25 < 0.0);
          }
          local_90 = CONCAT44((int)fVar25 - uVar21,(int)fVar24 - uVar14);
          local_80 = CONCAT44((int)fVar25 - uVar21,(int)fVar24 - uVar14);
          local_a0 = puVar5;
          local_98 = puVar6;
          local_88 = puVar6;
          FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_a0);
        }
        FUN_011dbc54(&local_d0,0);
      }
LAB_02b1f774:
      if (local_a8 < *(int *)(local_b8 + 8)) {
        local_a8 = local_a8 + 1;
      }
      else {
        local_a4 = local_a4 + 1;
        local_a8 = *(int *)(local_c0 + 8);
      }
    } while ((iVar9 != local_a8) || (iVar1 != local_a4));
  }
  FUN_01a186f0(param_2);
  FUN_0142b390(param_2);
  FUN_02979ac0(param_2);
  FUN_02291650(*(undefined8 *)PTR_DAT_04bb4848,param_2);
  return;
}

