
int FUN_0031db00(char *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = *(long *)(param_1 + 0xa0);
  if (*(char *)(lVar5 + 0x83a) != '\0') {
    iVar8 = *(int *)(lVar5 + 0x87c);
    goto LAB_0031dc1c;
  }
  lVar4 = *(long *)(param_1 + 0x240);
  fVar10 = *(float *)(lVar4 + 0x424);
  cVar1 = *(char *)(lVar5 + 0x838);
  bVar3 = false;
  if ((*(long *)(lVar4 + 0x2c0) != 0) && (bVar3 = false, !NAN(fVar10))) {
    bVar3 = fVar10 < 1.0;
  }
  fVar11 = 1.0;
  if (!bVar3) {
    fVar11 = fVar10;
  }
  fVar10 = 1.0;
  if (*(int *)(lVar5 + 0x844) != 0) {
    fVar10 = (float)*(int *)(lVar5 + 0x844);
  }
  fVar12 = (float)(*(int *)(lVar5 + 0x850) + 1);
  iVar7 = (int)(fVar10 / fVar12);
  iVar8 = (int)((float)*(int *)(lVar4 + 0x420) / fVar12);
  if ((iVar7 < iVar8 || *(char *)(lVar5 + 0x8f0) != '\0') && cVar1 != '\0') {
    iVar8 = iVar7;
  }
  fVar10 = (float)(int)fVar11;
  iVar8 = (int)((float)(int)(fVar11 * (float)iVar8) + fVar10 * 2.0);
  if (*(int *)(lVar5 + 0x8bc) == 0) {
    cVar2 = *(char *)(lVar5 + 0x880);
    if (cVar2 == '\r') {
      piVar9 = (int *)(lVar5 + 0x8d0);
LAB_0031dbe0:
      iVar8 = *piVar9 * iVar8;
    }
    else if (cVar2 == '\x02') {
      piVar9 = (int *)(lVar5 + 0x8c8);
      goto LAB_0031dbe0;
    }
    if (*(char *)(lVar5 + 0x792) != '\x02' || cVar1 != '\0') goto LAB_0031dc1c;
    iVar7 = (int)fVar10;
    if (cVar2 == '\r') {
      iVar6 = *(int *)(lVar5 + 0x8d0);
    }
    else {
      if (cVar2 != '\x02') goto LAB_0031dc18;
      iVar6 = *(int *)(lVar5 + 0x8c8);
    }
    iVar7 = iVar6 * iVar7;
  }
  else {
    if (*(char *)(lVar5 + 0x792) != '\x02' || cVar1 != '\0') goto LAB_0031dc1c;
    iVar7 = (int)fVar10;
  }
LAB_0031dc18:
  iVar8 = iVar7 + iVar8;
LAB_0031dc1c:
  if ((*param_1 == '\0') || (*(char *)(lVar5 + 0x82c) != '\0')) {
    return iVar8;
  }
  return *(int *)(param_2 + 0x230) * iVar8;
}

