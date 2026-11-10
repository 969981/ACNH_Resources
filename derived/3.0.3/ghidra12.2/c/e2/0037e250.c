
void FUN_0037e250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x58) >> 1 & 1) == 0) || (*(char *)(param_1 + 0x5a) != '\0')) {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != param_1 + 0x20; lVar1 = *(long *)(lVar1 + 8)) {
      (**(code **)(*(long *)(lVar1 + -8) + 0xa0))((long *)(lVar1 + -8),param_2,param_3);
    }
  }
  return;
}

