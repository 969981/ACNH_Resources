
void FUN_003655b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    if (*(char *)(lVar1 + 0x98) != '\0') {
      FUN_0035bc14(*(undefined8 *)(lVar1 + 0x90),param_2,param_3);
    }
  }
  return;
}

