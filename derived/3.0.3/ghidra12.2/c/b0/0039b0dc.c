
void FUN_0039b0dc(long param_1,undefined8 param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  local_28 = *param_3 + *param_4;
  local_30 = (*(float *)(param_1 + 0x50) - *param_4) - param_4[1];
  fStack_24 = param_3[1] - param_4[2];
  fStack_2c = (*(float *)(param_1 + 0x54) - param_4[2]) - param_4[3];
  if ((*(byte *)(param_1 + 0x10a) >> 3 & 1) != 0) {
    fVar2 = (float)(int)*(short *)(param_1 + 0xd2) * 0.0625;
    local_28 = local_28 - fVar2;
    fVar3 = (float)(int)*(short *)(param_1 + 0xd6) * 0.0625;
    fStack_24 = fVar3 + fStack_24;
    local_30 = local_30 + fVar2 + (float)(int)*(short *)(param_1 + 0xd4) * 0.0625;
    fStack_2c = fStack_2c + fVar3 + (float)(int)*(short *)(param_1 + 0xd8) * 0.0625;
  }
  uVar1 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
  FUN_00364a10(param_2,uVar1,&local_28,&local_30,*(undefined1 *)(param_1 + 0xf9),
               *(undefined8 *)(param_1 + 0x100));
  return;
}

