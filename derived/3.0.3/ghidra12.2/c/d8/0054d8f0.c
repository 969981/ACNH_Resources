
void FUN_0054d8f0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  float fVar1;
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_004385d0(auStack_70);
  FUN_00482640(auStack_70,param_4,param_2 + 0x60);
  fVar1 = DAT_04102edc;
  param_1[1] = uStack_38;
  *param_1 = local_40;
  fVar1 = fVar1 / *(float *)(param_2 + 0xac) + (float)*param_3;
  fVar1 = fVar1 * fVar1;
  param_1[2] = CONCAT44(fVar1,fVar1);
  FUN_004385e0(auStack_70);
  return;
}

