
undefined8 FUN_017ac158(float *param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(DAT_05292338 + 0xe48);
  if (iVar1 == 1) {
    return 0;
  }
  fVar4 = *(float *)(DAT_05292338 + 0xd24);
  if ((iVar1 < 2) || (5 < iVar1)) {
    if ((((iVar1 < 2) || (5 < iVar1)) && (((iVar1 < 6 || (0x10 < iVar1)) && (0x10 < iVar1)))) &&
       (iVar1 < 0x13)) {
      fVar5 = *param_1;
      fVar7 = param_1[2];
      fVar6 = param_1[1] * 0.0;
      fVar8 = fVar6 + fVar5 * 0.0;
      if (fVar4 <= fVar7 + fVar8 + -130.0) {
        if (fVar4 <= fVar5 + fVar6 + fVar7 * 0.0 + -110.0) {
          if (fVar4 <= (fVar8 - fVar7) + 190.0) {
            fVar6 = fVar6 - fVar5;
            fVar2 = 210.0;
LAB_017ac524:
            if (fVar4 <= fVar6 + fVar7 * 0.0 + fVar2) {
              return 0;
            }
            uVar3 = 1;
            goto LAB_017ac53c;
          }
LAB_017ac514:
          uVar3 = 0;
          goto LAB_017ac53c;
        }
        goto LAB_017ac4f4;
      }
    }
    else if ((((iVar1 < 2) || (5 < iVar1)) && ((iVar1 < 6 || (0x10 < iVar1)))) && (iVar1 == 0x13)) {
      fVar5 = *param_1;
      fVar7 = param_1[2];
      fVar6 = param_1[1] * 0.0;
      fVar8 = fVar6 + fVar5 * 0.0;
      if (fVar4 <= fVar7 + fVar8 + -110.0) {
        if (fVar4 <= fVar5 + fVar6 + fVar7 * 0.0 + -110.0) {
          fVar2 = 210.0;
LAB_017ac500:
          if (fVar4 <= (fVar8 - fVar7) + fVar2) {
            fVar6 = fVar6 - fVar5;
            goto LAB_017ac524;
          }
          goto LAB_017ac514;
        }
LAB_017ac4f4:
        uVar3 = 3;
        goto LAB_017ac53c;
      }
    }
    else {
      fVar5 = *param_1;
      fVar7 = param_1[2];
      fVar6 = param_1[1] * 0.0;
      fVar8 = fVar6 + fVar5 * 0.0;
      if (fVar4 <= fVar7 + fVar8 + -120.0) {
        if (fVar4 <= fVar5 + fVar6 + fVar7 * 0.0 + -120.0) {
          fVar2 = 200.0;
          goto LAB_017ac500;
        }
        goto LAB_017ac4f4;
      }
    }
  }
  else {
    fVar5 = *param_1;
    fVar7 = param_1[2];
    fVar6 = param_1[1] * 0.0;
    fVar8 = fVar6 + fVar5 * 0.0;
    if (fVar4 <= fVar7 + fVar8 + -130.0) {
      if (fVar4 <= fVar5 + fVar6 + fVar7 * 0.0 + -130.0) {
        fVar2 = 190.0;
        goto LAB_017ac500;
      }
      goto LAB_017ac4f4;
    }
  }
  uVar3 = 2;
LAB_017ac53c:
  *param_2 = uVar3;
  return 1;
}

