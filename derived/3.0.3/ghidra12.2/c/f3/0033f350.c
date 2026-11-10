
void FUN_0033f350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_0033f384:
  puVar21 = param_2 + -2;
  puVar16 = param_2 + -4;
  puVar22 = param_2 + -6;
  puVar19 = param_1;
LAB_0033f398:
  param_1 = puVar19;
  uVar9 = (long)param_2 - (long)param_1;
  switch((long)uVar9 >> 4) {
  case 0:
  case 1:
    goto switchD_0033fa4c_caseD_0;
  case 2:
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + -1)) {
      uVar13 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar3;
      param_2[-2] = uVar13;
      param_2[-1] = uVar2;
      return;
    }
    return;
  case 3:
    uVar7 = *(uint *)(param_1 + 3);
    puVar19 = param_1 + 2;
    if (*(uint *)(param_1 + 1) < uVar7) {
      if (uVar7 < *(uint *)(param_2 + -1)) {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_2[-1];
        *param_1 = *puVar21;
        param_1[1] = uVar3;
        *puVar21 = uVar13;
        param_2[-1] = uVar2;
        return;
      }
      uVar13 = *param_1;
      uVar2 = param_1[1];
      *param_1 = *puVar19;
      param_1[1] = param_1[3];
      *puVar19 = uVar13;
      param_1[3] = uVar2;
      if (*(uint *)(param_1 + 3) < *(uint *)(param_2 + -1)) {
        uVar13 = *puVar19;
        uVar2 = param_1[3];
        uVar3 = param_2[-1];
        *puVar19 = *puVar21;
        param_1[3] = uVar3;
        *puVar21 = uVar13;
        param_2[-1] = uVar2;
        return;
      }
      return;
    }
    if (*(uint *)(param_2 + -1) <= uVar7) {
      return;
    }
    uVar13 = *puVar19;
    uVar2 = param_1[3];
    uVar3 = param_2[-1];
    *puVar19 = *puVar21;
    param_1[3] = uVar3;
    *puVar21 = uVar13;
    param_2[-1] = uVar2;
    break;
  case 4:
    uVar7 = *(uint *)(param_1 + 3);
    puVar19 = param_1 + 2;
    puVar16 = param_1 + 4;
    uVar5 = *(uint *)(param_1 + 5);
    if (*(uint *)(param_1 + 1) < uVar7) {
      if (uVar7 < uVar5) {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar16;
        param_1[1] = param_1[5];
        *puVar16 = uVar13;
        param_1[5] = uVar2;
      }
      else {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar19;
        param_1[1] = param_1[3];
        *puVar19 = uVar13;
        param_1[3] = uVar2;
        if (*(uint *)(param_1 + 3) < uVar5) {
          uVar13 = *puVar19;
          uVar2 = param_1[3];
          *puVar19 = *puVar16;
          param_1[3] = param_1[5];
          *puVar16 = uVar13;
          param_1[5] = uVar2;
        }
      }
    }
    else if (uVar7 < uVar5) {
      uVar13 = *puVar19;
      uVar2 = param_1[3];
      *puVar19 = *puVar16;
      param_1[3] = param_1[5];
      *puVar16 = uVar13;
      param_1[5] = uVar2;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar19;
        param_1[1] = param_1[3];
        *puVar19 = uVar13;
        param_1[3] = uVar2;
      }
    }
    if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 5)) {
      return;
    }
    uVar13 = *puVar16;
    uVar2 = param_1[5];
    uVar3 = param_2[-1];
    *puVar16 = *puVar21;
    param_1[5] = uVar3;
    *puVar21 = uVar13;
    param_2[-1] = uVar2;
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 3)) {
      return;
    }
    uVar13 = *puVar19;
    uVar2 = param_1[3];
    *puVar19 = *puVar16;
    param_1[3] = param_1[5];
    *puVar16 = uVar13;
    param_1[5] = uVar2;
    break;
  case 5:
    FUN_003401c0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar21,param_3);
    return;
  default:
    goto switchD_0033fa4c_default;
  }
  if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
    uVar13 = *param_1;
    uVar2 = param_1[1];
    *param_1 = param_1[2];
    param_1[1] = param_1[3];
    param_1[2] = uVar13;
    param_1[3] = uVar2;
    return;
  }
  return;
switchD_0033fa4c_default:
  if ((long)uVar9 < 0x180) {
    puVar19 = param_1 + 2;
    if ((param_5 & 1) == 0) {
      if (param_1 == param_2 || puVar19 == param_2) {
        return;
      }
      do {
        puVar16 = puVar19;
        uVar7 = *(uint *)(param_1 + 3);
        if (*(uint *)(param_1 + 1) < uVar7) {
          uVar13 = *puVar16;
          uVar6 = *(undefined4 *)((long)param_1 + 0x1c);
          puVar19 = puVar16;
          do {
            puVar21 = puVar19;
            puVar19 = puVar21 + -2;
            *puVar21 = *puVar19;
            puVar21[1] = puVar21[-1];
          } while (*(uint *)(puVar21 + -3) < uVar7);
          *puVar19 = uVar13;
          *(uint *)(puVar21 + -1) = uVar7;
          *(undefined4 *)((long)puVar21 - 4) = uVar6;
        }
        puVar19 = puVar16 + 2;
        param_1 = puVar16;
      } while (puVar16 + 2 != param_2);
      return;
    }
    if (param_1 == param_2 || puVar19 == param_2) {
      return;
    }
    lVar8 = 0;
    puVar16 = param_1;
    goto LAB_0033fb74;
  }
  if (param_4 == 0) {
    if (param_1 == param_2) {
      return;
    }
    FUN_00340350(param_1,param_2,param_2,param_3);
    return;
  }
  uVar7 = *(uint *)(param_2 + -1);
  uVar14 = (ulong)((long)uVar9 >> 4) >> 1;
  puVar19 = param_1 + uVar14 * 2;
  if (uVar9 < 0x801) {
    puVar10 = (uint *)(param_1 + 1);
    uVar5 = *puVar10;
    if (puVar10[uVar14 * 4] < uVar5) {
      if (uVar5 < uVar7) {
        local_70 = *puVar19;
        uStack_68 = puVar19[1];
        uVar13 = param_2[-1];
        *puVar19 = *puVar21;
        puVar19[1] = uVar13;
      }
      else {
        uVar13 = *puVar19;
        uVar2 = puVar19[1];
        uVar3 = param_1[1];
        *puVar19 = *param_1;
        puVar19[1] = uVar3;
        *param_1 = uVar13;
        param_1[1] = uVar2;
        if (*(uint *)(param_2 + -1) <= (uint)uVar2) goto LAB_0033f5e4;
        local_70 = *param_1;
        uStack_68 = param_1[1];
        uVar13 = param_2[-1];
        *param_1 = *puVar21;
        param_1[1] = uVar13;
      }
      *puVar21 = local_70;
      param_2[-1] = uStack_68;
    }
    else if (uVar5 < uVar7) {
      uVar13 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[-1];
      *param_1 = *puVar21;
      param_1[1] = uVar3;
      *puVar21 = uVar13;
      param_2[-1] = uVar2;
      if (puVar10[uVar14 * 4] < *(uint *)(param_1 + 1)) {
        uVar13 = *puVar19;
        uVar2 = puVar19[1];
        uVar3 = param_1[1];
        *puVar19 = *param_1;
        puVar19[1] = uVar3;
        *param_1 = uVar13;
        param_1[1] = uVar2;
        goto joined_r0x0033f7d8;
      }
    }
LAB_0033f5e4:
    if ((param_5 & 1) == 0) goto LAB_0033f7dc;
LAB_0033f5ec:
    uVar7 = *(uint *)(param_1 + 1);
  }
  else {
    puVar10 = (uint *)((long)(param_1 + 1) + uVar14 * 4 * 4);
    uVar5 = *puVar10;
    if (*(uint *)(param_1 + 1) < uVar5) {
      if (uVar5 < uVar7) {
        local_70 = *param_1;
        uStack_68 = param_1[1];
        uVar13 = param_2[-1];
        *param_1 = *puVar21;
        param_1[1] = uVar13;
      }
      else {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        uVar3 = puVar19[1];
        *param_1 = *puVar19;
        param_1[1] = uVar3;
        *puVar19 = uVar13;
        puVar19[1] = uVar2;
        if (*(uint *)(param_2 + -1) <= *puVar10) goto LAB_0033f514;
        local_70 = *puVar19;
        uStack_68 = puVar19[1];
        uVar13 = param_2[-1];
        *puVar19 = *puVar21;
        puVar19[1] = uVar13;
      }
      *puVar21 = local_70;
      param_2[-1] = uStack_68;
    }
    else if (uVar5 < uVar7) {
      uVar13 = *puVar19;
      uVar2 = puVar19[1];
      uVar3 = param_2[-1];
      *puVar19 = *puVar21;
      puVar19[1] = uVar3;
      *puVar21 = uVar13;
      param_2[-1] = uVar2;
      if (*(uint *)(param_1 + 1) < *puVar10) {
        uVar13 = *param_1;
        uVar2 = param_1[1];
        uVar3 = puVar19[1];
        *param_1 = *puVar19;
        param_1[1] = uVar3;
        *puVar19 = uVar13;
        puVar19[1] = uVar2;
      }
    }
LAB_0033f514:
    puVar11 = param_1 + 2;
    puVar15 = (uint *)(puVar19 + -1);
    uVar7 = *puVar15;
    puVar12 = puVar19 + -2;
    if (*(uint *)(param_1 + 3) < uVar7) {
      if (uVar7 < *(uint *)(param_2 + -3)) {
        uVar13 = *puVar11;
        uVar2 = param_1[3];
        uVar3 = param_2[-3];
        *puVar11 = *puVar16;
        param_1[3] = uVar3;
        *puVar16 = uVar13;
        param_2[-3] = uVar2;
      }
      else {
        uVar13 = *puVar11;
        uVar2 = param_1[3];
        uVar3 = *(undefined8 *)puVar15;
        *puVar11 = *puVar12;
        param_1[3] = uVar3;
        *puVar12 = uVar13;
        *(undefined8 *)puVar15 = uVar2;
        if (*puVar15 < *(uint *)(param_2 + -3)) {
          uVar13 = *puVar12;
          uVar2 = *(undefined8 *)puVar15;
          uVar3 = param_2[-3];
          *puVar12 = *puVar16;
          *(undefined8 *)puVar15 = uVar3;
          *puVar16 = uVar13;
          param_2[-3] = uVar2;
        }
      }
    }
    else if (uVar7 < *(uint *)(param_2 + -3)) {
      uVar13 = *puVar12;
      uVar2 = *(undefined8 *)puVar15;
      uVar3 = param_2[-3];
      *puVar12 = *puVar16;
      *(undefined8 *)puVar15 = uVar3;
      *puVar16 = uVar13;
      param_2[-3] = uVar2;
      if (*(uint *)(param_1 + 3) < *puVar15) {
        uVar13 = *puVar11;
        uVar2 = param_1[3];
        uVar3 = *(undefined8 *)puVar15;
        *puVar11 = *puVar12;
        param_1[3] = uVar3;
        *puVar12 = uVar13;
        *(undefined8 *)puVar15 = uVar2;
      }
    }
    puVar11 = param_1 + 4;
    puVar17 = (uint *)(puVar19 + 3);
    uVar7 = *puVar17;
    puVar18 = puVar19 + 2;
    if (*(uint *)(param_1 + 5) < uVar7) {
      if (uVar7 < *(uint *)(param_2 + -5)) {
        uVar13 = *puVar11;
        uVar2 = param_1[5];
        uVar3 = param_2[-5];
        *puVar11 = *puVar22;
        param_1[5] = uVar3;
        *puVar22 = uVar13;
        param_2[-5] = uVar2;
      }
      else {
        uVar13 = *puVar11;
        uVar2 = param_1[5];
        uVar3 = *(undefined8 *)puVar17;
        *puVar11 = *puVar18;
        param_1[5] = uVar3;
        *puVar18 = uVar13;
        *(undefined8 *)puVar17 = uVar2;
        if (*puVar17 < *(uint *)(param_2 + -5)) {
          uVar13 = *puVar18;
          uVar2 = *(undefined8 *)puVar17;
          uVar3 = param_2[-5];
          *puVar18 = *puVar22;
          *(undefined8 *)puVar17 = uVar3;
          *puVar22 = uVar13;
          param_2[-5] = uVar2;
        }
      }
    }
    else if (uVar7 < *(uint *)(param_2 + -5)) {
      uVar13 = *puVar18;
      uVar2 = *(undefined8 *)puVar17;
      uVar3 = param_2[-5];
      *puVar18 = *puVar22;
      *(undefined8 *)puVar17 = uVar3;
      *puVar22 = uVar13;
      param_2[-5] = uVar2;
      if (*(uint *)(param_1 + 5) < *puVar17) {
        uVar13 = *puVar11;
        uVar2 = param_1[5];
        uVar3 = *(undefined8 *)puVar17;
        *puVar11 = *puVar18;
        param_1[5] = uVar3;
        *puVar18 = uVar13;
        *(undefined8 *)puVar17 = uVar2;
      }
    }
    uVar7 = *puVar10;
    if (*puVar15 < uVar7) {
      if (uVar7 < *puVar17) {
        local_70 = *puVar12;
        uStack_68 = *(undefined8 *)puVar15;
        *puVar12 = *puVar18;
        *(undefined8 *)puVar15 = *(undefined8 *)puVar17;
      }
      else {
        uVar13 = *puVar12;
        uVar2 = *(undefined8 *)puVar15;
        *puVar12 = *puVar19;
        *(undefined8 *)puVar15 = puVar19[1];
        *puVar19 = uVar13;
        puVar19[1] = uVar2;
        if (*puVar17 <= *puVar10) goto LAB_0033f7bc;
        local_70 = *puVar19;
        uStack_68 = puVar19[1];
        *puVar19 = *puVar18;
        puVar19[1] = *(undefined8 *)puVar17;
      }
      *puVar18 = local_70;
      *(undefined8 *)puVar17 = uStack_68;
    }
    else if (uVar7 < *puVar17) {
      uVar13 = *puVar19;
      uVar2 = puVar19[1];
      *puVar19 = *puVar18;
      puVar19[1] = *(undefined8 *)puVar17;
      uVar7 = *puVar10;
      *puVar18 = uVar13;
      *(undefined8 *)puVar17 = uVar2;
      if (*puVar15 < uVar7) {
        uVar13 = *puVar12;
        uVar2 = *(undefined8 *)puVar15;
        *puVar12 = *puVar19;
        *(undefined8 *)puVar15 = puVar19[1];
        *puVar19 = uVar13;
        puVar19[1] = uVar2;
      }
    }
LAB_0033f7bc:
    uVar13 = *param_1;
    uVar2 = param_1[1];
    uVar3 = puVar19[1];
    *param_1 = *puVar19;
    param_1[1] = uVar3;
    *puVar19 = uVar13;
    puVar19[1] = uVar2;
joined_r0x0033f7d8:
    if ((param_5 & 1) != 0) goto LAB_0033f5ec;
LAB_0033f7dc:
    uVar7 = *(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + -1) <= uVar7) {
      puVar11 = param_1;
      if (*(uint *)(param_2 + -1) < uVar7) {
        do {
          puVar19 = puVar11 + 2;
          puVar10 = (uint *)(puVar11 + 3);
          puVar11 = puVar19;
        } while (uVar7 <= *puVar10);
      }
      else {
        do {
          puVar19 = puVar11 + 2;
          if (param_2 <= puVar19) break;
          puVar10 = (uint *)(puVar11 + 3);
          puVar11 = puVar19;
        } while (uVar7 <= *puVar10);
      }
      puVar11 = param_2;
      if (puVar19 < param_2) {
        puVar12 = param_2;
        do {
          puVar11 = puVar12 + -2;
          puVar10 = (uint *)(puVar12 + -1);
          puVar12 = puVar11;
        } while (*puVar10 < uVar7);
      }
      uVar13 = *param_1;
      uVar6 = *(undefined4 *)((long)param_1 + 0xc);
      if (puVar19 < puVar11) {
        do {
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          uVar4 = puVar11[1];
          *puVar19 = *puVar11;
          puVar19[1] = uVar4;
          *puVar11 = uVar2;
          puVar11[1] = uVar3;
          do {
            puVar10 = (uint *)(puVar19 + 3);
            puVar19 = puVar19 + 2;
          } while (uVar7 <= *puVar10);
          do {
            puVar10 = (uint *)(puVar11 + -1);
            puVar11 = puVar11 + -2;
          } while (*puVar10 < uVar7);
        } while (puVar19 < puVar11);
      }
      if (puVar19 + -2 != param_1) {
        uVar2 = puVar19[-1];
        *param_1 = puVar19[-2];
        param_1[1] = uVar2;
      }
      param_5 = 0;
      puVar19[-2] = uVar13;
      *(uint *)(puVar19 + -1) = uVar7;
      *(undefined4 *)((long)puVar19 - 4) = uVar6;
      param_4 = param_4 + -1;
      goto LAB_0033f398;
    }
  }
  param_4 = param_4 + -1;
  uVar13 = *param_1;
  uVar6 = *(undefined4 *)((long)param_1 + 0xc);
  lVar8 = 0;
  do {
    lVar1 = lVar8 + 0x10;
    lVar20 = lVar8 + 0x18;
    lVar8 = lVar1;
  } while (uVar7 < *(uint *)((long)param_1 + lVar20));
  puVar11 = (undefined8 *)((long)param_1 + lVar1);
  puVar19 = param_2;
  if (lVar1 == 0x10) {
    do {
      puVar12 = puVar19;
      if (puVar19 <= puVar11) break;
      puVar12 = puVar19 + -2;
      puVar10 = (uint *)(puVar19 + -1);
      puVar19 = puVar12;
    } while (*puVar10 <= uVar7);
  }
  else {
    do {
      puVar12 = puVar19 + -2;
      puVar10 = (uint *)(puVar19 + -1);
      puVar19 = puVar12;
    } while (*puVar10 <= uVar7);
  }
  puVar19 = puVar11;
  if (puVar11 < puVar12) {
    puVar18 = puVar12;
    do {
      uVar2 = *puVar19;
      uVar3 = puVar19[1];
      uVar4 = puVar18[1];
      *puVar19 = *puVar18;
      puVar19[1] = uVar4;
      *puVar18 = uVar2;
      puVar18[1] = uVar3;
      do {
        puVar10 = (uint *)(puVar19 + 3);
        puVar19 = puVar19 + 2;
      } while (uVar7 < *puVar10);
      do {
        puVar10 = (uint *)(puVar18 + -1);
        puVar18 = puVar18 + -2;
      } while (*puVar10 <= uVar7);
    } while (puVar19 < puVar18);
  }
  puVar18 = puVar19 + -2;
  if (puVar18 != param_1) {
    uVar2 = puVar19[-1];
    *param_1 = *puVar18;
    param_1[1] = uVar2;
  }
  puVar19[-2] = uVar13;
  *(uint *)(puVar19 + -1) = uVar7;
  *(undefined4 *)((long)puVar19 - 4) = uVar6;
  if (puVar11 < puVar12) goto LAB_0033f908;
  uVar9 = FUN_0033fdc0(param_1,puVar18,param_3);
  uVar14 = FUN_0033fdc0(puVar19,param_2,param_3);
  if ((uVar14 & 1) == 0) goto code_r0x0033f904;
  param_2 = puVar18;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_0033f384;
LAB_0033fb74:
  puVar21 = puVar19;
  uVar7 = *(uint *)(puVar16 + 3);
  if (*(uint *)(puVar16 + 1) < uVar7) {
    uVar13 = *puVar21;
    uVar6 = *(undefined4 *)((long)puVar16 + 0x1c);
    lVar1 = lVar8;
    do {
      lVar20 = lVar1;
      puVar19 = (undefined8 *)((long)param_1 + lVar20);
      puVar19[2] = *puVar19;
      puVar19[3] = puVar19[1];
      if (lVar20 == 0) {
        puVar19 = param_1;
        goto LAB_0033fb58;
      }
      lVar1 = lVar20 + -0x10;
    } while (*(uint *)(puVar19 + -1) < uVar7);
    puVar19 = (undefined8 *)((long)param_1 + lVar20);
LAB_0033fb58:
    *puVar19 = uVar13;
    *(uint *)(puVar19 + 1) = uVar7;
    *(undefined4 *)((long)puVar19 + 0xc) = uVar6;
  }
  lVar8 = lVar8 + 0x10;
  puVar19 = puVar21 + 2;
  puVar16 = puVar21;
  if (puVar21 + 2 == param_2) {
switchD_0033fa4c_caseD_0:
    return;
  }
  goto LAB_0033fb74;
code_r0x0033f904:
  if ((uVar9 & 1) == 0) {
LAB_0033f908:
    FUN_0033f350(param_1,puVar18,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_0033f398;
}

