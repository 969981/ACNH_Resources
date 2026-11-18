
void FUN_03358c8c(long param_1,uint param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int local_58;
  int local_54;
  
  puVar2 = PTR_DAT_04bc1118;
  uVar10 = *(uint *)(param_1 + 0x1370);
  uVar17 = (ulong)uVar10;
  lVar15 = param_1 + 0xb08;
  iVar13 = *(int *)(param_1 + 0x1374);
  lVar16 = *(long *)PTR_DAT_04bc1118;
  if (iVar13 == 0 && uVar10 == 0) {
    iVar18 = 0;
LAB_03358d28:
    if (param_2 < 4) goto LAB_03358d58;
LAB_0335902c:
    iVar13 = iVar18;
    goto LAB_0335910c;
  }
  if (uVar10 == 0) {
    iVar9 = 0;
  }
  else {
    uVar7 = (ulong)(uVar10 - 1);
    if (*(int *)(param_1 + 0x12e0) + -1 <= (int)uVar10) {
      uVar1 = uVar7;
      if (0x1f6 < uVar10) {
        uVar1 = 0;
      }
      if (0x1f5 < uVar10) {
        uVar17 = 0;
      }
      iVar9 = *(int *)(lVar15 + uVar1 * 4) + 1;
      if (iVar9 == *(int *)(lVar15 + uVar17 * 4)) {
        iVar18 = *(int *)(lVar16 + 0x474);
        if (*(short *)(*(long *)(lVar16 + 0x468) + (long)(iVar18 + -1) * 2) == 10)
        goto LAB_03358d28;
        goto LAB_03358d4c;
      }
    }
    if (0x1f6 < uVar10) {
      uVar7 = 0;
    }
    iVar9 = *(int *)(lVar15 + uVar7 * 4) + 1;
  }
LAB_03358d4c:
  iVar18 = iVar9 + iVar13;
  if (3 < param_2) goto LAB_0335902c;
LAB_03358d58:
  switch((ulong)(&switchD_03358d70::switchdataD_0418dc10)[param_2] * 4 + 0x3358d74) {
  case 0x3358d74:
    FUN_03368d70(*(undefined8 *)(param_1 + 0x388));
    iVar13 = iVar18 + -1;
    if (iVar18 < 1) {
      lVar14 = *(long *)PTR_DAT_04bb4fb0;
      uVar3 = FUN_03368ef0(*(undefined8 *)PTR_DAT_04bc9358,2);
      lVar8 = *(long *)(lVar14 + 8);
      if (lVar8 != 0) {
        lVar4 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar4 = lVar8 + 8;
        }
        pcVar5 = s_Decide_KeyAssignBottonL_Limit_04b20879;
LAB_03359014:
        FUN_03366350(lVar14,lVar4,pcVar5,1,uVar3,0);
        iVar13 = iVar18;
        goto LAB_0335910c;
      }
      goto LAB_0335902c;
    }
    lVar14 = *(long *)PTR_DAT_04bb4fb0;
    uVar3 = FUN_03368ef0(*(undefined8 *)PTR_DAT_04bc9358,2);
    lVar8 = *(long *)(lVar14 + 8);
    if (lVar8 == 0) goto LAB_0335910c;
    lVar4 = 0;
    if (*(char *)(lVar8 + 0x38) != '\0') {
      lVar4 = lVar8 + 8;
    }
    pcVar5 = s_Decide_KeyAssignBottonL_04b20860;
    break;
  case 0x3358dd0:
    FUN_03368d70(*(undefined8 *)(param_1 + 0x388));
    if (*(int *)(*(long *)(param_1 + 0x4a0) + 0xc) <= iVar18) {
      lVar14 = *(long *)PTR_DAT_04bb4fb0;
      uVar3 = FUN_03368ef0(DAT_05734ea0,2);
      lVar8 = *(long *)(lVar14 + 8);
      if (lVar8 != 0) {
        lVar4 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar4 = lVar8 + 8;
        }
        pcVar5 = s_Decide_KeyAssignBottonR_Limit_04b208b1;
        goto LAB_03359014;
      }
      goto LAB_0335902c;
    }
    iVar13 = iVar18 + 1;
    lVar14 = *(long *)PTR_DAT_04bb4fb0;
    uVar3 = FUN_03368ef0(DAT_05734ea0,2);
    lVar8 = *(long *)(lVar14 + 8);
    if (lVar8 == 0) goto LAB_0335910c;
    lVar4 = 0;
    if (*(char *)(lVar8 + 0x38) != '\0') {
      lVar4 = lVar8 + 8;
    }
    pcVar5 = s_Decide_KeyAssignBottonR_04b20898;
    break;
  case 0x3358e48:
    iVar18 = *(int *)(param_1 + 0x12e0);
    if (iVar18 < 2) {
      return;
    }
    FUN_03368d70(*(undefined8 *)(param_1 + 0x388));
    lVar14 = *(long *)PTR_DAT_04bb4fb0;
    uVar3 = FUN_03368ef0(DAT_05734ea0,2);
    lVar8 = *(long *)(lVar14 + 8);
    if (lVar8 != 0) {
      lVar4 = 0;
      if (*(char *)(lVar8 + 0x38) != '\0') {
        lVar4 = lVar8 + 8;
      }
      FUN_03366350(lVar14,lVar4,s_Decide_KeyAssignBottonZL_04b208e9,1,uVar3,0);
    }
    uVar11 = 0;
    if ((int)uVar10 <= iVar18) {
      uVar11 = uVar10 - 1;
    }
    uVar6 = iVar18 - 1;
    if (0 < (int)uVar10) {
      uVar6 = uVar11;
    }
    uVar17 = (ulong)uVar6;
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar7 = (ulong)(uVar6 - 1);
      if (0x1f6 < uVar6) {
        uVar7 = 0;
      }
      uVar10 = ~*(uint *)(lVar15 + uVar7 * 4);
    }
    if (0x1f5 < uVar6) {
      uVar17 = 0;
    }
    iVar18 = *(int *)(lVar15 + uVar17 * 4);
    uVar11 = *(int *)(param_1 + 0x12e0) - 1;
    iVar9 = iVar18 + uVar10;
    if (uVar11 == uVar6) {
      iVar9 = iVar9 + 1;
    }
    if (iVar13 <= iVar9) {
      iVar9 = iVar13;
    }
    if (iVar9 == 0 && uVar6 == 0) {
LAB_03359108:
      iVar13 = 0;
      goto LAB_0335910c;
    }
    if (uVar6 != 0) goto LAB_0335906c;
LAB_033590fc:
    iVar18 = 0;
    goto LAB_03359100;
  case 0x3358ee8:
    iVar18 = *(int *)(param_1 + 0x12e0);
    if (iVar18 < 2) {
      return;
    }
    FUN_03368d70(*(undefined8 *)(param_1 + 0x388));
    lVar14 = *(long *)PTR_DAT_04bb4fb0;
    uVar3 = FUN_03368ef0(DAT_05734ea0,2);
    lVar8 = *(long *)(lVar14 + 8);
    if (lVar8 != 0) {
      lVar4 = 0;
      if (*(char *)(lVar8 + 0x38) != '\0') {
        lVar4 = lVar8 + 8;
      }
      FUN_03366350(lVar14,lVar4,s_Decide_KeyAssignBottonZR_04b20903,1,uVar3,0);
    }
    uVar11 = 0;
    if ((int)(uVar10 + 1) < iVar18) {
      uVar11 = uVar10 + 1;
    }
    uVar6 = iVar18 - 1;
    if (-2 < (int)uVar10) {
      uVar6 = uVar11;
    }
    uVar17 = (ulong)uVar6;
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar7 = (ulong)(uVar6 - 1);
      if (0x1f6 < uVar6) {
        uVar7 = 0;
      }
      uVar10 = ~*(uint *)(lVar15 + uVar7 * 4);
    }
    if (0x1f5 < uVar6) {
      uVar17 = 0;
    }
    iVar18 = *(int *)(lVar15 + uVar17 * 4);
    uVar11 = *(int *)(param_1 + 0x12e0) - 1;
    iVar9 = iVar18 + uVar10;
    if (uVar11 == uVar6) {
      iVar9 = iVar9 + 1;
    }
    if (iVar13 <= iVar9) {
      iVar9 = iVar13;
    }
    if (iVar9 == 0 && uVar6 == 0) goto LAB_03359108;
    if (uVar6 == 0) goto LAB_033590fc;
LAB_0335906c:
    uVar17 = (ulong)(uVar6 - 1);
    if ((int)uVar11 <= (int)uVar6) {
      uVar7 = uVar17;
      if (0x1f6 < uVar6) {
        uVar7 = 0;
      }
      if (*(int *)(lVar15 + uVar7 * 4) + 1 == iVar18) {
        lVar8 = *(long *)puVar2;
        iVar13 = *(int *)(lVar8 + 0x474);
        if (*(short *)(*(long *)(lVar8 + 0x468) + (long)(iVar13 + -1) * 2) == 10) goto LAB_0335910c;
        goto LAB_03359100;
      }
    }
    if (0x1f6 < uVar6) {
      uVar17 = 0;
    }
    iVar18 = *(int *)(lVar15 + uVar17 * 4) + 1;
LAB_03359100:
    iVar13 = iVar18 + iVar9;
    goto LAB_0335910c;
  }
  FUN_03366350(lVar14,lVar4,pcVar5,1,uVar3,0);
LAB_0335910c:
  FUN_03361cd0(lVar15,&local_54,&local_58,iVar13);
  if (*(int *)(param_1 + 0x1370) != local_54) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  if (*(int *)(param_1 + 0x1374) != local_58) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  *(int *)(param_1 + 0x1370) = local_54;
  *(int *)(param_1 + 0x1374) = local_58;
  lVar15 = *(long *)(lVar16 + 0x20);
  *(int *)(lVar15 + 0x6e8) = iVar13;
  *(int *)(lVar15 + 0x6ec) = iVar13;
  if ((*(long *)(lVar15 + 0x6e0) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar15 + 0x6e0) + 8), plVar12 != (long *)0x0)) {
    (**(code **)(*plVar12 + 0x188))(plVar12);
    FUN_03322410(plVar12);
    if ((*(long *)(lVar15 + 0x6e0) != 0) &&
       (lVar15 = *(long *)(*(long *)(lVar15 + 0x6e0) + 8), lVar15 != 0)) {
      *(undefined4 *)(lVar15 + 0x15ec) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x20) + 0x6e8);
    }
  }
  *(undefined4 *)(param_1 + 0x1378) = 0xffffffff;
  *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x6f0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb00) = 1;
  return;
}

