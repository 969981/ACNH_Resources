
void FUN_01912d10(float param_1,long param_2,float *param_3)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_3 != (float *)0x0) && (0 < *(int *)(param_2 + 0xe0))) {
    fVar7 = 0.0;
    if (*(int *)(param_2 + 0xe0) != 1) {
      uVar4 = 1;
      do {
        if (uVar4 < *(uint *)(param_2 + 0xc0)) {
          lVar1 = *(long *)(*(long *)(param_2 + 200) + uVar4 * 8);
        }
        else {
          lVar1 = 0;
        }
        lVar1 = (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
        uVar4 = uVar4 + 1;
        fVar7 = fVar7 + *(float *)(lVar1 + 4);
      } while ((long)uVar4 < (long)*(int *)(param_2 + 0xe0));
    }
    if (*(int *)(param_2 + 0xc0) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = **(long **)(param_2 + 200);
    }
    lVar1 = (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
    if (*(int *)(param_2 + 0xc0) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(long **)(param_2 + 200);
    }
    fVar13 = *(float *)(lVar1 + 4);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))((long *)(lVar3 + 0x30));
    if (*(int *)(param_2 + 0xc0) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = **(long **)(param_2 + 200);
    }
    fVar8 = pfVar2[2];
    fVar11 = *pfVar2;
    fVar10 = pfVar2[1];
    (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))((long *)(lVar1 + 0x30));
    uVar4 = (ulong)*(uint *)(param_2 + 0xe0);
    if (1 < (int)*(uint *)(param_2 + 0xe0)) {
      fVar13 = fVar13 + fVar7 * param_1;
      uVar6 = 1;
      lVar1 = 8;
      fVar7 = fVar10;
      fVar12 = fVar11;
      fVar9 = fVar8;
      do {
        if ((long)uVar6 < (long)(int)uVar4) {
          if (*(uint *)(param_2 + 0xc0) <= uVar6) goto LAB_01912e64;
          plVar5 = (long *)(*(long *)(param_2 + 200) + lVar1);
LAB_01912e5c:
          lVar3 = *plVar5;
        }
        else {
          if (*(uint *)(param_2 + 0xc0) != 0) {
            plVar5 = *(long **)(param_2 + 200);
            goto LAB_01912e5c;
          }
LAB_01912e64:
          lVar3 = 0;
        }
        pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
        fVar10 = fVar7 + pfVar2[1];
        fVar11 = fVar12 + *pfVar2;
        fVar8 = fVar9 + pfVar2[2];
        if (fVar13 < fVar10) {
          fVar13 = (fVar13 - fVar7) / (fVar10 - fVar7);
          fVar11 = fVar12 + (fVar11 - fVar12) * fVar13;
          fVar10 = fVar7 + (fVar10 - fVar7) * fVar13;
          fVar8 = fVar9 + (fVar8 - fVar9) * fVar13;
          break;
        }
        uVar4 = (ulong)*(int *)(param_2 + 0xe0);
        uVar6 = uVar6 + 1;
        lVar1 = lVar1 + 8;
        fVar7 = fVar10;
        fVar12 = fVar11;
        fVar9 = fVar8;
      } while ((long)uVar6 < (long)uVar4);
    }
    *param_3 = fVar11;
    param_3[1] = fVar10;
    param_3[2] = fVar8;
  }
  return;
}

