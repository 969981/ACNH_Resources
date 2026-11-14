
bool FUN_01757524(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    return false;
  }
  if (4 < *(uint *)(param_1 + 0x14)) {
    return *(char *)(param_1 + 0x10) != '\0';
  }
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar4 = *(int *)(lVar6 + 0x10);
  iVar1 = *(int *)(lVar6 + 4) + iVar5;
  iVar2 = *(int *)(lVar6 + 8) + iVar4;
  switch(*(uint *)(param_1 + 0x14)) {
  default:
    fVar7 = *param_2;
    iVar4 = iVar5;
    if (iVar1 <= iVar5) {
      iVar4 = iVar1;
    }
    break;
  case 2:
    fVar7 = param_2[2];
    iVar5 = iVar4;
    if (iVar4 <= iVar2) {
      iVar5 = iVar2;
    }
    goto LAB_017575d8;
  case 3:
    fVar7 = param_2[2];
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
    break;
  case 4:
    fVar7 = *param_2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
LAB_017575d8:
    bVar3 = fVar7 + -160.0 < (float)iVar5 * 5.0 + 5.0;
    goto LAB_017575fc;
  }
  bVar3 = (float)iVar4 * 5.0 < fVar7 + -160.0;
LAB_017575fc:
  *(bool *)(param_1 + 0x10) = bVar3;
  return bVar3;
}

