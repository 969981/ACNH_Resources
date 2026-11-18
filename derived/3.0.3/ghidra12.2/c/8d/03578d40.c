
void FUN_03578d40(uint *param_1)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  short *psVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  
  if (param_1 != (uint *)0x0) {
    FUN_02f9fdb8(&local_108);
    lVar8 = DAT_0538d0b0;
    FUN_01e2543c(DAT_0538d0b0);
    lVar11 = DAT_0538d0b0;
    local_108 = *(undefined4 *)(lVar8 + 0x3c);
    uStack_104 = *(undefined4 *)(lVar8 + 0x40);
    local_100 = *(undefined8 *)(lVar8 + 0x44);
    uStack_f8 = *(undefined8 *)(lVar8 + 0x4c);
    local_f0 = *(undefined8 *)(lVar8 + 0x54);
    uStack_e8 = *(undefined8 *)(lVar8 + 0x5c);
    local_e0 = *(undefined4 *)(lVar8 + 100);
    uStack_dc = *(undefined4 *)(lVar8 + 0x68);
    FUN_01e2543c(DAT_0538d0b0);
    local_d8 = *(undefined4 *)(lVar11 + 0xac);
    uStack_d4 = *(undefined4 *)(lVar11 + 0xb0);
    local_c0 = *(undefined8 *)(lVar11 + 0xc4);
    local_d0 = *(undefined8 *)(lVar11 + 0xb4);
    uStack_c8 = *(undefined8 *)(lVar11 + 0xbc);
    local_b8 = *(undefined4 *)(lVar11 + 0xcc);
    uStack_b4 = *(undefined4 *)(lVar11 + 0xd0);
    local_70 = 0xc86;
    FUN_0277d4ac(&local_70);
    lVar8 = DAT_0538d0b0;
    local_a8 = *(undefined4 *)(lVar11 + 0xd4);
    uStack_a4 = *(undefined4 *)(lVar11 + 0xd8);
    local_b0 = (undefined4)local_70;
    uStack_ac = local_70._4_4_;
    FUN_01e2543c(DAT_0538d0b0);
    puVar5 = PTR_DAT_04bb37e0;
    local_a0 = *(undefined4 *)(lVar8 + 0x11c);
    uStack_9c = *(undefined4 *)(lVar8 + 0x120);
    local_98 = *(undefined8 *)(lVar8 + 0x124);
    uStack_90 = *(undefined8 *)(lVar8 + 300);
    uVar19 = *param_1;
    uVar10 = (ulong)uVar19;
    local_88 = *(undefined8 *)(lVar8 + 0x134);
    uStack_80 = *(undefined8 *)(lVar8 + 0x13c);
    local_78 = *(undefined4 *)(lVar8 + 0x144);
    uStack_74 = *(undefined4 *)(lVar8 + 0x148);
    if (1 < (int)uVar19) {
      plVar13 = *(long **)(param_1 + 2);
      uVar9 = (ulong)(uVar19 >> 1);
      do {
        uVar14 = (uint)uVar9;
        uVar18 = uVar14 * 2;
        lVar8 = plVar13[uVar9 - 1 & 0xffffffff];
        if ((int)uVar18 <= (int)uVar19) {
          psVar2 = (short *)(lVar8 + 8);
          uVar16 = uVar9 & 0xffffffff;
          do {
            uVar14 = (uint)uVar16;
            uVar4 = uVar18;
            if ((int)uVar18 < (int)uVar19) {
              lVar11 = plVar13[(int)uVar18];
              psVar17 = (short *)((plVar13 + (int)uVar18)[-1] + 8);
              psVar3 = (short *)puVar5;
              if (*psVar17 != -2) {
                psVar3 = psVar17;
              }
              local_70 = *(undefined8 *)psVar3;
              iVar6 = FUN_0277d6c4(&local_70);
              if (iVar6 != 0xa37) {
                psVar12 = (short *)(lVar11 + 8);
                psVar3 = (short *)puVar5;
                if (*psVar12 != -2) {
                  psVar3 = psVar12;
                }
                local_70 = *(undefined8 *)psVar3;
                iVar6 = FUN_0277d6c4(&local_70);
                if (iVar6 == 0xa37) goto LAB_03578f44;
                uVar15 = 0;
                do {
                  lVar11 = (long)&local_108 + ((long)((ulong)uVar15 << 0x20) >> 0x1d);
                  psVar3 = (short *)puVar5;
                  if (*psVar17 != -2) {
                    psVar3 = psVar17;
                  }
                  local_70 = *(undefined8 *)psVar3;
                  uVar16 = FUN_0277d7b4(&local_70,lVar11);
                  if ((uVar16 & 1) != 0) break;
                  psVar3 = (short *)puVar5;
                  if (*psVar12 != -2) {
                    psVar3 = psVar12;
                  }
                  local_70 = *(undefined8 *)psVar3;
                  uVar16 = FUN_0277d7b4(&local_70,lVar11);
                  if ((uVar16 & 1) != 0) goto LAB_03578f44;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != 0x13);
              }
              uVar4 = uVar18 | 1;
            }
LAB_03578f44:
            uVar16 = (ulong)uVar4;
            lVar11 = plVar13[(int)(uVar4 - 1)];
            psVar3 = (short *)puVar5;
            if (*psVar2 != -2) {
              psVar3 = psVar2;
            }
            local_70 = *(undefined8 *)psVar3;
            iVar6 = FUN_0277d6c4(&local_70);
            if (iVar6 != 0xa37) {
              psVar17 = (short *)(lVar11 + 8);
              psVar3 = (short *)puVar5;
              if (*psVar17 != -2) {
                psVar3 = psVar17;
              }
              local_70 = *(undefined8 *)psVar3;
              iVar6 = FUN_0277d6c4(&local_70);
              if (iVar6 == 0xa37) break;
              uVar18 = 0;
              do {
                lVar11 = (long)&local_108 + ((long)((ulong)uVar18 << 0x20) >> 0x1d);
                psVar3 = (short *)puVar5;
                if (*psVar2 != -2) {
                  psVar3 = psVar2;
                }
                local_70 = *(undefined8 *)psVar3;
                uVar7 = FUN_0277d7b4(&local_70,lVar11);
                if ((uVar7 & 1) != 0) break;
                psVar3 = (short *)puVar5;
                if (*psVar17 != -2) {
                  psVar3 = psVar17;
                }
                local_70 = *(undefined8 *)psVar3;
                uVar7 = FUN_0277d7b4(&local_70,lVar11);
                if ((uVar7 & 1) != 0) goto LAB_03578e74;
                uVar18 = uVar18 + 1;
              } while (uVar18 != 0x13);
            }
            uVar18 = uVar4 * 2;
            plVar13[(int)(uVar14 - 1)] = plVar13[(int)(uVar4 - 1)];
            uVar14 = uVar4;
          } while ((int)uVar18 <= (int)uVar19);
        }
LAB_03578e74:
        plVar13[(int)(uVar14 - 1)] = lVar8;
        bVar1 = 1 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
      uVar9 = uVar10 - 1 & 0xffffffff;
      lVar8 = plVar13[uVar9];
      plVar13[uVar9] = *plVar13;
      uVar9 = uVar10 - 1;
      if (2 < uVar19) {
        do {
          uVar16 = uVar9;
          psVar2 = (short *)(lVar8 + 8);
          uVar19 = 2;
          uVar18 = 1;
          do {
            if ((int)uVar19 < (int)uVar16) {
              lVar11 = plVar13[(int)uVar19];
              psVar17 = (short *)((plVar13 + (int)uVar19)[-1] + 8);
              psVar3 = (short *)puVar5;
              if (*psVar17 != -2) {
                psVar3 = psVar17;
              }
              local_70 = *(undefined8 *)psVar3;
              iVar6 = FUN_0277d6c4(&local_70);
              if (iVar6 != 0xa37) {
                psVar12 = (short *)(lVar11 + 8);
                psVar3 = (short *)puVar5;
                if (*psVar12 != -2) {
                  psVar3 = psVar12;
                }
                local_70 = *(undefined8 *)psVar3;
                iVar6 = FUN_0277d6c4(&local_70);
                if (iVar6 == 0xa37) goto LAB_03579174;
                uVar14 = 0;
                do {
                  lVar11 = (long)&local_108 + ((long)((ulong)uVar14 << 0x20) >> 0x1d);
                  psVar3 = (short *)puVar5;
                  if (*psVar17 != -2) {
                    psVar3 = psVar17;
                  }
                  local_70 = *(undefined8 *)psVar3;
                  uVar9 = FUN_0277d7b4(&local_70,lVar11);
                  if ((uVar9 & 1) != 0) break;
                  psVar3 = (short *)puVar5;
                  if (*psVar12 != -2) {
                    psVar3 = psVar12;
                  }
                  local_70 = *(undefined8 *)psVar3;
                  uVar9 = FUN_0277d7b4(&local_70,lVar11);
                  if ((uVar9 & 1) != 0) goto LAB_03579174;
                  uVar14 = uVar14 + 1;
                } while (uVar14 != 0x13);
              }
              uVar14 = uVar19 | 1;
            }
            else {
LAB_03579174:
              uVar14 = uVar19;
            }
            lVar11 = plVar13[(int)(uVar14 - 1)];
            psVar3 = (short *)puVar5;
            if (*psVar2 != -2) {
              psVar3 = psVar2;
            }
            local_70 = *(undefined8 *)psVar3;
            iVar6 = FUN_0277d6c4(&local_70);
            if (iVar6 != 0xa37) {
              psVar17 = (short *)(lVar11 + 8);
              psVar3 = (short *)puVar5;
              if (*psVar17 != -2) {
                psVar3 = psVar17;
              }
              local_70 = *(undefined8 *)psVar3;
              iVar6 = FUN_0277d6c4(&local_70);
              if (iVar6 == 0xa37) break;
              uVar19 = 0;
              do {
                lVar11 = (long)&local_108 + ((long)((ulong)uVar19 << 0x20) >> 0x1d);
                psVar3 = (short *)puVar5;
                if (*psVar2 != -2) {
                  psVar3 = psVar2;
                }
                local_70 = *(undefined8 *)psVar3;
                uVar9 = FUN_0277d7b4(&local_70,lVar11);
                if ((uVar9 & 1) != 0) break;
                psVar3 = (short *)puVar5;
                if (*psVar17 != -2) {
                  psVar3 = psVar17;
                }
                local_70 = *(undefined8 *)psVar3;
                uVar9 = FUN_0277d7b4(&local_70,lVar11);
                if ((uVar9 & 1) != 0) goto LAB_035790a8;
                uVar19 = uVar19 + 1;
              } while (uVar19 != 0x13);
            }
            uVar19 = uVar14 << 1;
            plVar13[(int)(uVar18 - 1)] = plVar13[(int)(uVar14 - 1)];
            uVar18 = uVar14;
          } while ((long)(int)uVar19 < (long)uVar10);
LAB_035790a8:
          plVar13[(int)(uVar18 - 1)] = lVar8;
          uVar10 = uVar16 - 1 & 0xffffffff;
          lVar8 = plVar13[uVar10];
          plVar13[uVar10] = *plVar13;
          uVar9 = uVar16 - 1;
          uVar10 = uVar16;
        } while (2 < uVar16);
      }
      *plVar13 = lVar8;
    }
  }
  return;
}

