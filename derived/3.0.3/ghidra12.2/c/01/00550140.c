
float FUN_00550140(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x28);
  fVar4 = 1.0 / fVar5;
  iVar1 = *(int *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x1c);
  switch(iVar1) {
  case 4:
  case 5:
    break;
  case 6:
    goto switchD_00550174_caseD_6;
  case 7:
    if (0.0 < fVar3) {
      fVar2 = *(float *)(param_1 + 0x24);
      if (fVar5 * fVar2 <= fVar3) {
        *(float *)(param_1 + 0x20) = fVar2;
        return fVar2;
      }
      goto LAB_00550268;
    }
    goto switchD_00550198_caseD_550280;
  case 8:
    if (0.0 < fVar3) {
      if (fVar3 < fVar5 * (1.0 - *(float *)(param_1 + 0x24))) {
        fVar5 = fVar3 * fVar4 + *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x20) = fVar5;
        return fVar5;
      }
      goto switchD_00550174_caseD_6;
    }
    goto switchD_00550198_caseD_550248;
  case 9:
    if (0.0 < fVar3) {
      if (fVar3 < fVar5 * *(float *)(param_1 + 0x24)) {
        fVar5 = *(float *)(param_1 + 0x24) - fVar3 * fVar4;
        *(float *)(param_1 + 0x20) = fVar5;
        return fVar5;
      }
      goto switchD_00550198_caseD_550280;
    }
    goto switchD_00550198_caseD_550248;
  default:
    fVar5 = 0.0;
  }
  if (iVar1 - 1U < 5) {
    switch((ulong)(&switchD_00550198::switchdataD_041457cc)[iVar1 - 1] * 4 + 0x55019c) {
    case 0x55019c:
      if (0.0 < fVar3) {
        if (fVar3 < fVar5) {
          fVar5 = 1.0 - fVar3 * fVar4;
          *(float *)(param_1 + 0x20) = fVar5;
          return fVar5;
        }
        goto switchD_00550198_caseD_550280;
      }
      break;
    case 0x550248:
switchD_00550198_caseD_550248:
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x24);
      return *(float *)(param_1 + 0x24);
    case 0x550258:
      if (fVar3 <= 0.0) goto switchD_00550198_caseD_550280;
      if (fVar3 < fVar5) {
LAB_00550268:
        *(float *)(param_1 + 0x20) = fVar3 * fVar4;
        return fVar3 * fVar4;
      }
      break;
    case 0x550280:
switchD_00550198_caseD_550280:
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0.0;
    }
  }
switchD_00550174_caseD_6:
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  return 1.0;
}

