
void FUN_01266d80(ushort *param_1,int param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ushort uVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *local_70;
  undefined8 local_68;
  
  puVar13 = PTR_DAT_04bb27a8;
  uVar10 = param_2 - 2;
  uVar20 = (ulong)uVar10;
  uVar11 = param_3 - 2;
  if (4 < param_3) {
    uVar21 = 2;
    do {
      uVar1 = uVar21 * 9 + uVar20;
      puVar5 = param_1 + uVar1;
      if (0x47 < uVar1) {
        puVar5 = param_1;
      }
      uVar1 = uVar21 * 9 + (ulong)(param_2 - 1U);
      puVar6 = (ushort *)0x0;
      if (uVar21 < 9 && uVar10 < 10) {
        puVar6 = puVar5;
      }
      puVar5 = param_1 + uVar1;
      if (0x47 < uVar1) {
        puVar5 = param_1;
      }
      puVar3 = (ushort *)0x0;
      if (uVar21 < 9 && param_2 - 1U < 10) {
        puVar3 = puVar5;
      }
      if ((puVar6 != (ushort *)0x0) && (puVar3 != (ushort *)0x0)) {
        lVar17 = *(long *)puVar13;
        uVar12 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
        if ((uVar12 < *(uint *)(lVar17 + 0xb70)) &&
           ((puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar12 * 8),
            puVar18 != (uint *)0x0 &&
            (uVar12 = *puVar18, uVar12 != 0 && puVar18 != (uint *)(ulong)uVar12)))) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
          if ((*puVar19 == 0) ||
             ((uVar12 = puVar19[1], uVar12 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
          goto LAB_01266f10;
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 == 0) goto LAB_01266f10;
          uVar7 = 0;
          if ((ulong)uVar12 != 0) {
            uVar7 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar12);
          }
          if (*puVar19 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbd70 <= uVar7) ||
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bbbd70 + 8) + (long)(int)uVar7 * 2),
             0x17 < uVar15)) goto LAB_01266f10;
        }
        else {
LAB_01266f10:
          uVar15 = 0;
        }
        uVar15 = FUN_01267a60(uVar15,param_4);
        *puVar3 = uVar15;
      }
      puVar5 = param_1 + uVar21 * 9 + 1;
      puVar6 = param_1 + uVar21 * 9;
      if (7 < uVar21) {
        puVar5 = param_1;
        puVar6 = param_1;
      }
      puVar3 = (ushort *)0x0;
      if (uVar21 < 9) {
        puVar3 = puVar6;
      }
      puVar6 = (ushort *)0x0;
      if (uVar21 < 9) {
        puVar6 = puVar5;
      }
      if ((puVar3 != (ushort *)0x0) && (puVar6 != (ushort *)0x0)) {
        lVar17 = *(long *)puVar13;
        uVar12 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
        if ((uVar12 < *(uint *)(lVar17 + 0xb70)) &&
           ((puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar12 * 8),
            puVar18 != (uint *)0x0 &&
            (uVar12 = *puVar18, uVar12 != 0 && puVar18 != (uint *)(ulong)uVar12)))) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
          if ((*puVar19 == 0) ||
             ((uVar12 = puVar19[1], uVar12 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
          goto LAB_01266de0;
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 == 0) goto LAB_01266de0;
          uVar7 = 0;
          if ((ulong)uVar12 != 0) {
            uVar7 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar12);
          }
          if (*puVar19 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbd70 <= uVar7) ||
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bbbd70 + 8) + (long)(int)uVar7 * 2),
             0x17 < uVar15)) goto LAB_01266de0;
        }
        else {
LAB_01266de0:
          uVar15 = 0;
        }
        uVar15 = FUN_01267a60(uVar15,param_4);
        *puVar3 = uVar15;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar11);
  }
  uVar12 = uVar11 * 9;
  if (4 < param_2) {
    uVar21 = 2;
    do {
      puVar5 = param_1 + uVar21 + uVar12;
      if (0x47 < uVar21 + uVar12) {
        puVar5 = param_1;
      }
      uVar1 = uVar21 + (param_3 - 1U) * 9;
      puVar6 = (ushort *)0x0;
      if (uVar21 < 10 && uVar11 < 9) {
        puVar6 = puVar5;
      }
      puVar5 = param_1 + uVar1;
      if (0x47 < uVar1) {
        puVar5 = param_1;
      }
      puVar3 = (ushort *)0x0;
      if (uVar21 < 10 && param_3 - 1U < 9) {
        puVar3 = puVar5;
      }
      if ((puVar6 != (ushort *)0x0) && (puVar3 != (ushort *)0x0)) {
        lVar17 = *(long *)puVar13;
        uVar7 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
        if ((uVar7 < *(uint *)(lVar17 + 0xb70)) &&
           ((puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar7 * 8),
            puVar18 != (uint *)0x0 &&
            (uVar7 = *puVar18, uVar7 != 0 && puVar18 != (uint *)(ulong)uVar7)))) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
          if ((*puVar19 == 0) ||
             ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
          goto LAB_01267144;
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 == 0) goto LAB_01267144;
          uVar8 = 0;
          if ((ulong)uVar7 != 0) {
            uVar8 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar7);
          }
          if (*puVar19 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbd70 <= uVar8) ||
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bbbd70 + 8) + (long)(int)uVar8 * 2),
             0x17 < uVar15)) goto LAB_01267144;
        }
        else {
LAB_01267144:
          uVar15 = 0;
        }
        uVar15 = FUN_01267a60(uVar15,param_4);
        *puVar3 = uVar15;
      }
      puVar5 = param_1 + uVar21 + 9;
      if (0x3e < uVar21) {
        puVar5 = param_1;
      }
      puVar6 = param_1 + uVar21;
      if (0x47 < uVar21) {
        puVar6 = param_1;
      }
      puVar3 = (ushort *)0x0;
      if (uVar21 < 10) {
        puVar3 = puVar5;
      }
      puVar5 = (ushort *)0x0;
      if (uVar21 < 10) {
        puVar5 = puVar6;
      }
      if ((puVar5 != (ushort *)0x0) && (puVar3 != (ushort *)0x0)) {
        lVar17 = *(long *)puVar13;
        uVar7 = (uint)*puVar3 - (uint)*(ushort *)(lVar17 + 0xb90);
        if ((uVar7 < *(uint *)(lVar17 + 0xb70)) &&
           ((puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar7 * 8),
            puVar18 != (uint *)0x0 &&
            (uVar7 = *puVar18, uVar7 != 0 && puVar18 != (uint *)(ulong)uVar7)))) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
          if ((*puVar19 == 0) ||
             ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
          goto LAB_01267020;
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 == 0) goto LAB_01267020;
          uVar8 = 0;
          if ((ulong)uVar7 != 0) {
            uVar8 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar7);
          }
          if (*puVar19 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbd70 <= uVar8) ||
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bbbd70 + 8) + (long)(int)uVar8 * 2),
             0x17 < uVar15)) goto LAB_01267020;
        }
        else {
LAB_01267020:
          uVar15 = 0;
        }
        uVar15 = FUN_01267a60(uVar15,param_4);
        *puVar5 = uVar15;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar20);
  }
  uVar7 = param_2 - 1;
  puVar5 = param_1 + (param_2 + 7U);
  if (0x47 < param_2 + 7U) {
    puVar5 = param_1;
  }
  puVar6 = param_1 + uVar7;
  if (0x47 < uVar7) {
    puVar6 = param_1;
  }
  puVar3 = param_1 + uVar20;
  if (0x47 < uVar10) {
    puVar3 = param_1;
  }
  puVar4 = (ushort *)0x0;
  if (uVar10 < 10) {
    puVar4 = puVar5;
  }
  puVar5 = (ushort *)0x0;
  if (uVar10 < 10) {
    puVar5 = puVar3;
  }
  puVar3 = param_1 + (param_2 + 8U);
  if (0x47 < param_2 + 8U) {
    puVar3 = param_1;
  }
  puVar2 = (ushort *)0x0;
  if (uVar7 < 10) {
    puVar2 = puVar6;
  }
  puVar6 = (ushort *)0x0;
  if (uVar7 < 10) {
    puVar6 = puVar3;
  }
  if ((puVar4 != (ushort *)0x0) && (puVar2 != (ushort *)0x0)) {
    lVar17 = *(long *)puVar13;
    uVar8 = (uint)*puVar4 - (uint)*(ushort *)(lVar17 + 0xb90);
    if ((uVar8 < *(uint *)(lVar17 + 0xb70)) &&
       ((puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8),
        puVar18 != (uint *)0x0 && (uVar8 = *puVar18, uVar8 != 0 && puVar18 != (uint *)(ulong)uVar8))
       )) {
      puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
      if ((*puVar19 == 0) || ((uVar8 = puVar19[1], uVar8 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
      goto LAB_0126734c;
      lVar17 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar17 == 0) goto LAB_0126734c;
      uVar9 = 0;
      if ((ulong)uVar8 != 0) {
        uVar9 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar8);
      }
      if (*puVar19 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if ((DAT_05159970 <= uVar9) ||
         (uVar15 = *(ushort *)(DAT_05159978 + (long)(int)uVar9 * 2), 0x17 < uVar15))
      goto LAB_0126734c;
    }
    else {
LAB_0126734c:
      uVar15 = 0;
    }
    uVar15 = FUN_01267a60(uVar15,param_4);
    *puVar2 = uVar15;
  }
  puVar14 = PTR_DAT_04bbc398;
  local_70 = PTR_DAT_04bbc398 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar8 = (uint)*puVar4 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar8 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 1;
    if ((uVar20 & 1) == 0) {
      uVar16 = 2;
    }
  }
  else {
    uVar16 = 0;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar5 = uVar15;
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar8 = (uint)*puVar4 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar8 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 7;
    if ((uVar20 & 1) == 0) {
      uVar16 = 8;
    }
  }
  else {
    uVar16 = 6;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar6 = uVar15;
  if (param_1 != (ushort *)0x0) {
    lVar17 = *(long *)puVar13;
    uVar8 = (uint)param_1[10] - (uint)*(ushort *)(lVar17 + 0xb90);
    if ((uVar8 < *(uint *)(lVar17 + 0xb70)) &&
       (puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8),
       puVar18 != (uint *)0x0)) {
      uVar8 = *puVar18;
      uVar15 = 0;
      if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
        puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
        if (((*puVar19 != 0) && (uVar8 = puVar19[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar19[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar8);
            }
            if (*puVar19 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05159970) &&
               (uVar15 = *(ushort *)(DAT_05159978 + (long)(int)uVar9 * 2), uVar15 < 0x18))
            goto LAB_012674fc;
          }
        }
        goto LAB_012674f8;
      }
    }
    else {
LAB_012674f8:
      uVar15 = 0;
    }
LAB_012674fc:
    uVar15 = FUN_01267a60(uVar15,param_4);
    *param_1 = uVar15;
  }
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar8 = (uint)param_1[10] - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar8 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 1;
    if ((uVar20 & 1) == 0) {
      uVar16 = 2;
    }
  }
  else {
    uVar16 = 0;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  param_1[1] = uVar15;
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar8 = (uint)param_1[10] - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar8 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar8 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 0x13;
    if ((uVar20 & 1) == 0) {
      uVar16 = 0x14;
    }
  }
  else {
    uVar16 = 0x12;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  param_1[9] = uVar15;
  puVar5 = param_1 + (uVar12 + uVar10);
  if (0x47 < uVar12 + uVar10) {
    puVar5 = param_1;
  }
  puVar6 = (ushort *)0x0;
  if (uVar11 < 9 && uVar10 < 10) {
    puVar6 = puVar5;
  }
  uVar8 = param_3 - 1;
  uVar9 = uVar8 * 9;
  puVar5 = param_1 + (uVar9 + uVar7);
  if (0x47 < uVar9 + uVar7) {
    puVar5 = param_1;
  }
  puVar3 = (ushort *)0x0;
  if (uVar8 < 9 && uVar7 < 10) {
    puVar3 = puVar5;
  }
  puVar5 = param_1 + (uVar9 + uVar10);
  if (0x47 < uVar9 + uVar10) {
    puVar5 = param_1;
  }
  puVar4 = (ushort *)0x0;
  if (uVar8 < 9 && uVar10 < 10) {
    puVar4 = puVar5;
  }
  puVar5 = param_1 + (uVar12 + uVar7);
  if (0x47 < uVar12 + uVar7) {
    puVar5 = param_1;
  }
  puVar2 = (ushort *)0x0;
  if (uVar11 < 9 && uVar7 < 10) {
    puVar2 = puVar5;
  }
  if ((puVar6 != (ushort *)0x0) && (puVar3 != (ushort *)0x0)) {
    lVar17 = *(long *)puVar13;
    uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
    if ((uVar10 < *(uint *)(lVar17 + 0xb70)) &&
       (puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8),
       puVar18 != (uint *)0x0)) {
      uVar10 = *puVar18;
      uVar15 = 0;
      if ((uVar10 != 0) && (puVar18 != (uint *)(ulong)uVar10)) {
        puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar10);
        if ((*puVar19 != 0) &&
           ((uVar10 = puVar19[1], uVar10 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar17 != 0) {
            uVar7 = 0;
            if ((ulong)uVar10 != 0) {
              uVar7 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar10);
            }
            if (*puVar19 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar15 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar15 < 0x18))
            goto LAB_01267754;
          }
        }
        goto LAB_01267750;
      }
    }
    else {
LAB_01267750:
      uVar15 = 0;
    }
LAB_01267754:
    uVar15 = FUN_01267a60(uVar15,param_4);
    *puVar3 = uVar15;
  }
  puVar14 = PTR_DAT_04bbc398;
  local_70 = PTR_DAT_04bbc398 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar10 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 0xd;
    if ((uVar20 & 1) == 0) {
      uVar16 = 0xe;
    }
  }
  else {
    uVar16 = 0xc;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar4 = uVar15;
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar10 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 7;
    if ((uVar20 & 1) == 0) {
      uVar16 = 8;
    }
  }
  else {
    uVar16 = 6;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar2 = uVar15;
  puVar5 = param_1 + (uVar12 + 1);
  if (7 < uVar11) {
    puVar5 = param_1;
  }
  puVar6 = (ushort *)0x0;
  if (uVar11 < 9) {
    puVar6 = puVar5;
  }
  puVar5 = param_1 + uVar9;
  if (7 < uVar8) {
    puVar5 = param_1;
  }
  puVar3 = (ushort *)0x0;
  if (uVar8 < 9) {
    puVar3 = puVar5;
  }
  puVar5 = param_1 + (uVar9 + 1);
  if (7 < uVar8) {
    puVar5 = param_1;
  }
  puVar4 = (ushort *)0x0;
  if (uVar8 < 9) {
    puVar4 = puVar5;
  }
  if ((puVar3 == (ushort *)0x0) || (puVar6 == (ushort *)0x0)) goto LAB_0126794c;
  lVar17 = *(long *)puVar13;
  uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
  if ((uVar10 < *(uint *)(lVar17 + 0xb70)) &&
     (puVar18 = *(uint **)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8),
     puVar18 != (uint *)0x0)) {
    uVar10 = *puVar18;
    uVar15 = 0;
    if ((uVar10 != 0) && (puVar18 != (uint *)(ulong)uVar10)) {
      puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar10);
      if ((*puVar19 != 0) &&
         ((uVar10 = puVar19[1], uVar10 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
        lVar17 = 0xc;
        if (*(char *)((long)puVar19 + 10) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
        if (lVar17 != 0) {
          uVar7 = 0;
          if ((ulong)uVar10 != 0) {
            uVar7 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar10);
          }
          if (*puVar19 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_05159970) &&
             (uVar15 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar15 < 0x18))
          goto LAB_01267940;
        }
      }
      goto LAB_0126793c;
    }
  }
  else {
LAB_0126793c:
    uVar15 = 0;
  }
LAB_01267940:
  uVar15 = FUN_01267a60(uVar15,param_4);
  *puVar3 = uVar15;
LAB_0126794c:
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar10 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 0xd;
    if ((uVar20 & 1) == 0) {
      uVar16 = 0xe;
    }
  }
  else {
    uVar16 = 0xc;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar4 = uVar15;
  local_70 = puVar14 + 0x10;
  lVar17 = *(long *)puVar13;
  uVar10 = (uint)*puVar6 - (uint)*(ushort *)(lVar17 + 0xb90);
  if (uVar10 < *(uint *)(lVar17 + 0xb70)) {
    local_68 = *(undefined8 *)(*(long *)(lVar17 + 0xb78) + (long)(int)uVar10 * 8);
  }
  else {
    local_68 = 0;
  }
  uVar20 = FUN_01323d80(&local_70);
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_01323ed4(&local_70);
    uVar16 = 0x13;
    if ((uVar20 & 1) == 0) {
      uVar16 = 0x14;
    }
  }
  else {
    uVar16 = 0x12;
  }
  puVar5 = param_1 + uVar12;
  if (7 < uVar11) {
    puVar5 = param_1;
  }
  puVar6 = (ushort *)0x0;
  if (uVar11 < 9) {
    puVar6 = puVar5;
  }
  uVar15 = FUN_01267a60(uVar16,param_4);
  *puVar6 = uVar15;
  return;
}

