
void FUN_03bb99b8(long param_1,long *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*param_2 == 0) {
    return;
  }
  fVar6 = *(float *)(param_1 + 100);
  fVar7 = *(float *)(param_1 + 0x68);
  fVar8 = 1.0;
  uVar1 = *(undefined4 *)(*param_2 + 8);
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (fVar7 <= fVar6) {
    fVar2 = 0.0;
    if (0.0 < fVar6) {
      if (0.0 < fVar7) goto LAB_03bb9a90;
      fVar5 = *(float *)(param_1 + 0x74);
      if (fVar5 == 0.0) {
        fVar2 = *(float *)(param_1 + 0x6c);
        goto LAB_03bb9a8c;
      }
      fVar2 = 0.0;
      fVar4 = (0.0 - fVar7) / (fVar6 - fVar7);
      fVar3 = 3.0517578e-05;
      if (3.0517578e-05 <= fVar4) {
        fVar3 = fVar4;
      }
      if (*(int *)(param_1 + 0x60) == 1) {
        fVar2 = (1.0 - fVar3) / (1.0 - fVar5);
LAB_03bb9a7c:
        fVar2 = fVar2 * *(float *)(param_1 + 0x70);
      }
      else if (*(int *)(param_1 + 0x60) == 0) {
        fVar2 = (float)FUN_038cd848();
        fVar5 = (float)FUN_038cd848(fVar5);
        fVar2 = fVar2 / fVar5;
        goto LAB_03bb9a7c;
      }
      fVar2 = fVar2 + *(float *)(param_1 + 0x6c);
    }
LAB_03bb9a8c:
    *(float *)(param_1 + 0x7c) = fVar2;
  }
LAB_03bb9a90:
  if (*param_2 != 0) {
    fVar8 = *(float *)(*param_2 + 0xc);
  }
  if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
    *(float *)(param_1 + 100) = fVar8;
    *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
    if (fVar7 <= fVar8) {
      fVar6 = 0.0;
      if (0.0 < fVar8) {
        if (0.0 < fVar7) goto LAB_03bb9b4c;
        fVar2 = *(float *)(param_1 + 0x74);
        if (fVar2 == 0.0) {
          fVar6 = *(float *)(param_1 + 0x6c);
          goto LAB_03bb9b48;
        }
        fVar6 = 0.0;
        fVar3 = (0.0 - fVar7) / (fVar8 - fVar7);
        fVar5 = 3.0517578e-05;
        if (3.0517578e-05 <= fVar3) {
          fVar5 = fVar3;
        }
        if (*(int *)(param_1 + 0x60) == 1) {
          fVar6 = (1.0 - fVar5) / (1.0 - fVar2);
LAB_03bb9b38:
          fVar6 = fVar6 * *(float *)(param_1 + 0x70);
        }
        else if (*(int *)(param_1 + 0x60) == 0) {
          fVar6 = (float)FUN_038cd848();
          fVar2 = (float)FUN_038cd848(fVar2);
          fVar6 = fVar6 / fVar2;
          goto LAB_03bb9b38;
        }
        fVar6 = fVar6 + *(float *)(param_1 + 0x6c);
      }
LAB_03bb9b48:
      *(float *)(param_1 + 0x7c) = fVar6;
    }
LAB_03bb9b4c:
    fVar6 = fVar8;
  }
  if (*param_2 == 0) {
    fVar8 = 0.0;
LAB_03bb9b74:
    if (fVar8 <= 1.0) {
      *(float *)(param_1 + 0x68) = fVar8;
      *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
      if (fVar8 <= fVar6) {
        fVar7 = 0.0;
        if (0.0 < fVar6) {
          if (0.0 < fVar8) goto LAB_03bb9c1c;
          fVar2 = *(float *)(param_1 + 0x74);
          if (fVar2 == 0.0) {
            fVar7 = *(float *)(param_1 + 0x6c);
            goto LAB_03bb9c18;
          }
          fVar7 = 0.0;
          fVar3 = (0.0 - fVar8) / (fVar6 - fVar8);
          fVar5 = 3.0517578e-05;
          if (3.0517578e-05 <= fVar3) {
            fVar5 = fVar3;
          }
          if (*(int *)(param_1 + 0x60) == 1) {
            fVar7 = (1.0 - fVar5) / (1.0 - fVar2);
LAB_03bb9c08:
            fVar7 = fVar7 * *(float *)(param_1 + 0x70);
          }
          else if (*(int *)(param_1 + 0x60) == 0) {
            fVar7 = (float)FUN_038cd848();
            fVar2 = (float)FUN_038cd848(fVar2);
            fVar7 = fVar7 / fVar2;
            goto LAB_03bb9c08;
          }
          fVar7 = fVar7 + *(float *)(param_1 + 0x6c);
        }
LAB_03bb9c18:
        *(float *)(param_1 + 0x7c) = fVar7;
      }
LAB_03bb9c1c:
      fVar7 = fVar8;
    }
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x10);
    if (0.0 <= fVar8) goto LAB_03bb9b74;
  }
  if (*param_2 == 0) {
    fVar8 = 0.0;
LAB_03bb9c3c:
    *(float *)(param_1 + 0x6c) = fVar8;
    *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
    if (fVar7 <= fVar6) {
      fVar2 = 0.0;
      if (0.0 < fVar6) {
        if (0.0 < fVar7) goto LAB_03bb9cd8;
        fVar5 = *(float *)(param_1 + 0x74);
        if (fVar5 == 0.0) {
          fVar2 = fVar8;
          goto LAB_03bb9cd4;
        }
        fVar2 = 0.0;
        fVar4 = (0.0 - fVar7) / (fVar6 - fVar7);
        fVar3 = 3.0517578e-05;
        if (3.0517578e-05 <= fVar4) {
          fVar3 = fVar4;
        }
        if (*(int *)(param_1 + 0x60) == 1) {
          fVar2 = (1.0 - fVar3) / (1.0 - fVar5);
LAB_03bb9cc8:
          fVar2 = fVar2 * *(float *)(param_1 + 0x70);
        }
        else if (*(int *)(param_1 + 0x60) == 0) {
          fVar2 = (float)FUN_038cd848();
          fVar5 = (float)FUN_038cd848(fVar5);
          fVar2 = fVar2 / fVar5;
          goto LAB_03bb9cc8;
        }
        fVar2 = fVar8 + fVar2;
      }
LAB_03bb9cd4:
      *(float *)(param_1 + 0x7c) = fVar2;
    }
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x14);
    if (0.0 <= fVar8) goto LAB_03bb9c3c;
  }
LAB_03bb9cd8:
  if (*param_2 == 0) {
    fVar8 = 1.0;
LAB_03bb9cf4:
    *(float *)(param_1 + 0x70) = fVar8;
    *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
    if (fVar7 <= fVar6) {
      fVar2 = 0.0;
      if (0.0 < fVar6) {
        if (0.0 < fVar7) goto LAB_03bb9d90;
        fVar5 = *(float *)(param_1 + 0x74);
        if (fVar5 == 0.0) {
          fVar2 = *(float *)(param_1 + 0x6c);
          goto LAB_03bb9d8c;
        }
        fVar2 = 0.0;
        fVar4 = (0.0 - fVar7) / (fVar6 - fVar7);
        fVar3 = 3.0517578e-05;
        if (3.0517578e-05 <= fVar4) {
          fVar3 = fVar4;
        }
        if (*(int *)(param_1 + 0x60) == 1) {
          fVar2 = (1.0 - fVar3) / (1.0 - fVar5);
LAB_03bb9d80:
          fVar2 = fVar8 * fVar2;
        }
        else if (*(int *)(param_1 + 0x60) == 0) {
          fVar2 = (float)FUN_038cd848();
          fVar5 = (float)FUN_038cd848(fVar5);
          fVar2 = fVar2 / fVar5;
          goto LAB_03bb9d80;
        }
        fVar2 = fVar2 + *(float *)(param_1 + 0x6c);
      }
LAB_03bb9d8c:
      *(float *)(param_1 + 0x7c) = fVar2;
    }
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x18);
    if (0.0 < fVar8) goto LAB_03bb9cf4;
  }
LAB_03bb9d90:
  if (*param_2 == 0) {
    fVar8 = 0.5;
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x1c);
    if (fVar8 < 0.0) goto LAB_03bb9e58;
  }
  if (1.0 < fVar8) goto LAB_03bb9e58;
  *(float *)(param_1 + 0x74) = fVar8;
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
  if (fVar6 < fVar7) goto LAB_03bb9e58;
  fVar2 = 0.0;
  if (0.0 < fVar6) {
    if (0.0 < fVar7) goto LAB_03bb9e58;
    if (fVar8 == 0.0) {
      fVar2 = *(float *)(param_1 + 0x6c);
      goto LAB_03bb9e54;
    }
    fVar2 = 0.0;
    fVar7 = (0.0 - fVar7) / (fVar6 - fVar7);
    fVar6 = 3.0517578e-05;
    if (3.0517578e-05 <= fVar7) {
      fVar6 = fVar7;
    }
    if (*(int *)(param_1 + 0x60) == 1) {
      fVar2 = (1.0 - fVar6) / (1.0 - fVar8);
LAB_03bb9e44:
      fVar2 = fVar2 * *(float *)(param_1 + 0x70);
    }
    else if (*(int *)(param_1 + 0x60) == 0) {
      fVar2 = (float)FUN_038cd848();
      fVar6 = (float)FUN_038cd848(fVar8);
      fVar2 = fVar2 / fVar6;
      goto LAB_03bb9e44;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x6c);
  }
LAB_03bb9e54:
  *(float *)(param_1 + 0x7c) = fVar2;
LAB_03bb9e58:
  if (*param_2 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(*param_2 + 0x20);
    if (fVar6 < 0.0) {
      return;
    }
  }
  *(float *)(param_1 + 0x78) = fVar6;
  return;
}

