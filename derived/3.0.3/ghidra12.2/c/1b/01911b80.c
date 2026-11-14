
void FUN_01911b80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)(**(code **)(*(long *)(param_1 + 0x38) + 0xf0))();
  fVar2 = *pfVar1;
  pfVar1 = (float *)(**(code **)(*(long *)(param_1 + 0x98) + 0xf0))((long *)(param_1 + 0x98));
  FUN_019100f8(fVar2 * 0.5,*pfVar1 * 0.5,param_2,param_3,param_4);
  return;
}

