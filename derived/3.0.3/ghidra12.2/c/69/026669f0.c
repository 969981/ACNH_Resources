
undefined8
FUN_026669f0(short *param_1,short *param_2,undefined8 param_3,short *param_4,short *param_5,
            uint *param_6,short *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  short *psVar12;
  short *psVar13;
  uint *puVar14;
  long lVar15;
  short *psVar16;
  short *psVar17;
  long lVar18;
  undefined4 local_a0;
  undefined2 local_9c [2];
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  
  puVar7 = PTR_DAT_04bb37e0;
  sVar5 = *(short *)PTR_DAT_04bb37e0;
  *param_4 = sVar5;
  param_4[4] = sVar5;
  param_4[8] = sVar5;
  uVar3 = puVar7[2];
  *(undefined1 *)(param_4 + 1) = uVar3;
  *(undefined1 *)(param_4 + 5) = uVar3;
  *(undefined1 *)(param_4 + 9) = uVar3;
  uVar4 = puVar7[3];
  *(undefined1 *)((long)param_4 + 3) = uVar4;
  *(undefined1 *)((long)param_4 + 0xb) = uVar4;
  *(undefined1 *)((long)param_4 + 0x13) = uVar4;
  uVar2 = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)(param_4 + 2) = uVar2;
  *(undefined4 *)(param_4 + 6) = uVar2;
  *(undefined4 *)(param_4 + 10) = uVar2;
  *param_5 = sVar5;
  *(undefined1 *)(param_5 + 1) = uVar3;
  *(undefined1 *)((long)param_5 + 3) = uVar4;
  *(undefined4 *)(param_5 + 2) = uVar2;
  param_5[4] = sVar5;
  *(undefined1 *)(param_5 + 5) = uVar3;
  *(undefined1 *)((long)param_5 + 0xb) = uVar4;
  *(undefined4 *)(param_5 + 6) = uVar2;
  param_5[8] = sVar5;
  *(undefined1 *)(param_5 + 9) = uVar3;
  *(undefined1 *)((long)param_5 + 0x13) = uVar4;
  *(undefined4 *)(param_5 + 10) = uVar2;
  *param_7 = sVar5;
  *(undefined1 *)(param_7 + 1) = uVar3;
  psVar17 = param_7 + 4;
  *psVar17 = sVar5;
  *(undefined1 *)((long)param_7 + 3) = uVar4;
  *(undefined4 *)(param_7 + 2) = uVar2;
  *(undefined1 *)(param_7 + 5) = uVar3;
  *(undefined1 *)((long)param_7 + 0xb) = uVar4;
  *(undefined4 *)(param_7 + 6) = uVar2;
  *(undefined1 *)(param_7 + 9) = uVar3;
  psVar16 = param_7 + 8;
  *psVar16 = sVar5;
  puVar8 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  *(undefined1 *)((long)param_7 + 0x13) = uVar4;
  *(undefined4 *)(param_7 + 10) = uVar2;
  uVar9 = FUN_0277d6c4(param_2);
  if (*(long *)puVar8 == 0) {
LAB_02666d24:
    *param_6 = 0;
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02666d24;
  sVar5 = *param_1;
  *param_4 = sVar5;
  *(char *)(param_4 + 1) = (char)param_1[1];
  *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_1 + 2);
  *param_7 = sVar5;
  *(char *)(param_7 + 1) = (char)param_4[1];
  *(undefined1 *)((long)param_7 + 3) = *(undefined1 *)((long)param_4 + 3);
  *(undefined4 *)(param_7 + 2) = *(undefined4 *)(param_4 + 2);
  psVar12 = param_1 + 4;
  sVar5 = *psVar12;
  param_4[4] = sVar5;
  *(char *)(param_4 + 5) = (char)param_1[5];
  *(undefined1 *)((long)param_4 + 0xb) = *(undefined1 *)((long)param_1 + 0xb);
  *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_1 + 6);
  param_7[4] = sVar5;
  *(char *)(param_7 + 5) = (char)param_4[5];
  *(undefined1 *)((long)param_7 + 0xb) = *(undefined1 *)((long)param_4 + 0xb);
  *(undefined4 *)(param_7 + 6) = *(undefined4 *)(param_4 + 6);
  psVar13 = param_1 + 8;
  sVar5 = *psVar13;
  param_4[8] = sVar5;
  *(char *)(param_4 + 9) = (char)param_1[9];
  *(undefined1 *)((long)param_4 + 0x13) = *(undefined1 *)((long)param_1 + 0x13);
  *(undefined4 *)(param_4 + 10) = *(undefined4 *)(param_1 + 10);
  param_7[8] = sVar5;
  *(char *)(param_7 + 9) = (char)param_4[9];
  *(undefined1 *)((long)param_7 + 0x13) = *(undefined1 *)((long)param_4 + 0x13);
  local_98 = PTR_DAT_04bc0510;
  local_88 = 0;
  *(undefined4 *)(param_7 + 10) = *(undefined4 *)(param_4 + 10);
  local_98 = local_98 + 0x10;
  *param_6 = 0;
  lVar15 = *(long *)puVar8;
  local_90 = *(undefined4 *)param_2;
  uStack_8c = *(undefined4 *)(param_2 + 2);
  uVar9 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar8 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_2);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8);
        if (lVar15 != 0) {
          local_88 = lVar15;
        }
      }
    }
  }
  local_9c[0] = 0;
  FUN_01adab50(&local_98,local_9c);
  local_a0 = (uint)local_a0._2_2_ << 0x10;
  FUN_01adab50(&local_98,&local_a0);
  uVar9 = 0;
  do {
    local_68 = uVar9;
    if ((local_68 != 0) && (local_64 = local_68, local_68 < 0xe)) {
      local_80 = (undefined **)CONCAT44(local_80._4_4_,local_68);
      uVar9 = local_68 + 7;
      if (-1 < (int)local_68) {
        uVar9 = local_68;
      }
      if ((uint)((int)uVar9 >> 3) < 2) {
        local_80 = (undefined **)CONCAT44(local_80._4_4_,local_68);
        local_a0 = local_68;
        if ((*(byte *)((long)local_9c + ((ulong)(uint)((int)uVar9 >> 3) - 4)) >>
             (ulong)(local_68 & 7) & 1) != 0) goto LAB_02666d54;
      }
    }
    uVar9 = local_68 + 1;
  } while (local_68 + 1 != 0xe);
  local_a0 = 0;
LAB_02666d54:
  if (local_a0 == 3) {
    param_7[8] = *param_2;
    *(char *)(param_7 + 9) = (char)param_2[1];
    *(undefined1 *)((long)param_7 + 0x13) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(param_7 + 10) = *(undefined4 *)(param_2 + 2);
    if (*psVar13 != -2) {
      lVar15 = *(long *)puVar8;
      uVar9 = FUN_0277d6c4(psVar13);
      lVar18 = *(long *)puVar8;
      if (lVar18 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_70 = 0;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = *(undefined4 *)(param_1 + 8);
          uStack_74 = *(undefined4 *)(param_1 + 10);
          uVar9 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar8 != 0) {
            lVar15 = *(long *)(lVar18 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(psVar13);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                 (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                  (puVar11 != (uint *)(ulong)uVar9)))) {
                puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
                   ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar15 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                    }
                    if (*puVar14 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if (((uVar1 < DAT_05326ec0) &&
                        (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd)) &&
                       ((uVar6 & 0xfffb) == 8)) goto LAB_02667734;
                  }
                }
              }
            }
          }
        }
      }
      lVar15 = *(long *)puVar8;
      uVar9 = FUN_0277d6c4(psVar13);
      lVar18 = *(long *)puVar8;
      if (lVar18 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_70 = 0;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = *(undefined4 *)(param_1 + 8);
          uStack_74 = *(undefined4 *)(param_1 + 10);
          uVar9 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar8 == 0) {
LAB_026676c8:
            local_68 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar18 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_026676c8;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(psVar13);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
               (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
               puVar11 == (uint *)0x0)) goto LAB_026676c8;
            local_68 = 0;
            uVar9 = *puVar11;
            if ((uVar9 != 0) && (puVar11 != (uint *)(ulong)uVar9)) {
              puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
              local_68 = 0;
              if (*puVar14 != 0) {
                uVar9 = puVar14[1];
                if (uVar9 == 0) {
LAB_026673a0:
                  local_68 = 0;
                }
                else {
                  if ((ulong)(ushort)puVar14[2] != 0) {
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar15 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                      }
                      if (*puVar14 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if (uVar1 < DAT_05326ec0) {
                        local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
                        if (local_68 < 0xbd) goto LAB_026676d4;
                        goto LAB_026673a0;
                      }
                    }
                  }
                  local_68 = 0;
                }
              }
            }
          }
LAB_026676d4:
          local_64 = 0xac;
          if (local_68 == 0xac) goto LAB_02667734;
        }
      }
      uVar10 = FUN_026658d0(psVar13);
      if ((uVar10 & 1) == 0) {
        psVar16 = param_5 + (ulong)*param_6 * 4;
        if (2 < *param_6) {
          psVar16 = param_5;
        }
        *psVar16 = param_1[8];
        *(char *)(psVar16 + 1) = (char)param_1[9];
        *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)((long)param_1 + 0x13);
        *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(param_1 + 10);
        *param_6 = *param_6 + 1;
      }
    }
LAB_02667734:
    uVar10 = FUN_0277dc30(param_1,param_2);
    if (((uVar10 & 1) != 0) && (*param_1 != -2)) {
      lVar15 = *(long *)puVar8;
      uVar9 = FUN_0277d6c4(param_1);
      lVar18 = *(long *)puVar8;
      if (lVar18 == 0) {
LAB_026678c4:
        uVar10 = FUN_02665700(param_1);
        if (((uVar10 & 1) == 0) && (uVar10 = FUN_026658d0(param_1), (uVar10 & 1) == 0)) {
          psVar16 = param_5 + (ulong)*param_6 * 4;
          if (2 < *param_6) {
            psVar16 = param_5;
          }
          *psVar16 = *param_1;
          *(char *)(psVar16 + 1) = (char)param_1[1];
          *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)((long)param_1 + 3);
          *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(param_1 + 2);
          *param_6 = *param_6 + 1;
        }
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026678c4;
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)param_1;
        uStack_74 = *(undefined4 *)(param_1 + 2);
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 == 0) goto LAB_026678c4;
        lVar15 = *(long *)(lVar18 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026678c4;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar11 == (uint *)0x0 || (uVar9 = *puVar11, uVar9 == 0)) ||
            (puVar11 == (uint *)(ulong)uVar9)))) goto LAB_026678c4;
        puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
        if (((*puVar14 == 0) || (uVar9 = puVar14[1], uVar9 == 0)) ||
           ((ulong)(ushort)puVar14[2] == 0)) goto LAB_026678c4;
        lVar15 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar15 == 0) goto LAB_026678c4;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
        }
        if (*puVar14 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (((DAT_05326ec0 <= uVar1) ||
            (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), 0xbc < uVar6)) ||
           ((uVar6 & 0xfffb) != 8)) goto LAB_026678c4;
      }
      *param_7 = *(short *)puVar7;
      *(undefined *)(param_7 + 1) = puVar7[2];
      *(undefined *)((long)param_7 + 3) = puVar7[3];
      *(undefined4 *)(param_7 + 2) = *(undefined4 *)(puVar7 + 4);
    }
    uVar10 = FUN_0277dc30(psVar12,param_2);
    if ((uVar10 & 1) == 0) {
      return 1;
    }
    if (*psVar12 == -2) {
      return 1;
    }
    lVar15 = *(long *)puVar8;
    uVar9 = FUN_0277d6c4(psVar12);
    lVar18 = *(long *)puVar8;
    if (lVar18 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)(param_1 + 4);
        uStack_74 = *(undefined4 *)(param_1 + 6);
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 != 0) {
          lVar15 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(psVar12);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                (puVar11 != (uint *)(ulong)uVar9)))) {
              puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
              if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                  }
                  if (*puVar14 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < DAT_05326ec0) &&
                      (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd)) &&
                     ((uVar6 & 0xfffb) == 8)) goto LAB_026681d4;
                }
              }
            }
          }
        }
      }
    }
    uVar10 = FUN_02665700(psVar12);
    if ((uVar10 & 1) != 0) goto LAB_026681d4;
    uVar10 = FUN_026658d0(psVar12);
    psVar13 = psVar12;
  }
  else {
    if (local_a0 == 2) {
      param_7[4] = *param_2;
      *(char *)(param_7 + 5) = (char)param_2[1];
      *(undefined1 *)((long)param_7 + 0xb) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(param_7 + 6) = *(undefined4 *)(param_2 + 2);
      if (*psVar12 != -2) {
        lVar15 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4(psVar12);
        lVar18 = *(long *)puVar8;
        if (lVar18 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_70 = 0;
            local_80 = &PTR_FUN_04a36b50;
            local_78 = *(undefined4 *)(param_1 + 4);
            uStack_74 = *(undefined4 *)(param_1 + 6);
            uVar9 = FUN_0277d6c4(&local_78);
            lVar15 = DAT_0532a768;
            if (*(long *)puVar8 != 0) {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                uVar9 = FUN_0277d6c4(psVar12);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                   (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                     puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                    (puVar11 != (uint *)(ulong)uVar9)))) {
                  puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                  if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
                     ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar15 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                      }
                      if (*puVar14 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if (((uVar1 < DAT_05326ec0) &&
                          (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
                         && ((uVar6 & 0xfffb) == 8)) goto LAB_02667b6c;
                    }
                  }
                }
              }
            }
          }
        }
        lVar15 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4(psVar12);
        lVar18 = *(long *)puVar8;
        if (lVar18 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_70 = 0;
            local_80 = &PTR_FUN_04a36b50;
            local_78 = *(undefined4 *)(param_1 + 4);
            uStack_74 = *(undefined4 *)(param_1 + 6);
            uVar9 = FUN_0277d6c4(&local_78);
            lVar15 = DAT_0532a768;
            if (*(long *)puVar8 == 0) {
LAB_02667b00:
              local_68 = 0xbc;
            }
            else {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_02667b00;
              uVar9 = FUN_0277d6c4(psVar12);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                 (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar11 == (uint *)0x0)) goto LAB_02667b00;
              local_68 = 0;
              uVar9 = *puVar11;
              if ((uVar9 != 0) && (puVar11 != (uint *)(ulong)uVar9)) {
                puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                local_68 = 0;
                if (*puVar14 != 0) {
                  uVar9 = puVar14[1];
                  if (uVar9 == 0) {
LAB_026676b8:
                    local_68 = 0;
                  }
                  else {
                    if ((ulong)(ushort)puVar14[2] != 0) {
                      lVar15 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar15 = 0x1c;
                      }
                      lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar15 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                        }
                        if (*puVar14 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if (uVar1 < DAT_05326ec0) {
                          local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
                          if (local_68 < 0xbd) goto LAB_02667b0c;
                          goto LAB_026676b8;
                        }
                      }
                    }
                    local_68 = 0;
                  }
                }
              }
            }
LAB_02667b0c:
            local_64 = 0xac;
            if (local_68 == 0xac) goto LAB_02667b6c;
          }
        }
        uVar10 = FUN_026658d0(psVar12);
        if ((uVar10 & 1) == 0) {
          psVar17 = param_5 + (ulong)*param_6 * 4;
          if (2 < *param_6) {
            psVar17 = param_5;
          }
          *psVar17 = param_1[4];
          *(char *)(psVar17 + 1) = (char)param_1[5];
          *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_1 + 0xb);
          *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(param_1 + 6);
          *param_6 = *param_6 + 1;
        }
      }
LAB_02667b6c:
      uVar10 = FUN_0277dc30(param_1,param_2);
      if (((uVar10 & 1) == 0) || (*param_1 == -2)) goto LAB_02667fe4;
      lVar15 = *(long *)puVar8;
      uVar9 = FUN_0277d6c4(param_1);
      lVar18 = *(long *)puVar8;
      if (lVar18 == 0) {
LAB_02667cfc:
        uVar10 = FUN_02665700(param_1);
        if (((uVar10 & 1) == 0) && (uVar10 = FUN_026658d0(param_1), (uVar10 & 1) == 0)) {
          psVar17 = param_5 + (ulong)*param_6 * 4;
          if (2 < *param_6) {
            psVar17 = param_5;
          }
          *psVar17 = *param_1;
          *(char *)(psVar17 + 1) = (char)param_1[1];
          *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_1 + 3);
          *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(param_1 + 2);
          *param_6 = *param_6 + 1;
        }
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02667cfc;
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)param_1;
        uStack_74 = *(undefined4 *)(param_1 + 2);
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 == 0) goto LAB_02667cfc;
        lVar15 = *(long *)(lVar18 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02667cfc;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar11 == (uint *)0x0 || (uVar9 = *puVar11, uVar9 == 0)) ||
            (puVar11 == (uint *)(ulong)uVar9)))) goto LAB_02667cfc;
        puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
        if (((*puVar14 == 0) || (uVar9 = puVar14[1], uVar9 == 0)) ||
           ((ulong)(ushort)puVar14[2] == 0)) goto LAB_02667cfc;
        lVar15 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar15 == 0) goto LAB_02667cfc;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
        }
        if (*puVar14 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (((DAT_05326ec0 <= uVar1) ||
            (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), 0xbc < uVar6)) ||
           ((uVar6 & 0xfffb) != 8)) goto LAB_02667cfc;
      }
      *param_7 = *(short *)puVar7;
      *(undefined *)(param_7 + 1) = puVar7[2];
      *(undefined *)((long)param_7 + 3) = puVar7[3];
      *(undefined4 *)(param_7 + 2) = *(undefined4 *)(puVar7 + 4);
    }
    else {
      if (local_a0 != 1) {
        return 0;
      }
      *param_7 = *param_2;
      *(char *)(param_7 + 1) = (char)param_2[1];
      *(undefined1 *)((long)param_7 + 3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(param_7 + 2) = *(undefined4 *)(param_2 + 2);
      if (*param_1 != -2) {
        lVar15 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4(param_1);
        lVar18 = *(long *)puVar8;
        if (lVar18 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_70 = 0;
            local_80 = &PTR_FUN_04a36b50;
            local_78 = *(undefined4 *)param_1;
            uStack_74 = *(undefined4 *)(param_1 + 2);
            uVar9 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar8 != 0) {
              lVar15 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(param_1);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                   (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                     puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                    (puVar11 != (uint *)(ulong)uVar9)))) {
                  puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                  if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
                     ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar15 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                      }
                      if (*puVar14 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if (((uVar1 < DAT_05326ec0) &&
                          (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
                         && ((uVar6 & 0xfffb) == 8)) goto LAB_02667df0;
                    }
                  }
                }
              }
            }
          }
        }
        lVar15 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4(param_1);
        lVar18 = *(long *)puVar8;
        if (lVar18 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_70 = 0;
            local_80 = &PTR_FUN_04a36b50;
            local_78 = *(undefined4 *)param_1;
            uStack_74 = *(undefined4 *)(param_1 + 2);
            uVar9 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar8 == 0) {
LAB_02667d8c:
              local_68 = 0xbc;
            }
            else {
              lVar15 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_02667d8c;
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(param_1);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                 (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar11 == (uint *)0x0)) goto LAB_02667d8c;
              local_68 = 0;
              uVar9 = *puVar11;
              if ((uVar9 != 0) && (puVar11 != (uint *)(ulong)uVar9)) {
                puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                local_68 = 0;
                if (*puVar14 != 0) {
                  uVar9 = puVar14[1];
                  if (uVar9 == 0) {
LAB_02667088:
                    local_68 = 0;
                  }
                  else {
                    if ((ulong)(ushort)puVar14[2] != 0) {
                      lVar15 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar15 = 0x1c;
                      }
                      lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar15 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                        }
                        if (*puVar14 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if (uVar1 < DAT_05326ec0) {
                          local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
                          if (local_68 < 0xbd) goto LAB_02667d90;
                          goto LAB_02667088;
                        }
                      }
                    }
                    local_68 = 0;
                  }
                }
              }
            }
LAB_02667d90:
            local_64 = 0xac;
            if (local_68 == 0xac) goto LAB_02667df0;
          }
        }
        uVar10 = FUN_026658d0(param_1);
        if ((uVar10 & 1) == 0) {
          psVar17 = param_5 + (ulong)*param_6 * 4;
          if (2 < *param_6) {
            psVar17 = param_5;
          }
          *psVar17 = *param_1;
          *(char *)(psVar17 + 1) = (char)param_1[1];
          *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_1 + 3);
          *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(param_1 + 2);
          *param_6 = *param_6 + 1;
        }
      }
LAB_02667df0:
      uVar10 = FUN_0277dc30(param_2,psVar12);
      if (((uVar10 & 1) != 0) && (*psVar12 != -2)) {
        lVar15 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4(psVar12);
        lVar18 = *(long *)puVar8;
        if (lVar18 == 0) {
LAB_02667f84:
          uVar10 = FUN_02665700(psVar12);
          if (((uVar10 & 1) == 0) && (uVar10 = FUN_026658d0(psVar12), (uVar10 & 1) == 0)) {
            psVar17 = param_5 + (ulong)*param_6 * 4;
            if (2 < *param_6) {
              psVar17 = param_5;
            }
            *psVar17 = param_1[4];
            *(char *)(psVar17 + 1) = (char)param_1[5];
            *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_1 + 0xb);
            *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(param_1 + 6);
            *param_6 = *param_6 + 1;
          }
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02667f84;
          local_70 = 0;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = *(undefined4 *)(param_1 + 4);
          uStack_74 = *(undefined4 *)(param_1 + 6);
          uVar9 = FUN_0277d6c4(&local_78);
          lVar15 = DAT_0532a768;
          if (*(long *)puVar8 == 0) goto LAB_02667f84;
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02667f84;
          uVar9 = FUN_0277d6c4(psVar12);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
             (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
               puVar11 == (uint *)0x0 || (uVar9 = *puVar11, uVar9 == 0)) ||
              (puVar11 == (uint *)(ulong)uVar9)))) goto LAB_02667f84;
          puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
          if (((*puVar14 == 0) || (uVar9 = puVar14[1], uVar9 == 0)) ||
             ((ulong)(ushort)puVar14[2] == 0)) goto LAB_02667f84;
          lVar15 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar15 == 0) goto LAB_02667f84;
          uVar1 = 0;
          if ((ulong)uVar9 != 0) {
            uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
          }
          if (*puVar14 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (((DAT_05326ec0 <= uVar1) ||
              (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), 0xbc < uVar6)) ||
             ((uVar6 & 0xfffb) != 8)) goto LAB_02667f84;
        }
        uVar2 = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)(param_7 + 4) = *(undefined4 *)puVar7;
        *(undefined4 *)(param_7 + 6) = uVar2;
      }
    }
LAB_02667fe4:
    uVar10 = FUN_0277dc30(param_2,psVar13);
    if ((uVar10 & 1) == 0) {
      return 1;
    }
    if (*psVar13 == -2) {
      return 1;
    }
    lVar15 = *(long *)puVar8;
    uVar9 = FUN_0277d6c4(psVar13);
    lVar18 = *(long *)puVar8;
    psVar17 = psVar16;
    if (lVar18 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)(param_1 + 8);
        uStack_74 = *(undefined4 *)(param_1 + 10);
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 != 0) {
          lVar15 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(psVar13);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (((puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                (puVar11 != (uint *)(ulong)uVar9)))) {
              puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
              if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar9);
                  }
                  if (*puVar14 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < DAT_05326ec0) &&
                      (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd)) &&
                     ((uVar6 & 0xfffb) == 8)) goto LAB_026681d4;
                }
              }
            }
          }
        }
      }
    }
    uVar10 = FUN_02665700(psVar13);
    if ((uVar10 & 1) != 0) goto LAB_026681d4;
    uVar10 = FUN_026658d0(psVar13);
  }
  if ((uVar10 & 1) == 0) {
    psVar16 = param_5 + (ulong)*param_6 * 4;
    if (2 < *param_6) {
      psVar16 = param_5;
    }
    *psVar16 = *psVar13;
    *(char *)(psVar16 + 1) = (char)psVar13[1];
    *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)((long)psVar13 + 3);
    *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(psVar13 + 2);
    *param_6 = *param_6 + 1;
  }
LAB_026681d4:
  *psVar17 = *(short *)puVar7;
  *(undefined *)(psVar17 + 1) = puVar7[2];
  *(undefined *)((long)psVar17 + 3) = puVar7[3];
  *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(puVar7 + 4);
  return 1;
}

