
void FUN_003427e0(float *param_1,float *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
LAB_00342810:
  pfVar7 = param_2 + -2;
  do {
    param_4 = -param_4;
    pfVar6 = param_1;
    do {
      param_1 = pfVar6;
      param_4 = param_4 + 1;
      uVar12 = (long)param_2 - (long)param_1;
      uVar11 = (long)uVar12 >> 3;
      switch(uVar11) {
      case 0:
      case 1:
        goto switchD_003429f4_caseD_0;
      case 2:
        fVar13 = param_2[-2];
        fVar14 = *param_1;
        if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
          if (fVar14 <= fVar13) {
            return;
          }
        }
        else if (fVar13 <= fVar14) {
          return;
        }
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar4;
        return;
      case 3:
        FUN_00342da0(param_1,param_1 + 2,pfVar7,param_3);
        return;
      case 4:
        pfVar7 = param_1 + 4;
        FUN_00342da0(param_1,param_1 + 2,pfVar7,param_3);
        fVar13 = param_2[-2];
        fVar14 = param_1[4];
        if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
          if (fVar14 <= fVar13) {
            return;
          }
        }
        else if (fVar13 <= fVar14) {
          return;
        }
        uVar4 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar4;
        fVar13 = *pfVar7;
        fVar14 = param_1[2];
        if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
          if (fVar14 <= fVar13) {
            return;
          }
        }
        else if (fVar13 <= fVar14) {
          return;
        }
        uVar4 = *(undefined8 *)(param_1 + 2);
        uVar3 = *(undefined8 *)(param_1 + 4);
        fVar14 = *param_1;
        *(undefined8 *)(param_1 + 2) = uVar3;
        *(undefined8 *)(param_1 + 4) = uVar4;
        fVar13 = (float)uVar3;
        if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
          if (fVar14 <= fVar13) {
            return;
          }
        }
        else if (fVar13 <= fVar14) {
          return;
        }
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 2) = uVar4;
        return;
      case 5:
        FUN_003435b0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar7,param_3);
        return;
      }
      if ((long)uVar12 < 0xc0) {
        pfVar7 = param_1 + 2;
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2 || pfVar7 == param_2) {
            return;
          }
          goto LAB_00342ca4;
        }
        if (param_1 == param_2 || pfVar7 == param_2) {
          return;
        }
        lVar10 = 0;
        pfVar6 = param_1;
        goto LAB_00342b04;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        uVar5 = uVar11 - 2 >> 1;
        pfVar7 = param_1 + uVar5 * 2;
        lVar10 = uVar5 + 1;
        do {
          FUN_003437b0(param_1,param_3,uVar11,pfVar7);
          lVar10 = lVar10 + -1;
          pfVar7 = pfVar7 + -2;
        } while (lVar10 != 0);
        uVar11 = uVar12 >> 3;
        do {
          FUN_00343990(param_1,param_2,param_3,uVar11);
          param_2 = param_2 + -2;
          bVar1 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar1);
        return;
      }
      uVar11 = uVar11 >> 1;
      pfVar6 = param_1 + uVar11 * 2;
      if (uVar12 < 0x401) {
        FUN_00342da0(pfVar6,param_1,pfVar7,param_3);
      }
      else {
        FUN_00342da0(param_1,pfVar6,pfVar7,param_3);
        pfVar2 = param_1 + uVar11 * 2;
        pfVar8 = param_1 + 2;
        FUN_00342da0(pfVar8,pfVar2 + -2,param_2 + -4,param_3);
        FUN_00342da0(param_1 + 4,pfVar8 + uVar11 * 2,param_2 + -6,param_3);
        FUN_00342da0(pfVar2 + -2,pfVar6,pfVar8 + uVar11 * 2,param_3);
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar2;
        *(undefined8 *)pfVar2 = uVar4;
      }
      if ((param_5 & 1) == 0) {
        fVar13 = param_1[-2];
        fVar14 = *param_1;
        if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
          if (fVar14 <= fVar13) goto LAB_003429b0;
        }
        else if (fVar13 <= fVar14) {
LAB_003429b0:
          param_1 = (float *)FUN_00342ee0(param_1,param_2,param_3);
          goto LAB_003429c4;
        }
      }
      auVar16 = FUN_003430b0(param_1,param_2,param_3);
      pfVar8 = auVar16._0_8_;
      if ((auVar16._8_8_ & 1) == 0) break;
      uVar11 = FUN_00343280(param_1,pfVar8,param_3);
      uVar12 = FUN_00343280(pfVar8 + 2,param_2,param_3);
      if ((uVar12 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pfVar8;
        if ((uVar11 & 1) != 0) {
          return;
        }
        goto LAB_00342810;
      }
      pfVar6 = pfVar8 + 2;
    } while ((uVar11 & 1) != 0);
    FUN_003427e0(param_1,pfVar8,param_3,-param_4,param_5 & 1);
    param_1 = pfVar8 + 2;
LAB_003429c4:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_00342ca4:
  pfVar6 = pfVar7;
  fVar13 = param_1[2];
  fVar14 = *param_1;
  if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
    if (fVar13 < fVar14) goto LAB_00342cd8;
  }
  else if (fVar14 < fVar13) {
LAB_00342cd8:
    fVar14 = param_1[3];
    pfVar7 = pfVar6;
    if (fVar13 < 0.0) {
      do {
        while( true ) {
          pfVar8 = param_1;
          *(undefined8 *)(pfVar8 + 2) = *(undefined8 *)pfVar8;
          param_1 = pfVar8 + -2;
          fVar15 = *param_1;
          if (0.0 <= fVar15) break;
          if (fVar13 <= fVar15) goto LAB_00342c90;
        }
      } while (fVar13 < fVar15);
    }
    else {
      do {
        pfVar2 = pfVar7 + -4;
        pfVar8 = pfVar7 + -2;
        *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
        pfVar7 = pfVar8;
      } while (fVar13 < *pfVar2);
    }
LAB_00342c90:
    *pfVar8 = fVar13;
    pfVar8[1] = fVar14;
  }
  pfVar7 = pfVar6 + 2;
  param_1 = pfVar6;
  if (pfVar6 + 2 == param_2) {
    return;
  }
  goto LAB_00342ca4;
LAB_00342b04:
  fVar13 = pfVar6[2];
  fVar14 = *pfVar6;
  if ((0.0 <= fVar13) || (0.0 <= fVar14)) {
    if (fVar13 < fVar14) goto LAB_00342b38;
  }
  else if (fVar14 < fVar13) {
LAB_00342b38:
    fVar14 = pfVar6[3];
    *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)pfVar6;
    pfVar8 = param_1;
    if (pfVar6 != param_1) {
      lVar9 = lVar10;
      if (fVar13 < 0.0) {
        do {
          pfVar8 = (float *)((long)param_1 + lVar9);
          fVar15 = pfVar8[-2];
          if (fVar15 < 0.0) {
            if (fVar13 <= fVar15) goto LAB_00342aec;
          }
          else if (fVar15 <= fVar13) {
            pfVar8 = pfVar6;
            goto LAB_00342aec;
          }
          pfVar6 = pfVar6 + -2;
          lVar9 = lVar9 + -8;
          *(undefined8 *)pfVar8 = *(undefined8 *)(pfVar8 + -2);
        } while (lVar9 != 0);
      }
      else {
        do {
          pfVar8 = (float *)((long)param_1 + lVar9);
          if (pfVar8[-2] <= fVar13) goto LAB_00342aec;
          lVar9 = lVar9 + -8;
          *(undefined8 *)pfVar8 = *(undefined8 *)(pfVar8 + -2);
        } while (lVar9 != 0);
      }
      pfVar8 = param_1;
    }
LAB_00342aec:
    *pfVar8 = fVar13;
    pfVar8[1] = fVar14;
  }
  pfVar8 = pfVar7 + 2;
  lVar10 = lVar10 + 8;
  pfVar6 = pfVar7;
  pfVar7 = pfVar8;
  if (pfVar8 == param_2) {
switchD_003429f4_caseD_0:
    return;
  }
  goto LAB_00342b04;
}

