
bool FUN_01906898(long *param_1,float *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar4 = (**(code **)(*param_1 + 0x158))();
  bVar3 = false;
  switch(uVar4) {
  case 1:
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01906a0c:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
LAB_01906a1c:
      fVar15 = *pfVar8;
      fVar14 = pfVar8[2];
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      puVar2 = PTR_DAT_04bb5ce0;
      if ((0x3f < *puVar7 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar7 * 0x14 + 0xc) == '\0'))
      goto LAB_01906a0c;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if ((uVar1 < 0x40) && (*(long *)puVar2 != 0)) {
        lVar9 = *(long *)puVar2 + 0xc;
        fVar15 = 0.0;
        if (*(char *)(lVar9 + (ulong)uVar1 * 0x14) == '\0') goto LAB_01906a24;
        pfVar8 = (float *)(lVar9 + (ulong)uVar1 * 0x14 + 4);
        goto LAB_01906a1c;
      }
      fVar15 = 0.0;
    }
LAB_01906a24:
    fVar15 = SQRT((fVar14 - param_2[2]) * (fVar14 - param_2[2]) +
                  (fVar15 - *param_2) * (fVar15 - *param_2));
    iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
    if (iVar5 == 2) {
      lVar9 = *(long *)(param_1[7] + 0x10);
      if (*(int *)(lVar9 + 0x58) != 0) goto LAB_01906a74;
LAB_01906dc0:
      lVar9 = 0;
    }
    else {
      fVar14 = 0.0;
      if (iVar5 != 1) break;
      lVar9 = *(long *)(param_1[7] + 8);
      if (*(int *)(lVar9 + 0x58) == 0) goto LAB_01906dc0;
LAB_01906a74:
      lVar9 = **(long **)(lVar9 + 0x60);
    }
    pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x38) + 0xf0))();
    fVar14 = *pfVar8;
    break;
  case 2:
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01906b2c:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
LAB_01906b3c:
      fVar15 = *pfVar8;
      fVar14 = pfVar8[2];
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      puVar2 = PTR_DAT_04bb5ce0;
      if ((0x3f < *puVar7 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar7 * 0x14 + 0xc) == '\0'))
      goto LAB_01906b2c;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if ((uVar1 < 0x40) && (*(long *)puVar2 != 0)) {
        lVar9 = *(long *)puVar2 + 0xc;
        fVar15 = 0.0;
        if (*(char *)(lVar9 + (ulong)uVar1 * 0x14) == '\0') goto LAB_01906b44;
        pfVar8 = (float *)(lVar9 + (ulong)uVar1 * 0x14 + 4);
        goto LAB_01906b3c;
      }
      fVar15 = 0.0;
    }
LAB_01906b44:
    FUN_01907820(param_1);
    fVar12 = *param_2;
    fVar13 = param_2[2];
    iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
    if (iVar5 == 2) {
      lVar9 = *(long *)(param_1[7] + 0x10);
      if (*(int *)(lVar9 + 0x58) != 0) goto LAB_01906b9c;
LAB_01906dec:
      lVar9 = 0;
LAB_01906df0:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x38) + 0xf0))();
      fVar11 = *pfVar8;
    }
    else {
      fVar11 = 0.0;
      if (iVar5 == 1) {
        lVar9 = *(long *)(param_1[7] + 8);
        if (*(int *)(lVar9 + 0x58) == 0) goto LAB_01906dec;
LAB_01906b9c:
        lVar9 = **(long **)(lVar9 + 0x60);
        goto LAB_01906df0;
      }
    }
    if (fVar11 < SQRT((fVar14 - fVar13) * (fVar14 - fVar13) + (fVar15 - fVar12) * (fVar15 - fVar12))
       ) goto LAB_019072ec;
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01906fe8:
      lVar9 = (**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
      pfVar8 = (float *)(lVar9 + 4);
LAB_01906ffc:
      fVar14 = *pfVar8;
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      if (((0x3f < *puVar7) || (DAT_05292338 == 0)) ||
         (*(char *)(DAT_05292338 + (ulong)*puVar7 * 0x14 + 0xc) == '\0')) goto LAB_01906fe8;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if (((uVar1 < 0x40) && (DAT_05292338 != 0)) &&
         (*(char *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14) != '\0')) {
        pfVar8 = (float *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14 + 8);
        goto LAB_01906ffc;
      }
    }
    fVar15 = param_2[1];
    if (fVar15 < fVar14) goto LAB_019072ec;
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01907128:
      lVar9 = (**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
      pfVar8 = (float *)(lVar9 + 4);
LAB_0190713c:
      fVar14 = *pfVar8;
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      if (((0x3f < *puVar7) || (DAT_05292338 == 0)) ||
         (*(char *)(DAT_05292338 + (ulong)*puVar7 * 0x14 + 0xc) == '\0')) goto LAB_01907128;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if (((uVar1 < 0x40) && (DAT_05292338 != 0)) &&
         (*(char *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14) != '\0')) {
        pfVar8 = (float *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14 + 8);
        goto LAB_0190713c;
      }
    }
    fVar12 = (float)FUN_01907820(param_1);
    fVar14 = fVar14 + fVar12;
    break;
  default:
    goto switchD_019068ec_caseD_3;
  case 5:
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01906c54:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
LAB_01906c64:
      fVar15 = *pfVar8;
      fVar14 = pfVar8[2];
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      puVar2 = PTR_DAT_04bb5ce0;
      if ((0x3f < *puVar7 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar7 * 0x14 + 0xc) == '\0'))
      goto LAB_01906c54;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if ((uVar1 < 0x40) && (*(long *)puVar2 != 0)) {
        lVar9 = *(long *)puVar2 + 0xc;
        fVar15 = 0.0;
        if (*(char *)(lVar9 + (ulong)uVar1 * 0x14) == '\0') goto LAB_01906c6c;
        pfVar8 = (float *)(lVar9 + (ulong)uVar1 * 0x14 + 4);
        goto LAB_01906c64;
      }
      fVar15 = 0.0;
    }
LAB_01906c6c:
    iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
    if (iVar5 == 6) {
      lVar9 = *(long *)(param_1[7] + 0x20);
      if (*(int *)(lVar9 + 0x58) != 0) goto LAB_01906ca0;
LAB_01906e38:
      lVar9 = 0;
LAB_01906e3c:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x38) + 0xf0))();
      fVar12 = *pfVar8 * 0.5;
    }
    else {
      fVar12 = 0.0;
      if (iVar5 == 5) {
        lVar9 = *(long *)(param_1[7] + 0x18);
        if (*(int *)(lVar9 + 0x58) == 0) goto LAB_01906e38;
LAB_01906ca0:
        lVar9 = **(long **)(lVar9 + 0x60);
        goto LAB_01906e3c;
      }
    }
    fVar13 = *param_2;
    bVar3 = true;
    if ((fVar15 - fVar12 <= fVar13) && (bVar3 = false, !NAN(fVar15 + fVar12) && !NAN(fVar13))) {
      bVar3 = fVar15 + fVar12 < fVar13;
    }
    if (!bVar3) {
      iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
      if (iVar5 == 6) {
        if (*(int *)(*(long *)(param_1[7] + 0x20) + 0x58) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = **(long **)(*(long *)(param_1[7] + 0x20) + 0x60);
        }
        plVar10 = (long *)(lVar9 + 0x98);
      }
      else {
        fVar15 = 0.0;
        if (iVar5 != 5) goto LAB_01907190;
        if (*(int *)(*(long *)(param_1[7] + 0x18) + 0x58) == 0) {
          plVar10 = (long *)&DAT_00000068;
        }
        else {
          plVar10 = (long *)(**(long **)(*(long *)(param_1[7] + 0x18) + 0x60) + 0x68);
        }
      }
      pfVar8 = (float *)(**(code **)(*plVar10 + 0xf0))();
      fVar15 = *pfVar8 * 0.5;
LAB_01907190:
      return param_2[2] <= fVar14 + fVar15 && fVar14 - fVar15 <= param_2[2];
    }
    goto LAB_019072ec;
  case 6:
    if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
    }
    pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
    if (*pcVar6 == '\0') {
LAB_01906d58:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
LAB_01906d68:
      fVar15 = *pfVar8;
      fVar14 = pfVar8[2];
    }
    else {
      plVar10 = (long *)(lVar9 + 0x60);
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      puVar2 = PTR_DAT_04bb5ce0;
      if ((0x3f < *puVar7 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar7 * 0x14 + 0xc) == '\0'))
      goto LAB_01906d58;
      puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      uVar1 = *puVar7;
      fVar14 = 0.0;
      if ((uVar1 < 0x40) && (*(long *)puVar2 != 0)) {
        lVar9 = *(long *)puVar2 + 0xc;
        fVar15 = 0.0;
        if (*(char *)(lVar9 + (ulong)uVar1 * 0x14) == '\0') goto LAB_01906d70;
        pfVar8 = (float *)(lVar9 + (ulong)uVar1 * 0x14 + 4);
        goto LAB_01906d68;
      }
      fVar15 = 0.0;
    }
LAB_01906d70:
    iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
    if (iVar5 == 6) {
      lVar9 = *(long *)(param_1[7] + 0x20);
      if (*(int *)(lVar9 + 0x58) != 0) goto LAB_01906da4;
LAB_01906ec4:
      lVar9 = 0;
LAB_01906ec8:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x38) + 0xf0))();
      fVar12 = *pfVar8 * 0.5;
    }
    else {
      fVar12 = 0.0;
      if (iVar5 == 5) {
        lVar9 = *(long *)(param_1[7] + 0x18);
        if (*(int *)(lVar9 + 0x58) == 0) goto LAB_01906ec4;
LAB_01906da4:
        lVar9 = **(long **)(lVar9 + 0x60);
        goto LAB_01906ec8;
      }
    }
    fVar13 = *param_2;
    bVar3 = true;
    if ((fVar15 - fVar12 <= fVar13) && (bVar3 = false, !NAN(fVar15 + fVar12) && !NAN(fVar13))) {
      bVar3 = fVar15 + fVar12 < fVar13;
    }
    if (!bVar3) {
      iVar5 = (**(code **)(*param_1 + 0x158))(param_1);
      if (iVar5 == 6) {
        if (*(int *)(*(long *)(param_1[7] + 0x20) + 0x58) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = **(long **)(*(long *)(param_1[7] + 0x20) + 0x60);
        }
        plVar10 = (long *)(lVar9 + 0x98);
LAB_019071b8:
        pfVar8 = (float *)(**(code **)(*plVar10 + 0xf0))();
        fVar15 = *pfVar8 * 0.5;
      }
      else {
        fVar15 = 0.0;
        if (iVar5 == 5) {
          if (*(int *)(*(long *)(param_1[7] + 0x18) + 0x58) == 0) {
            plVar10 = (long *)&DAT_00000068;
          }
          else {
            plVar10 = (long *)(**(long **)(*(long *)(param_1[7] + 0x18) + 0x60) + 0x68);
          }
          goto LAB_019071b8;
        }
      }
      if (param_2[2] < fVar14 - fVar15) {
        return false;
      }
      if (fVar14 + fVar15 < param_2[2]) {
        return false;
      }
      if (*(int *)(*(long *)param_1[7] + 0x58) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = **(long **)(*(long *)param_1[7] + 0x60);
      }
      fVar14 = param_2[1];
      pcVar6 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
      if (*pcVar6 == '\0') {
LAB_019072b8:
        lVar9 = (**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
        pfVar8 = (float *)(lVar9 + 4);
LAB_019072cc:
        fVar15 = *pfVar8;
      }
      else {
        plVar10 = (long *)(lVar9 + 0x60);
        puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
        if (((0x3f < *puVar7) || (DAT_05292338 == 0)) ||
           (*(char *)(DAT_05292338 + (ulong)*puVar7 * 0x14 + 0xc) == '\0')) goto LAB_019072b8;
        puVar7 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
        uVar1 = *puVar7;
        fVar15 = 0.0;
        if (((uVar1 < 0x40) && (DAT_05292338 != 0)) &&
           (*(char *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14) != '\0')) {
          pfVar8 = (float *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14 + 8);
          goto LAB_019072cc;
        }
      }
      if ((fVar15 <= fVar14) && (fVar14 = (float)FUN_019074d4(param_1), param_2[1] <= fVar14)) {
        return true;
      }
    }
LAB_019072ec:
    bVar3 = false;
    goto switchD_019068ec_caseD_3;
  }
  bVar3 = fVar15 <= fVar14;
switchD_019068ec_caseD_3:
  return bVar3;
}

