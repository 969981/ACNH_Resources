
float FUN_00481450(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (DAT_04102ee0 < param_1) {
    param_1 = param_1 + DAT_04102eac;
    fVar2 = param_1 * param_1 * param_1 * param_1;
    fVar1 = (float)(int)((float)(uint)(param_1 * DAT_04102f00) * DAT_04102e64);
    fVar1 = fVar1 * 4.0 + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    fVar1 = fVar1 * DAT_04102f1c + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    fVar1 = fVar1 * DAT_04102e7c + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    return fVar1 * DAT_04102e68 * fVar1 * fVar1;
  }
  return param_1 * DAT_04102f18;
}

