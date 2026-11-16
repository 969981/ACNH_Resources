
void FUN_02725adc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x128) < *(int *)(lVar1 + 300)) {
    *(undefined8 *)(*(long *)(lVar1 + 0x130) + (long)*(int *)(lVar1 + 0x128) * 8) = param_2;
    *(int *)(lVar1 + 0x128) = *(int *)(lVar1 + 0x128) + 1;
  }
  return;
}

