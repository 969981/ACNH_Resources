
void FUN_039bd77c(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __y;
  float __x;
  undefined2 local_d4 [2];
  uint local_d0;
  uint local_b8;
  undefined1 local_6f;
  
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar6 = -fVar4;
  fVar5 = fVar6;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  if (1.1920929e-06 <= 1.0 - fVar5) {
    __y = *(float *)(param_1 + 0x1c);
    __x = *(float *)(param_1 + 0xc);
    fVar4 = atan2f(*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34));
    fVar5 = asinf(fVar6);
    fVar6 = atan2f(__y,__x);
  }
  else {
    fVar5 = (fVar4 / fVar5) * -1.5707964;
    fVar6 = atan2f(-*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14) * fVar6);
    fVar4 = 0.0;
  }
  bVar1 = ABS(fVar4) == INFINITY;
  if (bVar1) {
    sinf(fVar4);
  }
  bVar2 = ABS(fVar5) == INFINITY;
  if (bVar2) {
    sinf(fVar5);
  }
  bVar3 = ABS(fVar6) == INFINITY;
  if (bVar3) {
    sinf(fVar6);
  }
  if (bVar1) {
    cosf(fVar4);
  }
  if (bVar2) {
    cosf(fVar5);
  }
  if (bVar3) {
    cosf(fVar6);
  }
  FUN_038e4cec(local_d4);
  local_d4[0] = 1;
  local_6f = 1;
  local_d0 = local_d0 | 1;
  local_b8 = local_b8 | 0xf;
  FUN_038e4d90(local_d4,param_2);
  FUN_038e4cec(local_d4);
  local_d4[0] = 1;
  local_d0 = local_d0 | 1;
  local_b8 = local_b8 | 0xf;
  FUN_038e4d90(local_d4,param_2);
  if (bVar1) {
    sinf(fVar4);
  }
  if (bVar2) {
    sinf(fVar5);
  }
  if (bVar3) {
    sinf(fVar6);
  }
  if (bVar1) {
    cosf(fVar4);
  }
  if (bVar2) {
    cosf(fVar5);
  }
  if (bVar3) {
    cosf(fVar6);
  }
  FUN_038e4cec(local_d4);
  local_d4[0] = 1;
  local_6f = 1;
  local_d0 = local_d0 | 1;
  local_b8 = local_b8 | 0xf;
  FUN_038e4d90(local_d4,param_2);
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_d0 = local_d0 | 1;
  FUN_038e4d90(local_d4,param_2);
  FUN_038e4cec(local_d4);
  local_d0 = local_d0 | 1;
  FUN_038e4d90(local_d4,param_2);
  if (bVar1) {
    sinf(fVar4);
  }
  if (bVar2) {
    sinf(fVar5);
  }
  if (bVar3) {
    sinf(fVar6);
  }
  if (bVar1) {
    cosf(fVar4);
  }
  if (bVar2) {
    cosf(fVar5);
  }
  if (bVar3) {
    cosf(fVar6);
  }
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_d0 = local_d0 | 1;
  FUN_038e4d90(local_d4,param_2);
  FUN_038e4cec(local_d4);
  local_d0 = local_d0 | 1;
  FUN_038e4d90(local_d4,param_2);
  return;
}

