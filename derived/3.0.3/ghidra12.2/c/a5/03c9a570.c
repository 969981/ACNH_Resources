
void FUN_03c9a570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))((long *)(param_1 + 0xf0));
  lVar2 = 0;
  if (*(long *)(lVar1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc9) + 8);
  }
  if (*(long *)(param_1 + 0xf8) == lVar2) {
    FUN_0037e140(param_1,param_2,param_3);
    return;
  }
  return;
}

