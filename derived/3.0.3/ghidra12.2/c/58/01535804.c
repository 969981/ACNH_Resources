
undefined8 FUN_01535804(long param_1,int *param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0x5c);
  if ((param_5 & 1) == 0) goto switchD_01535844_default;
  switch(*param_2 + 0x10000000U >> 0x1d) {
  case 0:
    goto switchD_01535844_caseD_0;
  case 1:
    iVar5 = iVar5 + -1;
    goto switchD_01535844_caseD_0;
  case 2:
    iVar5 = iVar5 + -1;
    break;
  case 3:
    iVar5 = iVar5 + -1;
  case 4:
    goto switchD_01535844_caseD_4;
  case 5:
    iVar5 = iVar5 + 1;
switchD_01535844_caseD_4:
    iVar6 = iVar6 + 1;
    break;
  case 6:
    iVar5 = iVar5 + 1;
    break;
  case 7:
    iVar5 = iVar5 + 1;
switchD_01535844_caseD_0:
    iVar6 = iVar6 + -1;
  }
switchD_01535844_default:
  iVar1 = *(int *)(param_3 + 8);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_4 + 8);
  iVar4 = *(int *)(param_4 + 0xc);
  fVar9 = (float)iVar1 - (float)iVar5;
  fVar10 = (float)iVar3 - (float)iVar6;
  fVar7 = (float)iVar2 - (float)iVar5;
  fVar8 = (float)iVar4 - (float)iVar6;
  fVar9 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
  fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  if (fVar9 < fVar7) {
    return 1;
  }
  if (fVar9 != fVar7) {
    return 0;
  }
  switch(*param_2 + 0x10000000U >> 0x1d) {
  case 0:
    if (iVar2 < iVar1) {
      return 1;
    }
    return 0;
  case 1:
  case 7:
    if (iVar2 < iVar1) {
      return 1;
    }
    if (iVar1 != iVar2) {
      return 0;
    }
  case 2:
    if (iVar4 <= iVar3) {
switchD_01535910_default:
      return 0;
    }
    break;
  case 3:
  case 5:
    if (iVar1 < iVar2) {
      return 1;
    }
    if (iVar1 != iVar2) {
      return 0;
    }
  case 6:
    if (iVar3 <= iVar4) {
      return 0;
    }
    break;
  case 4:
    if (iVar1 < iVar2) {
      return 1;
    }
    return 0;
  default:
    goto switchD_01535910_default;
  }
  return 1;
}

