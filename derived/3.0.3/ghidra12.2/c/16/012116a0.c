
/* WARNING: Removing unreachable block (ram,0x01211800) */
/* WARNING: Removing unreachable block (ram,0x01211a48) */

bool FUN_012116a0(long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined *puVar18;
  uint local_20e8 [1024];
  undefined *local_10e8;
  uint local_10e0 [2];
  undefined *local_10d8;
  undefined8 local_10d0;
  undefined *local_10c8;
  undefined8 local_10c0;
  undefined *local_10b8;
  undefined8 local_10b0;
  undefined *local_10a8;
  undefined8 local_10a0;
  undefined *local_1098;
  undefined8 local_1090;
  undefined *local_1088;
  undefined8 local_1080;
  undefined *local_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined *local_1060;
  uint local_1058;
  uint local_1054;
  undefined *local_1050;
  int local_1048;
  int local_1044;
  
  bVar8 = false;
  if (param_1 != 0) {
    local_10e0[0] = 0;
    local_10e0[1] = 0;
    local_10d0 = 0;
    uVar12 = 4;
    if ((param_4 & 1) == 0) {
      uVar12 = 0;
    }
    local_10c0 = 0;
    local_10b0 = 0;
    local_10e8 = PTR_DAT_04bb2010 + 0x10;
    local_10a0 = 0;
    local_1090 = 0;
    local_1080 = 0;
    local_1070 = 0;
    local_1068 = (undefined *)CONCAT44(local_1068._4_4_,uVar12);
    lVar11 = param_2 + 0x14028 + (ulong)uVar12 * 0x1008;
    if (0x1d < uVar12) {
      lVar11 = param_2 + 0x14028;
    }
    local_10d8 = local_10e8;
    local_10c8 = local_10e8;
    local_10b8 = local_10e8;
    local_10a8 = local_10e8;
    local_1098 = local_10e8;
    local_1088 = local_10e8;
    local_1078 = local_10e8;
    memset(local_20e8,0,0x1000);
    lVar10 = 0;
    do {
      puVar5 = (uint *)(lVar11 + 8 + lVar10);
      uVar12 = *(uint *)((long)local_20e8 + lVar10 + 4);
      lVar1 = lVar10 + 8;
      uVar14 = puVar5[1];
      *(uint *)((long)&local_1068 + lVar10) = *puVar5 | *(uint *)((long)local_20e8 + lVar10);
      *(uint *)((long)&local_1068 + lVar10 + 4) = uVar14 | uVar12;
      lVar10 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_20e8,&local_1068,0x1000);
    puVar18 = PTR_DAT_04bb2010;
    if ((param_5 & 1) != 0) {
      local_1068 = (undefined *)CONCAT44(local_1068._4_4_,0x17);
      lVar11 = 0;
      do {
        puVar5 = (uint *)(param_2 + 0x2b0e8 + lVar11);
        uVar12 = *(uint *)((long)local_20e8 + lVar11 + 4);
        lVar10 = lVar11 + 8;
        uVar14 = puVar5[1];
        *(uint *)((long)&local_1068 + lVar11) = *puVar5 & *(uint *)((long)local_20e8 + lVar11);
        *(uint *)((long)&local_1068 + lVar11 + 4) = uVar14 & uVar12;
        lVar11 = lVar10;
      } while (lVar10 != 0x1000);
      memcpy(local_20e8,&local_1068,0x1000);
    }
    uVar12 = 0xfffffffe;
    uVar15 = 0;
    do {
      if ((uVar12 == 0) || (uVar12 == 0xfffffffe)) {
        iVar6 = *(int *)(param_3 + 8);
        uVar14 = *(int *)(param_3 + 0xc) + uVar12;
        uVar7 = iVar6 - 2;
        uVar13 = uVar14 * 0x80;
        uVar17 = (uVar13 & 0xffffff00) + ((int)uVar7 >> 1);
        uVar16 = uVar15;
        if (((((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) &&
              DAT_05233974 <= (int)uVar14) && uVar14 == DAT_05233984 ||
             (((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) &&
              DAT_05233974 <= (int)uVar14) && (int)(uVar14 - DAT_05233984) < 0) !=
             (((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) &&
              DAT_05233974 <= (int)uVar14) && SBORROW4(uVar14,DAT_05233984))) && uVar17 >> 0xf == 0)
           && ((local_20e8[uVar17 >> 5] >> (ulong)(uVar7 >> 1 & 0x1f) & 1) != 0)) {
          uVar16 = (ulong)((int)uVar15 + 1);
          local_10e0[uVar15 * 4] = uVar7;
          local_10e0[uVar15 * 4 + 1] = uVar14;
        }
        uVar17 = iVar6 + 2;
        if ((((DAT_05233970 <= (int)uVar17) && ((int)uVar17 <= DAT_05233980)) &&
            (DAT_05233974 <= (int)uVar14)) && (uVar15 = uVar16, (int)uVar14 <= (int)DAT_05233984))
        goto LAB_012119cc;
      }
      else {
        uVar17 = *(uint *)(param_3 + 8);
        uVar13 = uVar17 - 2;
        uVar14 = uVar12 + *(int *)(param_3 + 0xc);
        uVar9 = uVar15;
        if ((((DAT_05233970 <= (int)uVar13) && ((int)uVar13 <= DAT_05233980)) &&
            ((DAT_05233974 <= (int)uVar14 &&
             (((int)uVar14 <= (int)DAT_05233984 &&
              (uVar7 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar13 >> 1), uVar7 >> 0xf == 0)))))) &&
           ((local_20e8[uVar7 >> 5] >> (ulong)(uVar13 >> 1 & 0x1f) & 1) != 0)) {
          uVar9 = (ulong)((int)uVar15 + 1);
          local_10e0[uVar15 * 4] = uVar13;
          local_10e0[uVar15 * 4 + 1] = uVar14;
        }
        uVar16 = uVar9;
        if (((((DAT_05233970 <= (int)uVar17) && ((int)uVar17 <= DAT_05233980)) &&
             (DAT_05233974 <= (int)uVar14)) &&
            (((int)uVar14 <= (int)DAT_05233984 &&
             (uVar13 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar17 >> 1), uVar13 >> 0xf == 0)))) &&
           ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)) {
          uVar16 = (ulong)((int)uVar9 + 1);
          local_10e0[uVar9 * 4] = uVar17;
          local_10e0[uVar9 * 4 + 1] = uVar14;
        }
        uVar17 = uVar17 + 2;
        if (((DAT_05233970 <= (int)uVar17) && ((int)uVar17 <= DAT_05233980)) &&
           ((DAT_05233974 <= (int)uVar14 && ((int)uVar14 <= (int)DAT_05233984)))) {
          uVar13 = uVar14 * 0x80;
          uVar15 = uVar16;
LAB_012119cc:
          uVar13 = (uVar13 & 0xffffff00) + ((int)uVar17 >> 1);
          uVar16 = uVar15;
          if ((uVar13 >> 0xf == 0) &&
             ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)) {
            uVar16 = (ulong)((int)uVar15 + 1);
            local_10e0[uVar15 * 4] = uVar17;
            local_10e0[uVar15 * 4 + 1] = uVar14;
          }
        }
      }
      uVar14 = (uint)uVar16;
      uVar12 = uVar12 + 2;
      uVar15 = uVar16;
    } while (uVar12 < 3);
    local_1068 = (undefined *)CONCAT44(local_1068._4_4_,0x1a);
    memset(local_20e8,0,0x1000);
    lVar11 = 0;
    do {
      puVar5 = (uint *)(param_2 + 0x2e100 + lVar11);
      uVar12 = *(uint *)((long)local_20e8 + lVar11 + 4);
      lVar10 = lVar11 + 8;
      uVar17 = puVar5[1];
      *(uint *)((long)&local_1068 + lVar11) = *puVar5 | *(uint *)((long)local_20e8 + lVar11);
      *(uint *)((long)&local_1068 + lVar11 + 4) = uVar17 | uVar12;
      lVar11 = lVar10;
    } while (lVar10 != 0x1000);
    memcpy(local_20e8,&local_1068,0x1000);
    if ((uVar14 == 0) && ((param_4 & 1) != 0)) {
      uVar15 = 0;
      uVar12 = 0xfffffffe;
      puVar2 = puVar18 + 0x10;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        if ((uVar12 == 0) || (uVar12 == 0xfffffffe)) {
          uVar14 = uVar12 + *(int *)(param_3 + 0xc);
          uVar17 = *(int *)(param_3 + 8) - 2;
          local_1048 = *(int *)(param_3 + 8) + -1;
          local_1044 = uVar14 + 1;
          local_1068 = puVar3;
          local_1060 = puVar2;
          local_1058 = uVar17;
          local_1054 = uVar14;
          local_1050 = puVar2;
          uVar9 = FUN_01675930(&local_1068,1);
          uVar16 = uVar15;
          if ((((uVar9 & 1) != 0) &&
              (((DAT_05233970 <= (int)uVar17 && ((int)uVar17 <= DAT_05233980)) &&
               (DAT_05233974 <= (int)uVar14)))) &&
             ((((int)uVar14 <= (int)DAT_05233984 &&
               (uVar13 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar17 >> 1), uVar13 >> 0xf == 0)) &&
              ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)))) {
            uVar16 = (ulong)((int)uVar15 + 1);
            local_10e0[uVar15 * 4] = uVar17;
            local_10e0[uVar15 * 4 + 1] = uVar14;
          }
          local_1048 = *(int *)(param_3 + 8);
          iVar6 = *(int *)(param_3 + 0xc);
        }
        else {
          puVar18 = puVar18 + 0x10;
          puVar4 = PTR_DAT_04bbc1a0 + 0x10;
          uVar14 = uVar12 + *(int *)(param_3 + 0xc);
          uVar17 = *(int *)(param_3 + 8) - 2;
          local_1048 = *(int *)(param_3 + 8) + -1;
          local_1044 = uVar14 + 1;
          local_1068 = puVar4;
          local_1060 = puVar18;
          local_1058 = uVar17;
          local_1054 = uVar14;
          local_1050 = puVar18;
          uVar16 = FUN_01675930(&local_1068,1);
          if (((((uVar16 & 1) != 0) && (DAT_05233970 <= (int)uVar17)) &&
              (((int)uVar17 <= DAT_05233980 &&
               (((DAT_05233974 <= (int)uVar14 && ((int)uVar14 <= (int)DAT_05233984)) &&
                (uVar13 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar17 >> 1), uVar13 >> 0xf == 0)))))
              ) && ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)) {
            local_10e0[uVar15 * 4] = uVar17;
            local_10e0[uVar15 * 4 + 1] = uVar14;
            uVar15 = (ulong)((int)uVar15 + 1);
          }
          uVar17 = *(uint *)(param_3 + 8);
          uVar14 = uVar12 + *(int *)(param_3 + 0xc);
          local_1048 = uVar17 + 1;
          local_1044 = uVar14 + 1;
          local_1068 = puVar4;
          local_1060 = puVar18;
          local_1058 = uVar17;
          local_1054 = uVar14;
          local_1050 = puVar18;
          uVar9 = FUN_01675930(&local_1068,1);
          uVar16 = uVar15;
          if ((((uVar9 & 1) != 0) && (DAT_05233970 <= (int)uVar17)) &&
             (((((int)uVar17 <= DAT_05233980 &&
                ((DAT_05233974 <= (int)uVar14 && ((int)uVar14 <= (int)DAT_05233984)))) &&
               (uVar13 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar17 >> 1), uVar13 >> 0xf == 0)) &&
              ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)))) {
            uVar16 = (ulong)((int)uVar15 + 1);
            local_10e0[uVar15 * 4] = uVar17;
            local_10e0[uVar15 * 4 + 1] = uVar14;
          }
          local_1048 = *(int *)(param_3 + 8);
          iVar6 = *(int *)(param_3 + 0xc);
          puVar18 = PTR_DAT_04bb2010;
        }
        local_1050 = puVar18 + 0x10;
        local_1068 = PTR_DAT_04bbc1a0 + 0x10;
        uVar14 = iVar6 + uVar12;
        uVar17 = local_1048 + 2;
        local_1048 = local_1048 + 3;
        local_1044 = uVar14 + 1;
        local_1060 = local_1050;
        local_1058 = uVar17;
        local_1054 = uVar14;
        uVar9 = FUN_01675930(&local_1068,1);
        uVar15 = uVar16;
        if ((((((uVar9 & 1) != 0) && (DAT_05233970 <= (int)uVar17)) && ((int)uVar17 <= DAT_05233980)
             ) && ((DAT_05233974 <= (int)uVar14 && ((int)uVar14 <= (int)DAT_05233984)))) &&
           ((uVar13 = (uVar14 * 0x80 & 0xffffff00) + ((int)uVar17 >> 1), uVar13 >> 0xf == 0 &&
            ((local_20e8[uVar13 >> 5] >> (ulong)(uVar17 >> 1 & 0x1f) & 1) != 0)))) {
          uVar15 = (ulong)((int)uVar16 + 1);
          local_10e0[uVar16 * 4] = uVar17;
          local_10e0[uVar16 * 4 + 1] = uVar14;
        }
        uVar14 = (uint)uVar15;
        uVar12 = uVar12 + 2;
      } while (uVar12 < 3);
    }
    bVar8 = uVar14 != 0;
    if (uVar14 != 0) {
      uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      uVar15 = (ulong)uVar12 * (ulong)uVar14 >> 0x20;
      uVar14 = local_10e0[uVar15 * 4 + 1];
      DAT_05582b7c = uVar12;
      *(uint *)(param_1 + 8) = local_10e0[uVar15 * 4];
      *(uint *)(param_1 + 0xc) = uVar14;
    }
  }
  return bVar8;
}

