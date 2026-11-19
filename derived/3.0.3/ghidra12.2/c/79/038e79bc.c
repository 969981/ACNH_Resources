
void FUN_038e79bc(long param_1,float *param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 8);
  *param_2 = fVar1;
  fVar2 = *(float *)(param_1 + 0xc);
  param_2[1] = fVar2;
  fVar3 = fVar2;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    fVar3 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8))) -
            fVar1;
    fVar1 = fVar2;
    break;
  case 2:
    fVar3 = fVar1;
    fVar1 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xc))) -
            fVar2;
    break;
  case 3:
    fVar3 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xc))) -
            fVar2;
    fVar1 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8))) -
            fVar1;
    break;
  case 4:
    fVar1 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8))) -
            fVar1;
    break;
  case 5:
    fVar3 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xc))) -
            fVar2;
    break;
  default:
    goto switchD_038e79f0_default;
  }
  *param_2 = fVar1;
  param_2[1] = fVar3;
switchD_038e79f0_default:
  fVar1 = fVar1 / *(float *)(param_3 + 8);
  *param_2 = fVar1;
  fVar3 = fVar3 / *(float *)(param_3 + 0xc);
  param_2[1] = fVar3;
  fVar1 = fVar1 * (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10));
  *param_2 = fVar1;
  fVar3 = fVar3 * (*(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14));
  param_2[1] = fVar3;
  *param_2 = fVar1 + *(float *)(param_3 + 0x10);
  param_2[1] = fVar3 + *(float *)(param_3 + 0x14);
  return;
}

