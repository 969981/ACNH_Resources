
bool FUN_021fa5f0(undefined4 *param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = true;
  switch(*param_1) {
  case 3:
  case 5:
    switch(*param_3) {
    case 0:
switchD_021fa660_caseD_2:
      fVar2 = *param_4;
      fVar4 = *param_2;
      break;
    case 1:
switchD_021fa660_caseD_3:
      fVar3 = param_4[2];
      fVar4 = param_2[2];
LAB_021fa6c0:
      return fVar3 < fVar4;
    case 2:
switchD_021fa660_caseD_0:
      fVar3 = *param_4;
      fVar4 = *param_2;
      goto LAB_021fa6c0;
    case 3:
switchD_021fa660_caseD_1:
      fVar2 = param_4[2];
      fVar4 = param_2[2];
      break;
    default:
      goto switchD_021fa618_caseD_7;
    }
    break;
  case 4:
  case 6:
    switch(*param_3) {
    case 0:
      goto switchD_021fa660_caseD_0;
    case 1:
      goto switchD_021fa660_caseD_1;
    case 2:
      goto switchD_021fa660_caseD_2;
    case 3:
      goto switchD_021fa660_caseD_3;
    default:
      goto switchD_021fa618_caseD_7;
    }
  default:
    goto switchD_021fa618_caseD_7;
  case 8:
    switch(*param_3) {
    case 0:
    case 2:
      fVar3 = *param_4;
      fVar4 = *param_2;
      break;
    case 1:
    case 3:
      fVar3 = param_4[2];
      fVar4 = param_2[2];
      break;
    default:
      goto switchD_021fa618_caseD_7;
    }
    fVar3 = fVar3 - fVar4;
    fVar4 = 0.1;
    fVar2 = -fVar3;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
  }
  bVar1 = fVar4 < fVar2;
switchD_021fa618_caseD_7:
  return bVar1;
}

