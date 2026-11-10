
int FUN_003376c0(char *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  fVar6 = *(float *)(*(long *)(param_1 + 0x240) + 0x424);
  bVar1 = false;
  if ((*(long *)(*(long *)(param_1 + 0x240) + 0x2c0) != 0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 < 1.0;
  }
  fVar7 = 1.0;
  if (!bVar1) {
    fVar7 = fVar6;
  }
  fVar6 = 1.0;
  if (*(int *)(lVar2 + 0x844) != 0) {
    fVar6 = (float)*(int *)(lVar2 + 0x844);
  }
  fVar8 = (float)(*(int *)(lVar2 + 0x850) + 1);
  iVar4 = (int)(fVar6 / fVar8);
  iVar5 = (int)((float)param_2 / fVar8);
  if ((iVar4 < iVar5 || *(char *)(lVar2 + 0x8f0) != '\0') && *(char *)(lVar2 + 0x838) != '\0') {
    iVar5 = iVar4;
  }
  iVar5 = (int)((float)(int)fVar7 + (float)(int)(fVar7 * (float)iVar5));
  if (*(int *)(lVar2 + 0x8bc) == 0) {
    if (*(char *)(lVar2 + 0x880) == '\r') {
      piVar3 = (int *)(lVar2 + 0x8d0);
    }
    else {
      if (*(char *)(lVar2 + 0x880) != '\x02') goto LAB_00337770;
      piVar3 = (int *)(lVar2 + 0x8c8);
    }
    iVar5 = *piVar3 * iVar5;
  }
LAB_00337770:
  if ((*param_1 == '\0') || (*(char *)(lVar2 + 0x82c) != '\0')) {
    return iVar5;
  }
  return *(int *)(*(long *)(param_1 + 0x5e0) + 0x230) * iVar5;
}

