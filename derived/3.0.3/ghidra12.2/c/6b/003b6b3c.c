
void FUN_003b6b3c(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (0.0 <= param_1) {
    fVar4 = param_1;
  }
  uVar3 = (param_3 + 4U) / 5;
  if (*(int *)(param_2 + 0xf8) < *(int *)(param_2 + 0xf4)) {
    *(float *)(param_2 + 0xec) =
         *(float *)(param_2 + 0xec) +
         ((*(float *)(param_2 + 0xf0) - *(float *)(param_2 + 0xec)) *
         (float)*(int *)(param_2 + 0xf8)) / (float)*(int *)(param_2 + 0xf4);
    *(float *)(param_2 + 0xf0) = fVar4;
    *(uint *)(param_2 + 0xf4) = uVar3;
    *(undefined4 *)(param_2 + 0xf8) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_2 + 0xf0);
    *(float *)(param_2 + 0xf0) = fVar4;
    *(uint *)(param_2 + 0xf4) = uVar3;
    *(undefined4 *)(param_2 + 0xf8) = 0;
  }
  if (param_3 == 0) {
    uVar1 = FUN_003c5b84();
    lVar2 = FUN_003cbb70(uVar1,0x20,1);
    *(undefined4 *)(lVar2 + 8) = 0x4d;
    *(undefined4 *)(lVar2 + 0x18) = 0x40;
    FUN_003cc15c(uVar1,lVar2);
    return;
  }
  return;
}

