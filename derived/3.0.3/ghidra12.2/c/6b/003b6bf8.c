
void FUN_003b6bf8(float param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = -128.0;
  if (-128.0 <= param_1) {
    fVar3 = param_1;
  }
  fVar2 = 128.0;
  if (param_1 <= 128.0) {
    fVar2 = fVar3;
  }
  lVar1 = param_2 + 0x5a8;
  if (param_5 != 0) {
    lVar1 = param_2 + 0x6a0;
  }
  FUN_003c4024(fVar2,lVar1,param_3 + 1);
  if (param_4 == 0) {
    FUN_003c3a30(param_2 + (long)param_5 * 0xf8 + 0x5a8,param_3 + 1);
    return;
  }
  return;
}

