
void FUN_03afdce8(float param_1,float param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  param_1 = *(float *)(param_3 + 0x178) * *(float *)(param_3 + 0x134) * param_1;
  param_2 = *(float *)(param_3 + 0x178) * *(float *)(param_3 + 0x15c) * param_2;
  local_20 = *(float *)(param_3 + 0x128) * param_1;
  fStack_1c = param_1 * *(float *)(param_3 + 300);
  local_18 = param_1 * *(float *)(param_3 + 0x130);
  fStack_14 = param_1 * *(float *)(param_3 + 0x134);
  local_30 = param_2 * *(float *)(param_3 + 0x150);
  fStack_2c = param_2 * *(float *)(param_3 + 0x154);
  local_28 = param_2 * *(float *)(param_3 + 0x158);
  fStack_24 = param_2 * *(float *)(param_3 + 0x15c);
  FUN_03977cc0(*(undefined4 *)(param_3 + 0x208),*(undefined4 *)(param_3 + 0x198),
               *(undefined4 *)(param_3 + 0x228),*(undefined4 *)(param_3 + 0x248),param_4,param_5,
               param_3 + 0x1e0,param_3 + 0x1b8,&local_20,1,&local_30);
  return;
}

