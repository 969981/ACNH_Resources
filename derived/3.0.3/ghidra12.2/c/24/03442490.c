
void FUN_03442490(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1 + 0x18;
  if (*(long *)(param_1 + 0x20) != lVar1) {
    fVar6 = *(float *)(param_1 + 8);
    fVar7 = *(float *)(param_1 + 0xc);
    lVar4 = (long)*(int *)(param_1 + 0x2c);
    plVar3 = (long *)(*(long *)(param_1 + 0x20) - lVar4);
    fVar8 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(param_1 + 0x14);
    do {
      (**(code **)(*plVar3 + 0x20))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)(lVar1 - lVar4));
    if (*(long *)(param_1 + 0x20) != lVar1) {
      lVar2 = (long)*(int *)(param_1 + 0x2c);
      lVar4 = *(long *)(param_1 + 0x20) - lVar2;
      do {
        fVar5 = *(float *)(lVar4 + 0xa0) - *(float *)(lVar4 + 0x98);
        if (fVar6 <= *(float *)(lVar4 + 0x98)) {
          if (fVar8 < *(float *)(lVar4 + 0xa0)) {
            *(float *)(lVar4 + 0xa0) = fVar8;
            *(float *)(lVar4 + 0x98) = fVar8 - fVar5;
          }
        }
        else {
          *(float *)(lVar4 + 0x98) = fVar6;
          *(float *)(lVar4 + 0xa0) = fVar6 + fVar5;
        }
        fVar5 = *(float *)(lVar4 + 0xa4) - *(float *)(lVar4 + 0x9c);
        if (*(float *)(lVar4 + 0x9c) < fVar7) {
          *(float *)(lVar4 + 0x9c) = fVar7;
          *(float *)(lVar4 + 0xa4) = fVar7 + fVar5;
        }
        else if (fVar9 < *(float *)(lVar4 + 0xa4)) {
          *(float *)(lVar4 + 0xa4) = fVar9;
          *(float *)(lVar4 + 0x9c) = fVar9 - fVar5;
        }
        lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
      } while (lVar1 - lVar2 != lVar4);
    }
  }
  return;
}

