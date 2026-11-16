
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02668230(long param_1,short *param_2,uint param_3,short *param_4,short *param_5,uint *param_6,
            short *param_7)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  short *psVar14;
  uint *puVar15;
  short *psVar16;
  long lVar17;
  short *psVar18;
  short *psVar19;
  long lVar20;
  undefined4 *puVar21;
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
  
  sVar3 = DAT_05586008;
  *param_4 = DAT_05586008;
  param_4[4] = sVar3;
  param_4[8] = sVar3;
  uVar6 = DAT_0558600a;
  *(undefined1 *)(param_4 + 1) = DAT_0558600a;
  *(undefined1 *)(param_4 + 5) = uVar6;
  *(undefined1 *)(param_4 + 9) = uVar6;
  uVar7 = DAT_0558600b;
  *(undefined1 *)((long)param_4 + 3) = DAT_0558600b;
  *(undefined1 *)((long)param_4 + 0xb) = uVar7;
  *(undefined1 *)((long)param_4 + 0x13) = uVar7;
  uVar8 = DAT_0558600c;
  *(undefined4 *)(param_4 + 2) = DAT_0558600c;
  *(undefined4 *)(param_4 + 6) = uVar8;
  *(undefined4 *)(param_4 + 10) = uVar8;
  *param_5 = sVar3;
  *(undefined1 *)(param_5 + 1) = uVar6;
  *(undefined1 *)((long)param_5 + 3) = uVar7;
  *(undefined4 *)(param_5 + 2) = uVar8;
  param_5[4] = sVar3;
  *(undefined1 *)(param_5 + 5) = uVar6;
  *(undefined1 *)((long)param_5 + 0xb) = uVar7;
  *(undefined4 *)(param_5 + 6) = uVar8;
  param_5[8] = sVar3;
  *(undefined1 *)(param_5 + 9) = uVar6;
  *(undefined1 *)((long)param_5 + 0x13) = uVar7;
  *(undefined4 *)(param_5 + 10) = uVar8;
  *param_7 = sVar3;
  *(undefined1 *)(param_7 + 1) = uVar6;
  *(undefined1 *)((long)param_7 + 3) = uVar7;
  param_7[4] = sVar3;
  psVar16 = param_7 + 2;
  *(undefined4 *)psVar16 = uVar8;
  psVar19 = param_7 + 6;
  *(undefined4 *)psVar19 = uVar8;
  *(undefined1 *)(param_7 + 5) = uVar6;
  *(undefined1 *)((long)param_7 + 0xb) = uVar7;
  param_7[8] = sVar3;
  *(undefined1 *)(param_7 + 9) = uVar6;
  puVar5 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  *(undefined1 *)((long)param_7 + 0x13) = uVar7;
  *(undefined4 *)(param_7 + 10) = uVar8;
  uVar10 = FUN_0277d6c4(param_2);
  if (*(long *)puVar5 == 0) {
LAB_0266857c:
    *param_6 = 0;
    return 0;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0266857c;
  psVar14 = (short *)(param_1 + 0x30);
  sVar3 = *psVar14;
  *param_4 = sVar3;
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)(param_1 + 0x33);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_1 + 0x34);
  *param_7 = sVar3;
  *(char *)(param_7 + 1) = (char)param_4[1];
  *(undefined1 *)((long)param_7 + 3) = *(undefined1 *)((long)param_4 + 3);
  *(undefined4 *)(param_7 + 2) = *(undefined4 *)(param_4 + 2);
  sVar3 = *(short *)(param_1 + 0x20);
  param_4[4] = sVar3;
  *(undefined1 *)(param_4 + 5) = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)((long)param_4 + 0xb) = *(undefined1 *)(param_1 + 0x23);
  *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_1 + 0x24);
  param_7[4] = sVar3;
  *(char *)(param_7 + 5) = (char)param_4[5];
  *(undefined1 *)((long)param_7 + 0xb) = *(undefined1 *)((long)param_4 + 0xb);
  *(undefined4 *)(param_7 + 6) = *(undefined4 *)(param_4 + 6);
  psVar18 = (short *)(param_1 + 0x28);
  sVar3 = *psVar18;
  param_4[8] = sVar3;
  *(undefined1 *)(param_4 + 9) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)((long)param_4 + 0x13) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined4 *)(param_4 + 10) = *(undefined4 *)(param_1 + 0x2c);
  param_7[8] = sVar3;
  *(char *)(param_7 + 9) = (char)param_4[9];
  *(undefined1 *)((long)param_7 + 0x13) = *(undefined1 *)((long)param_4 + 0x13);
  local_98 = PTR_DAT_04bc0510;
  local_88 = 0;
  *(undefined4 *)(param_7 + 10) = *(undefined4 *)(param_4 + 10);
  local_98 = local_98 + 0x10;
  *param_6 = 0;
  local_90 = *(undefined4 *)param_2;
  uStack_8c = *(undefined4 *)(param_2 + 2);
  lVar17 = *(long *)puVar5;
  uVar10 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(param_2);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8), lVar17 != 0)) {
        local_88 = lVar17;
      }
    }
  }
  local_9c[0] = 0;
  FUN_01adab50(&local_98,local_9c);
  iVar11 = FUN_01ad78cc(&local_98);
  if ((param_3 & 1) == 0) {
    lVar17 = *(long *)puVar5;
    uVar10 = FUN_0277d6c4(psVar18);
    if (*(long *)puVar5 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        psVar1 = param_5 + (ulong)*param_6 * 4;
        if (2 < *param_6) {
          psVar1 = param_5;
        }
        *psVar1 = *(short *)(param_1 + 0x28);
        *(undefined1 *)(psVar1 + 1) = *(undefined1 *)(param_1 + 0x2a);
        *(undefined1 *)((long)psVar1 + 3) = *(undefined1 *)(param_1 + 0x2b);
        *(undefined4 *)(psVar1 + 2) = *(undefined4 *)(param_1 + 0x2c);
        if (iVar11 == 7) goto LAB_02668628;
LAB_0266867c:
        uVar8 = DAT_0558600c;
        *(undefined4 *)(param_7 + 8) = _DAT_05586008;
        *(undefined4 *)(param_7 + 10) = uVar8;
        *param_6 = *param_6 + 1;
      }
    }
  }
  else {
    lVar17 = *(long *)puVar5;
    uVar10 = FUN_0277d6c4(psVar18);
    bVar9 = false;
    if (*(long *)puVar5 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (uVar10 < *(uint *)(lVar17 + 0x1d8)) {
        bVar9 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0;
      }
      else {
        bVar9 = false;
      }
    }
    if (iVar11 == 7) {
      if (!bVar9) {
        return 1;
      }
      psVar16 = param_5 + (ulong)*param_6 * 4;
      if (2 < *param_6) {
        psVar16 = param_5;
      }
      *psVar16 = *(short *)(param_1 + 0x28);
      *(undefined1 *)(psVar16 + 1) = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)(param_1 + 0x2b);
      *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(param_1 + 0x2c);
LAB_02668628:
      *param_6 = *param_6 + 1;
      return 1;
    }
    if (bVar9) {
      psVar1 = param_5 + (ulong)*param_6 * 4;
      if (2 < *param_6) {
        psVar1 = param_5;
      }
      *psVar1 = *(short *)(param_1 + 0x28);
      *(undefined1 *)(psVar1 + 1) = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)((long)psVar1 + 3) = *(undefined1 *)(param_1 + 0x2b);
      *(undefined4 *)(psVar1 + 2) = *(undefined4 *)(param_1 + 0x2c);
      goto LAB_0266867c;
    }
  }
  local_a0 = (uint)local_a0._2_2_ << 0x10;
  FUN_01adab50(&local_98,&local_a0);
  uVar10 = 0;
  do {
    local_68 = uVar10;
    if ((local_68 != 0) && (local_64 = local_68, local_68 < 0xe)) {
      local_80 = (undefined **)CONCAT44(local_80._4_4_,local_68);
      uVar10 = local_68 + 7;
      if (-1 < (int)local_68) {
        uVar10 = local_68;
      }
      if (((uint)((int)uVar10 >> 3) < 2) &&
         (local_80 = (undefined **)CONCAT44(local_80._4_4_,local_68), local_a0 = local_68,
         (*(byte *)((long)local_9c + ((ulong)(uint)((int)uVar10 >> 3) - 4)) >> (ulong)(local_68 & 7)
         & 1) != 0)) goto LAB_02668718;
    }
    uVar10 = local_68 + 1;
  } while (local_68 + 1 != 0xe);
  local_a0 = 0;
LAB_02668718:
  if (local_a0 != 6) {
    if (local_a0 != 5) {
      return 0;
    }
    *param_7 = *param_2;
    *(char *)(param_7 + 1) = (char)param_2[1];
    *(undefined1 *)((long)param_7 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(param_7 + 2) = *(undefined4 *)(param_2 + 2);
    puVar5 = PTR_DAT_04bb43c0;
    if (*psVar14 != -2) {
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(psVar14);
      lVar17 = *(long *)puVar5;
      if (lVar17 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          local_70 = 0;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = *(undefined4 *)(param_1 + 0x30);
          uStack_74 = *(undefined4 *)(param_1 + 0x34);
          uVar10 = FUN_0277d6c4(&local_78);
          if (DAT_053274a0 != 0) {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar17 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(psVar14);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                 (((puVar13 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar13 != (uint *)0x0 && (uVar10 = *puVar13, uVar10 != 0)) &&
                  (puVar13 != (uint *)(ulong)uVar10)))) {
                puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                if (((*puVar15 != 0) && (uVar10 = puVar15[1], uVar10 != 0)) &&
                   ((ulong)(ushort)puVar15[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                  if (lVar17 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar13 - lVar17) / (ulong)uVar10);
                    }
                    if (*puVar15 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if (((uVar2 < DAT_05326ec0) &&
                        (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd)) &&
                       ((uVar4 & 0xfffb) == 8)) goto LAB_02668988;
                  }
                }
              }
            }
          }
        }
      }
      lVar17 = *(long *)puVar5;
      uVar10 = FUN_0277d6c4(psVar14);
      if (*(long *)puVar5 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          FUN_01ad5d04(&local_80,psVar14);
          uVar12 = FUN_01ae887c(&local_80);
          if ((uVar12 & 1) != 0) goto LAB_02668988;
        }
      }
      uVar12 = FUN_026658d0(psVar14);
      if ((uVar12 & 1) == 0) {
        psVar16 = param_5 + (ulong)*param_6 * 4;
        if (2 < *param_6) {
          psVar16 = param_5;
        }
        *psVar16 = *(short *)(param_1 + 0x30);
        *(undefined1 *)(psVar16 + 1) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)(param_1 + 0x33);
        *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(param_1 + 0x34);
        *param_6 = *param_6 + 1;
      }
    }
LAB_02668988:
    psVar14 = (short *)(param_1 + 0x38);
    uVar12 = FUN_0277dc30(param_2,psVar14);
    puVar5 = PTR_DAT_04bb43c0;
    psVar16 = psVar19;
    if ((uVar12 & 1) == 0) {
      lVar17 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(psVar18);
      if (*(long *)puVar5 == 0) {
        return 1;
      }
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (*(uint *)(lVar17 + 0x1d8) <= uVar10) {
        return 1;
      }
      if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
        return 1;
      }
      puVar21 = (undefined4 *)(param_1 + 0x3c);
      param_7[4] = *(short *)(param_1 + 0x38);
      *(undefined1 *)(param_7 + 5) = *(undefined1 *)(param_1 + 0x3a);
      *(undefined1 *)((long)param_7 + 0xb) = *(undefined1 *)(param_1 + 0x3b);
      goto LAB_026690c4;
    }
    if (*psVar14 == -2) {
      return 1;
    }
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(psVar14);
    if (*(long *)puVar5 == 0) {
LAB_02668a18:
      uVar12 = FUN_02665700(psVar14);
      if (((uVar12 & 1) == 0) && (uVar12 = FUN_026658d0(psVar14), (uVar12 & 1) == 0)) {
        psVar19 = param_5 + (ulong)*param_6 * 4;
        if (2 < *param_6) {
          psVar19 = param_5;
        }
        *psVar19 = *(short *)(param_1 + 0x38);
        *(undefined1 *)(psVar19 + 1) = *(undefined1 *)(param_1 + 0x3a);
        *(undefined1 *)((long)psVar19 + 3) = *(undefined1 *)(param_1 + 0x3b);
        *(undefined4 *)(psVar19 + 2) = *(undefined4 *)(param_1 + 0x3c);
        *param_6 = *param_6 + 1;
      }
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_02668a18;
      FUN_01ad5d04(&local_80,psVar14);
      uVar10 = FUN_01ad9fd0(&local_80);
      if ((uVar10 & 0xfffffffb) != 8) goto LAB_02668a18;
    }
    puVar21 = &DAT_0558600c;
    *(undefined4 *)(param_7 + 4) = _DAT_05586008;
    goto LAB_026690c4;
  }
  param_7[4] = *param_2;
  *(char *)(param_7 + 5) = (char)param_2[1];
  *(undefined1 *)((long)param_7 + 0xb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_7 + 6) = *(undefined4 *)(param_2 + 2);
  puVar5 = PTR_DAT_04bb43c0;
  psVar19 = (short *)(param_1 + 0x38);
  if (*psVar19 != -2) {
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(psVar19);
    lVar17 = *(long *)puVar5;
    if (lVar17 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)(param_1 + 0x38);
        uStack_74 = *(undefined4 *)(param_1 + 0x3c);
        uVar10 = FUN_0277d6c4(&local_78);
        if (DAT_053274a0 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(psVar19);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar13 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar13 != (uint *)0x0 && (uVar10 = *puVar13, uVar10 != 0)) &&
                (puVar13 != (uint *)(ulong)uVar10)))) {
              puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
              if (((*puVar15 != 0) && (uVar10 = puVar15[1], uVar10 != 0)) &&
                 ((ulong)(ushort)puVar15[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar13 - lVar17) / (ulong)uVar10);
                  }
                  if (*puVar15 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (((uVar2 < DAT_05326ec0) &&
                      (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd)) &&
                     ((uVar4 & 0xfffb) == 8)) goto LAB_02668ea0;
                }
              }
            }
          }
        }
      }
    }
    lVar20 = *(long *)puVar5;
    uVar10 = FUN_0277d6c4(psVar19);
    lVar17 = *(long *)puVar5;
    if (lVar17 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)(param_1 + 0x38);
        uStack_74 = *(undefined4 *)(param_1 + 0x3c);
        uVar10 = FUN_0277d6c4(&local_78);
        if (DAT_053274a0 == 0) {
LAB_02668e3c:
          local_68 = 0xbc;
        }
        else {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_02668e3c;
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(psVar19);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
             (puVar13 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar13 == (uint *)0x0)) goto LAB_02668e3c;
          local_68 = 0;
          uVar10 = *puVar13;
          if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
            puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
            local_68 = 0;
            if (*puVar15 != 0) {
              uVar10 = puVar15[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar13 - lVar17) / (ulong)uVar10);
                  }
                  if (*puVar15 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (uVar2 < DAT_05326ec0) {
                    local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
                    if (0xbc < local_68) {
                      local_68 = 0;
                    }
                    goto LAB_02668e40;
                  }
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_02668e40:
        local_64 = 0xac;
        if (local_68 == 0xac) goto LAB_02668ea0;
      }
    }
    uVar12 = FUN_026658d0(psVar19);
    if ((uVar12 & 1) == 0) {
      psVar19 = param_5 + (ulong)*param_6 * 4;
      if (2 < *param_6) {
        psVar19 = param_5;
      }
      *psVar19 = *(short *)(param_1 + 0x38);
      *(undefined1 *)(psVar19 + 1) = *(undefined1 *)(param_1 + 0x3a);
      *(undefined1 *)((long)psVar19 + 3) = *(undefined1 *)(param_1 + 0x3b);
      *(undefined4 *)(psVar19 + 2) = *(undefined4 *)(param_1 + 0x3c);
      *param_6 = *param_6 + 1;
    }
  }
LAB_02668ea0:
  uVar12 = FUN_0277dc30(psVar14,param_2);
  puVar5 = PTR_DAT_04bb43c0;
  if ((uVar12 & 1) == 0) {
    return 1;
  }
  if (*psVar14 == -2) {
    return 1;
  }
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(psVar14);
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
LAB_0266904c:
    uVar12 = FUN_02665700(psVar14);
    if (((uVar12 & 1) == 0) && (uVar12 = FUN_026658d0(psVar14), (uVar12 & 1) == 0)) {
      psVar19 = param_5 + (ulong)*param_6 * 4;
      if (2 < *param_6) {
        psVar19 = param_5;
      }
      *psVar19 = *(short *)(param_1 + 0x30);
      *(undefined1 *)(psVar19 + 1) = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)((long)psVar19 + 3) = *(undefined1 *)(param_1 + 0x33);
      *(undefined4 *)(psVar19 + 2) = *(undefined4 *)(param_1 + 0x34);
      *param_6 = *param_6 + 1;
    }
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0266904c;
    local_70 = 0;
    local_80 = &PTR_FUN_04a36b50;
    local_78 = *(undefined4 *)(param_1 + 0x30);
    uStack_74 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = FUN_0277d6c4(&local_78);
    if (DAT_053274a0 == 0) goto LAB_0266904c;
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0266904c;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(psVar14);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
       (((puVar13 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
         puVar13 == (uint *)0x0 || (uVar10 = *puVar13, uVar10 == 0)) ||
        (puVar13 == (uint *)(ulong)uVar10)))) goto LAB_0266904c;
    puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
    if (((*puVar15 == 0) || (uVar10 = puVar15[1], uVar10 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
    goto LAB_0266904c;
    lVar17 = 0xc;
    if (*(char *)((long)puVar15 + 10) != '\0') {
      lVar17 = 0x1c;
    }
    lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
    if (lVar17 == 0) goto LAB_0266904c;
    uVar2 = 0;
    if ((ulong)uVar10 != 0) {
      uVar2 = (uint)((ulong)((long)puVar13 - lVar17) / (ulong)uVar10);
    }
    if (*puVar15 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (((DAT_05326ec0 <= uVar2) ||
        (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), 0xbc < uVar4)) ||
       ((uVar4 & 0xfffb) != 8)) goto LAB_0266904c;
  }
  *param_7 = DAT_05586008;
  *(undefined1 *)(param_7 + 1) = DAT_0558600a;
  puVar21 = &DAT_0558600c;
  *(undefined1 *)((long)param_7 + 3) = DAT_0558600b;
LAB_026690c4:
  *(undefined4 *)psVar16 = *puVar21;
  return 1;
}

