
void FUN_03126828(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *param_2;
  *(float *)(param_1 + 0x35c) = fVar6;
  fVar7 = param_2[1];
  fVar8 = 1.0 / fVar7;
  *(float *)(param_1 + 0x360) = fVar7;
  cVar3 = *(char *)(param_2 + 2);
  *(char *)(param_1 + 0x369) = cVar3;
  fVar6 = fVar6 / fVar8;
  fVar9 = fVar7 + -1.0;
  if (cVar3 != '\0') {
    fVar9 = fVar7;
  }
  fVar7 = 0.5;
  if (fVar6 < 0.0) {
    fVar7 = -0.5;
  }
  iVar5 = (int)(fVar6 + fVar7);
  iVar1 = iVar5;
  if ((int)fVar9 <= iVar5) {
    iVar1 = (int)fVar9;
  }
  iVar2 = 0;
  if (-1 < iVar5) {
    iVar2 = iVar1;
  }
  uVar4 = *(undefined1 *)((long)param_2 + 9);
  *(float *)(param_1 + 0x364) = fVar8;
  *(undefined1 *)(param_1 + 0x36a) = uVar4;
  *(float *)(param_1 + 0x35c) = fVar8 * (float)iVar2;
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x348);
  *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x34c);
  if (*(char *)(param_1 + 0x368) == '\0') {
    fVar9 = 0.0;
    if (cVar3 != '\0') {
      fVar9 = *(float *)(param_1 + 0x344) * 0.5;
    }
    fVar9 = *(float *)(param_1 + 0x33c) - fVar9;
    *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x34c) - fVar9 * 0.5;
  }
  else {
    fVar9 = 0.0;
    if (cVar3 != '\0') {
      fVar9 = *(float *)(param_1 + 0x340) * 0.5;
    }
    fVar9 = *(float *)(param_1 + 0x338) - fVar9;
    *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x348) - fVar9 * 0.5;
  }
  *(float *)(param_1 + 0x358) = fVar9;
  FUN_03126930(param_1);
  *(undefined8 *)(param_1 + 0x378) = 0;
  return;
}

