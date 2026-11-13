
void FUN_013b92b8(long param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138);
  if (lVar3 == 0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)(lVar3 + 0xa8);
  }
  *(float *)(param_1 + 0x35c) = fVar5;
  if (8 < param_2) goto switchD_013b9314_caseD_5;
  fVar4 = 2.5;
  switch(param_2) {
  case 0:
    lVar3 = FUN_013b65c4(param_1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x210) + 0xf0))(lVar3 + 0x210);
    fVar4 = *pfVar1;
    break;
  case 1:
    lVar3 = FUN_013b65c4(param_1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x240) + 0xf0))(lVar3 + 0x240);
    fVar4 = *(float *)(param_1 + 0x35c);
    if (fVar5 < *pfVar1) {
      fVar5 = *(float *)(param_1 + 0x370);
      goto LAB_013b9440;
    }
    goto LAB_013b9448;
  default:
    if (fVar5 <= *(float *)(param_1 + 0x368)) goto switchD_013b9314_caseD_5;
    fVar4 = fVar5 - *(float *)(param_1 + 0x36c);
    break;
  case 4:
    lVar3 = FUN_013b65c4(param_1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x210) + 0xf0))(lVar3 + 0x210);
    fVar4 = *(float *)(param_1 + 0x35c);
    if (fVar5 <= *pfVar1) goto LAB_013b9448;
    fVar4 = fVar4 - *(float *)(param_1 + 0x36c);
    break;
  case 5:
  case 7:
    goto switchD_013b9314_caseD_5;
  case 6:
    lVar3 = FUN_013b65c4(param_1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x240) + 0xf0))(lVar3 + 0x240);
    fVar4 = *(float *)(param_1 + 0x35c);
    if (*pfVar1 + *pfVar1 <= fVar5) {
      fVar5 = fVar4;
      goto switchD_013b9314_caseD_5;
    }
    lVar3 = FUN_013b65c4(param_1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x240) + 0xf0))(lVar3 + 0x240);
    pfVar1 = (float *)(param_1 + 0x35c);
    if (fVar4 < *pfVar2) {
      lVar3 = FUN_013b65c4(param_1);
      pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x240) + 0xf0))(lVar3 + 0x240);
    }
    fVar4 = *pfVar1;
    fVar5 = *(float *)(param_1 + 0x36c);
LAB_013b9440:
    fVar4 = fVar4 + fVar5;
    break;
  case 8:
    break;
  }
  *(float *)(param_1 + 0x35c) = fVar4;
LAB_013b9448:
  fVar5 = fVar4;
switchD_013b9314_caseD_5:
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) == 0) {
    return;
  }
  FUN_03850760(fVar5);
  return;
}

