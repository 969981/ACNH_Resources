
/* WARNING: Removing unreachable block (ram,0x035ac5ac) */
/* WARNING: Removing unreachable block (ram,0x035ac59c) */
/* WARNING: Removing unreachable block (ram,0x035ac858) */

void FUN_035ac520(undefined8 param_1,char *param_2,long param_3,ushort *param_4,long param_5,
                 long param_6,int param_7,int param_8,uint param_9,uint param_10)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  ulong uVar23;
  long local_e0;
  undefined *local_d8;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined *local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined2 local_98;
  byte local_96;
  undefined1 local_95;
  undefined4 local_94;
  long local_90;
  byte local_70;
  byte local_6f;
  undefined1 local_6e;
  byte local_6d;
  
  uVar23 = (ulong)param_9;
  lVar19 = *(long *)PTR_DAT_04bb27c8;
  if ((param_6 == 0) || (*(long *)(param_6 + 0x18) == 0)) {
    local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
    local_e0 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    local_e0 = 0;
  }
  memset(param_2,2,(long)(int)(param_10 * param_9));
  memset(DAT_057763e8,0,(long)DAT_057763e0._4_4_ << 2);
  DAT_057763f0 = 0;
  memset(*(void **)(param_3 + 0x10),0,(long)*(int *)(param_3 + 0xc) << 2);
  *(undefined4 *)(param_3 + 0x18) = 0;
  puVar6 = PTR_DAT_04bb43c0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  if (0 < (int)param_9) {
    if (0 < (int)param_10) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      uVar15 = 0;
      pcVar12 = param_2;
      do {
        uVar21 = 0;
        uVar2 = (int)uVar15 + param_7;
        pcVar22 = pcVar12;
        do {
          uStack_b4 = param_8 + (int)uVar21;
          local_b8 = uVar2;
          if (param_5 == 0) {
            uVar11 = FUN_00948e68(lVar19 + 0x28,&local_c0,(long)&local_a8 + 4,&local_a8,
                                  (long)&local_b0 + 4,&local_b0);
            if ((uVar11 & 1) != 0) {
              uVar9 = local_a8._4_4_;
              goto LAB_035ac764;
            }
          }
          else if ((((-1 < (int)uVar2) && (-1 < (int)uStack_b4)) &&
                   (uVar2 < *(uint *)(param_5 + 0x38))) && (uStack_b4 < *(uint *)(param_5 + 0x3c)))
          {
            FUN_00962530(param_5,&local_c0,&local_a0);
            local_a8 = (ulong)CONCAT14(local_70,(uint)local_6f);
            local_b0 = (ulong)CONCAT14(local_6e,(uint)local_6d);
            uVar9 = (uint)local_70;
LAB_035ac764:
            if (((((uVar9 - 0x1f < 6) || (uVar9 - 0x1a < 2)) &&
                 (((int)local_a8 - 0x1fU < 6 || ((int)local_a8 - 0x1aU < 2)))) &&
                ((local_b0._4_4_ - 0x1fU < 6 || (local_b0._4_4_ - 0x1aU < 2)))) &&
               (((int)local_b0 - 0x1fU < 6 || ((int)local_b0 - 0x1aU < 2)))) {
              uVar14 = (int)uVar15 + DAT_057763f4 * (int)uVar21;
              uVar18 = 1 << (ulong)(uVar14 & 0x1f);
              uVar9 = *(uint *)((long)DAT_057763e8 + (long)((int)uVar14 >> 5) * 4);
              if ((uVar18 & uVar9) == 0) {
                *(uint *)((long)DAT_057763e8 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
                     uVar18 | uVar9;
                DAT_057763f0 = DAT_057763f0 + 1;
              }
            }
          }
          local_c8 = 0xfffe;
          FUN_0277d4ac(&local_c8);
          local_d0 = local_b8;
          local_cc = uStack_b4;
          if (local_e0 != 0) {
            local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
            lVar16 = *(long *)(local_e0 + 0xd0);
            if (lVar16 == 0) goto LAB_035ac9f0;
            lVar20 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar16 + 0x198)) {
              lVar20 = lVar16 + 0x130;
            }
            iVar10 = *(int *)(lVar20 + 0x28);
            psVar17 = &DAT_05586008;
            if (iVar10 <= (int)local_b8 && (int)local_b8 <= *(int *)(lVar20 + 8) + iVar10 + -1) {
              iVar4 = *(int *)(lVar20 + 0xc);
              iVar5 = *(int *)(lVar20 + 0x2c);
              psVar17 = &DAT_05586008;
              if (iVar5 <= (int)uStack_b4 && (int)uStack_b4 <= iVar4 + iVar5 + -1) {
                uVar18 = (uStack_b4 - iVar5) + (local_b8 - iVar10) * iVar4;
                uVar9 = *(uint *)(lVar20 + 0x10);
                if (uVar18 < uVar9) {
                  lVar16 = *(long *)(lVar20 + 0x18);
                  psVar17 = (short *)(lVar16 + (long)(int)uVar18 * 8);
                  uVar14 = local_b8;
                  uVar13 = uStack_b4;
                  if (*psVar17 == -3) {
                    uVar18 = *(uint *)(lVar16 + (long)(int)uVar18 * 8 + 4);
                    uVar13 = uStack_b4 - (uVar18 >> 0x18);
                    uVar14 = local_b8 - (uVar18 >> 0x10 & 0xff);
                    uVar18 = (uVar13 - iVar5) + (uVar14 - iVar10) * iVar4;
LAB_035ac9c8:
                    psVar17 = (short *)PTR_DAT_04bb37e0;
                    if (uVar9 <= uVar18) goto LAB_035ac9f8;
                    psVar17 = (short *)(lVar16 + (long)(int)uVar18 * 8);
                  }
                  local_cc = uVar13;
                  local_d0 = uVar14;
                }
              }
            }
            goto LAB_035ac9f8;
          }
          if (param_6 != 0) {
            iVar10 = *(int *)(param_6 + 0x28);
            if ((int)local_b8 < iVar10) {
LAB_035ac9f0:
              psVar17 = &DAT_05586008;
            }
            else {
              psVar17 = &DAT_05586008;
              if ((int)local_b8 <= *(int *)(param_6 + 8) + iVar10 + -1) {
                iVar4 = *(int *)(param_6 + 0x2c);
                if ((int)uStack_b4 < iVar4) goto LAB_035ac9f0;
                iVar5 = *(int *)(param_6 + 0xc);
                psVar17 = &DAT_05586008;
                if ((int)uStack_b4 <= iVar5 + iVar4 + -1) {
                  uVar18 = (uStack_b4 - iVar4) + (local_b8 - iVar10) * iVar5;
                  uVar9 = *(uint *)(param_6 + 0x10);
                  psVar17 = &DAT_05586008;
                  if (uVar18 < uVar9) {
                    lVar16 = *(long *)(param_6 + 0x18);
                    psVar17 = (short *)(lVar16 + (long)(int)uVar18 * 8);
                    if (*psVar17 == -3) {
                      uVar18 = *(uint *)(lVar16 + (long)(int)uVar18 * 8 + 4);
                      uVar13 = uStack_b4 - (uVar18 >> 0x18);
                      uVar14 = local_b8 - (uVar18 >> 0x10 & 0xff);
                      uVar18 = (uVar13 - iVar4) + (uVar14 - iVar10) * iVar5;
                      goto LAB_035ac9c8;
                    }
                  }
                }
              }
            }
LAB_035ac9f8:
            local_c8 = *(undefined8 *)psVar17;
          }
          lVar20 = *(long *)puVar6;
          local_d8 = puVar1;
          uVar9 = FUN_0277d6c4(&local_c8);
          lVar16 = DAT_05150358;
          if (*(long *)puVar6 == 0) {
LAB_035acb50:
            if (((DAT_05150358 != 0) &&
                (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
                  (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
                 (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
               (((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
                 (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
                (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
              uVar9 = FUN_0277d6c4(&local_c8);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                FUN_0124c030(&local_a0,&local_c8);
                iVar10 = FUN_0123db50(&local_98,local_90);
                if ((iVar10 - 0x23U < 9) ||
                   (iVar10 = FUN_0123db50(&local_98,local_90), iVar10 - 0x12U < 6))
                goto LAB_035ac6c0;
              }
            }
          }
          else {
            lVar20 = *(long *)(lVar20 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((*(uint *)(lVar20 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_035acb50;
            uVar11 = FUN_0277e158(&local_c8);
            if ((uVar11 & 1) == 0) {
              local_90 = 0;
              bVar7 = local_c8._2_1_;
              local_a0 = &PTR_FUN_04a36b50;
              lVar16 = *(long *)puVar6;
              local_96 = local_c8._2_1_;
              local_95 = local_c8._3_1_;
              local_98 = (undefined2)local_c8;
              local_94 = local_c8._4_4_;
              uVar9 = FUN_0277d6c4(&local_98);
              if (*(long *)puVar6 != 0) {
                lVar16 = *(long *)(lVar16 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                  lVar16 = *(long *)PTR_DAT_04bc0428;
                  uVar9 = FUN_0277d6c4(&local_c8);
                  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                  if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
                    lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
                    if (lVar16 != 0) {
                      local_90 = lVar16;
                    }
                  }
                }
              }
              uVar11 = FUN_01ae59b0(&local_a0);
              bVar3 = bVar7 >> 2 & 1;
              if ((uVar11 & 1) == 0) {
                bVar3 = bVar7 & 4;
              }
              if ((bVar3 == 0) &&
                 (uVar11 = FUN_0097b580(&local_c8,&local_c0,&local_d8,1), (uVar11 & 1) == 0))
              goto LAB_035ac6c0;
            }
            else {
LAB_035ac6c0:
              *pcVar22 = '\x03';
            }
          }
          uVar21 = uVar21 + 1;
          pcVar22 = pcVar22 + uVar23;
        } while (param_10 != uVar21);
        uVar15 = uVar15 + 1;
        pcVar12 = pcVar12 + 1;
      } while (uVar15 != uVar23);
    }
    if ((1 < (int)param_9) && (1 < (int)param_10)) {
      uVar15 = 1;
      do {
        lVar19 = 0;
        iVar10 = (int)uVar15;
        pcVar12 = param_2;
        do {
          pcVar22 = pcVar12 + uVar23;
          iVar4 = (int)lVar19;
          if ((byte)pcVar22[1] < 3) {
            iVar5 = DAT_057763f4 * (iVar4 + 1);
            uVar2 = iVar5 + iVar10;
            uVar9 = DAT_057763f4 * iVar4 + iVar10;
            uVar18 = iVar5 + iVar10 + -1;
            uVar14 = DAT_057763f4 * iVar4 + iVar10 + -1;
            bVar8 = (*(uint *)((long)DAT_057763e8 + (long)((int)uVar14 >> 5) * 4) &
                    1 << (ulong)(uVar14 & 0x1f)) != 0;
            uVar14 = 1;
            if (bVar8) {
              uVar14 = 2;
            }
            uVar13 = (uint)bVar8;
            if ((*(uint *)((long)DAT_057763e8 + (long)((int)uVar18 >> 5) * 4) >>
                 (ulong)(uVar18 & 0x1f) & 1) != 0) {
              uVar13 = uVar14;
            }
            iVar5 = (*(uint *)((long)DAT_057763e8 + (long)((int)uVar2 >> 5) * 4) >>
                     (ulong)(uVar2 & 0x1f) & 1) +
                    (*(uint *)((long)DAT_057763e8 + (long)((int)uVar9 >> 5) * 4) >>
                     (ulong)(uVar9 & 0x1f) & 1) + uVar13;
            if (iVar5 != 0) {
              pcVar22[1] = iVar5 != 4;
            }
          }
          if (((*pcVar12 == '\x03') || (pcVar12[uVar23] == '\x03')) || (pcVar12[1] == '\x03')) {
            uVar18 = iVar10 + *(int *)(param_3 + 0x1c) * (iVar4 + 1);
            uVar9 = 1 << (ulong)(uVar18 & 0x1f);
            uVar2 = *(uint *)(*(long *)(param_3 + 0x10) + (long)((int)uVar18 >> 5) * 4);
            if ((uVar9 & uVar2) == 0) {
              *(uint *)(*(long *)(param_3 + 0x10) + ((long)((ulong)uVar18 << 0x20) >> 0x25) * 4) =
                   uVar9 | uVar2;
              *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
            }
          }
          if (*(char *)(*(long *)(param_4 + 0x10) +
                        (long)(int)(((iVar10 + param_7) - (uint)*param_4) +
                                   *(int *)(param_4 + 6) *
                                   ((param_8 + 1 + iVar4) - (uint)param_4[1])) * 0x28 + 6) == '\x03'
             ) {
            pcVar22[1] = '\x04';
          }
          lVar19 = lVar19 + 1;
          pcVar12 = pcVar22;
        } while ((ulong)param_10 - 1 != lVar19);
        uVar15 = uVar15 + 1;
        param_2 = param_2 + 1;
      } while (uVar15 != uVar23);
    }
  }
  return;
}

