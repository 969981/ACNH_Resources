
undefined1 * FUN_00481850(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = DAT_04102ec0;
  fVar1 = *param_2;
  if (fVar1 <= DAT_04102ec0) {
    fVar1 = fVar1 * DAT_04102f04;
  }
  else {
    fVar2 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar4 = fVar2 * fVar2 * fVar2;
    fVar5 = fVar1 + fVar4;
    fVar2 = ((fVar1 + fVar5) / (fVar4 + fVar5)) * fVar2;
    fVar4 = fVar2 * fVar2 * fVar2;
    fVar5 = fVar1 + fVar4;
    FUN_004372f0(fVar2 * ((fVar1 + fVar5) / (fVar4 + fVar5)));
    fVar1 = (float)FUN_004372f0();
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * DAT_04102eec + DAT_04102e50;
  }
  fVar2 = DAT_04102edc;
  fVar4 = fVar1 * DAT_04102edc + 0.5;
  fVar1 = fVar4;
  if (DAT_04102edc < fVar4) {
    fVar1 = DAT_04102edc;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar1;
  }
  *param_1 = (char)(int)fVar5;
  fVar1 = param_2[1];
  if (fVar1 <= fVar3) {
    fVar1 = fVar1 * DAT_04102f04;
  }
  else {
    fVar4 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar5 = fVar4 * fVar4 * fVar4;
    fVar6 = fVar1 + fVar5;
    fVar4 = ((fVar1 + fVar6) / (fVar5 + fVar6)) * fVar4;
    fVar5 = fVar4 * fVar4 * fVar4;
    fVar6 = fVar1 + fVar5;
    FUN_004372f0(fVar4 * ((fVar1 + fVar6) / (fVar5 + fVar6)));
    fVar1 = (float)FUN_004372f0();
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * DAT_04102eec + DAT_04102e50;
  }
  fVar4 = fVar1 * fVar2 + 0.5;
  fVar1 = fVar4;
  if (fVar2 < fVar4) {
    fVar1 = fVar2;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar1;
  }
  param_1[1] = (char)(int)fVar5;
  fVar1 = param_2[2];
  if (fVar1 <= fVar3) {
    fVar1 = fVar1 * DAT_04102f04;
  }
  else {
    fVar3 = (float)(((int)fVar1 + 0x7f000000U) / 3);
    fVar4 = fVar3 * fVar3 * fVar3;
    fVar5 = fVar1 + fVar4;
    fVar3 = ((fVar1 + fVar5) / (fVar4 + fVar5)) * fVar3;
    fVar4 = fVar3 * fVar3 * fVar3;
    fVar5 = fVar1 + fVar4;
    FUN_004372f0(fVar3 * ((fVar1 + fVar5) / (fVar4 + fVar5)));
    fVar3 = (float)FUN_004372f0();
    fVar1 = fVar3 * fVar3 * fVar3 * fVar3 * fVar3 * DAT_04102eec + DAT_04102e50;
  }
  fVar1 = fVar1 * fVar2 + 0.5;
  fVar3 = fVar1;
  if (fVar2 < fVar1) {
    fVar3 = fVar2;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar1) {
    fVar4 = fVar3;
  }
  param_1[2] = (char)(int)fVar4;
  fVar1 = param_2[3] * fVar2 + 0.5;
  fVar3 = fVar1;
  if (fVar2 < fVar1) {
    fVar3 = fVar2;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar3;
  }
  param_1[3] = (char)(int)fVar2;
  return param_1;
}

