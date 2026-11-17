
void FUN_02ad7c98(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_2 != 0) {
    fVar8 = (float)*(int *)(param_3 + 0x10) * 10.0 + 2.5;
    fVar9 = (float)*(int *)(param_3 + 0x14) * 10.0 + 2.5;
    fVar6 = (float)*(int *)(param_3 + 0x20) * 10.0 + 10.0 + -2.5;
    fVar7 = (float)*(int *)(param_3 + 0x24) * 10.0 + 10.0 + -2.5;
    iVar1 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar2 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar5 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    iVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iVar4 = iVar1;
    if (iVar5 <= iVar1) {
      iVar4 = iVar5;
    }
    if (iVar1 <= iVar5) {
      iVar1 = iVar5;
    }
    iVar5 = iVar2;
    if (iVar3 <= iVar2) {
      iVar5 = iVar3;
    }
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    switch((*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2) {
    case 0:
      iVar4 = iVar1;
    case 3:
      iVar5 = iVar2;
      break;
    case 1:
      iVar4 = iVar1;
      break;
    case 2:
      break;
    default:
      goto switchD_02ad7d9c_default;
    }
    *(int *)(param_2 + 8) = iVar4;
    *(int *)(param_2 + 0xc) = iVar5;
  }
switchD_02ad7d9c_default:
  return;
}

